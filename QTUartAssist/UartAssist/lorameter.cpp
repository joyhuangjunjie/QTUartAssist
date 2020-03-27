#include "lorameter.h"
#include "ui_lorameter.h"
#include <QMessageBox>
#include <QDebug>
#include "uartassist.h"
#include "protocol.h"
#include <stdio.h>


bool LoRaMeter::LoMeterWindow =false;


LoRaMeter::LoRaMeter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoRaMeter)
{
    ui->setupUi(this);
    LoMeterWindow = true;
}

LoRaMeter::~LoRaMeter()
{
    delete ui;
}

void LoRaMeter::on_ReadMeterNoButton_clicked()
{
    qDebug("uartClass.IsSerialPortOpen = %d",UartAssist::IsSerialPortOpen);
    if(UartAssist::IsSerialPortOpen)
    {
     char txlen;
     txlen = protocol::ReadMTNO();
     UartAssist ::serialPort.write((const char*)protocol::SendBuf,txlen);
     QByteArray temp((const char *)protocol::SendBuf,txlen);
     showSendMsg(temp);
     qDebug("uartClass.IsSerialPortOpen = %d",UartAssist::IsSerialPortOpen);
    }
    else
    {
        isNotOpenSerialprotBox = new QMessageBox("失败",       ///--这里是设置消息框标题
         "请先打开串口！",                                  ///--这里是设置消息框显示的内容
         QMessageBox::Warning,                            ///--这里是在消息框显示的图标
         QMessageBox::Ok | QMessageBox::Default,         ///---这里是显示消息框上的按钮情况
         QMessageBox::Cancel | QMessageBox::Escape,      ///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
         0);                                             ///---这里是 定义第三个按钮， 该例子 只是 了显示2个按钮
        isNotOpenSerialprotBox->show();
        if(isNotOpenSerialprotBox->exec() == QMessageBox::Ok) //消息框中的OK和cancle按钮
        {
            qDebug("请先打开串口！,点了OK键");
        }
        else
        {
            qDebug("请先打开串口！,点了cancle键");

        }

    }
}

void LoRaMeter::on_SetMeterNoButton_clicked()
{

}
//显示接收数据
void LoRaMeter::showRecMg(QString recvStr,int len)
{
    QString showReciveMsg;
    QString recvlen;
    recvlen = QString::number(len,10); //将int型len 装为QString 装的方式为10进制 带16则为16进制
    UartAssist::currentTime=QDateTime::currentDateTime();
    UartAssist::timeinfo= UartAssist::currentTime.toString("[yyyy-MM-d hh:mm:ss] ");
    showReciveMsg = UartAssist::timeinfo;
    showReciveMsg+="Rx:";
    showReciveMsg+="Len:";
    showReciveMsg+= recvlen;
    showReciveMsg+=": ";
    showReciveMsg+=recvStr;
    ui->TextEditLogPrintf->setTextColor(QColor("green"));
    ui->TextEditLogPrintf->append(showReciveMsg);

}

//显示发送数据
void LoRaMeter::showSendMsg(QByteArray sendArray)
{

        QString showSendMsg;
        UartAssist::currentTime=QDateTime::currentDateTime();
        UartAssist::timeinfo= UartAssist::currentTime.toString("[yyyy-MM-d hh:mm:ss] ");
        showSendMsg = UartAssist::timeinfo;
        showSendMsg+="Tx:";
        showSendMsg+="Len:";
        showSendMsg+= QString::number(sendArray.count(),10);
        showSendMsg+=": ";
        showSendMsg+= UartAssist::ByteArrayToHexStr(sendArray);
        ui->TextEditLogPrintf->setTextColor(QColor("black"));
        ui->TextEditLogPrintf->append(showSendMsg);

}




void LoRaMeter::closeEvent(QCloseEvent *event)
{


    ExitLoRaWindow = new QMessageBox("返回",
                                     "确定返回主界面吗？",
                         QMessageBox:: Critical,
                         QMessageBox::Ok | QMessageBox::Default,
                         QMessageBox::Cancel| QMessageBox::Escape,
                         0
                                     );
     ExitLoRaWindow->show();
    if(ExitLoRaWindow->exec() == QMessageBox::Ok)
    {
       event->accept();
       LoMeterWindow = false;
       qDebug("CLOSE LORA WINDOW......");

    }
    else
    {
       event->ignore();
       qDebug("LORA WINDOW  ignore ...");
    }
}



void LoRaMeter::RecvDataProgress(QString data, int len)
{

    qDebug() <<data;
    showRecMg(data,len); //显示收到的数据
    QByteArray temp=UartAssist::HexStrToByteArray(data);

    uchar *RecvBUF = (uchar *)temp.data(); //unsigned char * 与QByteArray 之间转换

//  char *RecvBUF=temp.data(); //char * 与QByteArray 之间转换
//    //校验值计算
//    for(int i=0;i<len;i++)
//    {
//       qDebug("RecvBUF[%i]=0x%x",i,RecvBUF[i]);
//    }

    uchar sumcrc = protocol::doSUMCRC(RecvBUF,len-1);
    qDebug("sumcrc = %02x\n",sumcrc);
    if(sumcrc == RecvBUF[len-1]) //校验正确
    {
         qDebug("校验正确");
        if(RecvBUF[0] == UART_START) //帧头正确
        {
           qDebug("帧头正确");

        }

    }



}












void LoRaMeter::on_ClearLog_clicked()
{

    ui->TextEditLogPrintf->clear();
}
