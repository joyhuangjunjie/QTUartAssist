#include "loraterminal.h"
#include "ui_loraterminal.h"
#include "uartassist.h"
#include "protocol.h"
#include "stdio.h"
#include "string.h"
//
bool LoRaTerminal::LoMeterTerminalWindow = false;

LoRaTerminal::LoRaTerminal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoRaTerminal)
{
    ui->setupUi(this);
    LoMeterTerminalWindow = true;
    qDebug("OPEN LORA WINDOW");

    initloraterminalWidget();

    connect(CommandTimeOut,SIGNAL(timeout()),this,SLOT(CommandTimeOut_deal()));
    connect(progressbarTimeout,SIGNAL(timeout()),this,SLOT(progressbarTimeout_deal()));
}

LoRaTerminal::~LoRaTerminal()
{
    delete ui;
}


void LoRaTerminal::initloraterminalWidget()
{
   CommandTimeOut = new QTimer;
   progressbarTimeout = new QTimer;
   //设置按钮样式
   enable_all_pushButton();

   ui->pushButton_clearlog->setStyleSheet("background-color:#4b960B;color:#000;font-size:12px;border-radius:5px;");


   //使能
   ui->pushButton_clearlog->setEnabled(true);


   //指令超时时间
   ui->spinBox_CMDtime->setValue(30000);
   CommandTimeOut->setInterval(ui->spinBox_CMDtime->value());

   ui->progressBar_BtoB->setRange(0,ui->spinBox_CMDtime->value());
   ui->progressBar_BtoB->setValue(0);
   progressbarTimeout->setInterval(1);

   //参数赋值
   progressbarTimecout = 0;

 // progressbarTimeout->start();
 // CommandTimeOut->start(); //开始倒计时


}

//累计用时进度条
void LoRaTerminal::progressbarTimeout_deal()
{


  QString showUSETIME;
  progressbarTimecout += 1;
  showUSETIME+="累计用时:";
  showUSETIME+=QString("%1").arg(progressbarTimecout);
  showUSETIME+=" ms";
  ui->progressBar_BtoB->setFormat(showUSETIME);
  ui->progressBar_BtoB->setValue(progressbarTimecout);

  if(progressbarTimecout >= ui->spinBox_CMDtime->value())
  {
     progressbarTimecout = 0;
     progressbarTimeout->stop();
     QMessageBox *probarTimeoutBox = new QMessageBox(
                      "超时！",
                      "指令超时无响应！请检查！",
                      QMessageBox::Question,
                      QMessageBox::Ok | QMessageBox::Default,
                      QMessageBox::Cancel | QMessageBox::Escape,
                      0
                 );
     probarTimeoutBox->show();
     if(probarTimeoutBox->exec() == QMessageBox::Ok) //消息框中的OK和cancle按钮
     {
         qDebug("指令超时无响应！请检查！,点了OK键");
         enable_all_pushButton();
     }
     else
     {
         qDebug("指令超时无响应！请检查！,点了cancle键");
         enable_all_pushButton();
     }


  }

}
//指令超时
void LoRaTerminal::CommandTimeOut_deal()
{

    CommandTimeOut->stop();
    progressbarTimeout->stop();
    CMDRUNFailBOX = new QMessageBox("超时！",         ///--这里是设置消息框标题
     "指令超时无响应！请检查！",                         ///--这里是设置消息框显示的内容
     QMessageBox::Question,                          ///--这里是在消息框显示的图标
     QMessageBox::Ok | QMessageBox::Default,         ///---这里是显示消息框上的按钮情况
     QMessageBox::Cancel | QMessageBox::Escape,      ///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
     0);                                             ///---这里是 定义第三个按钮， 该例子 只是 了显示2个按钮
    CMDRUNFailBOX->show();
    if(CMDRUNFailBOX->exec() == QMessageBox::Ok) //消息框中的OK和cancle按钮
    {
        qDebug("指令超时无响应！请检查！,点了OK键");
        enable_all_pushButton();
    }
    else
    {
        qDebug("指令超时无响应！请检查！,点了cancle键");
        enable_all_pushButton();
    }



}
//关闭所有按钮
void LoRaTerminal::disable_all_pushButton(void)
{

    ui->BtoBreadMeterButton->setStyleSheet(NULL);
    ui->pushButton_BToBDataSys->setStyleSheet(NULL);
    ui->pushButton_ReadjzqNo->setStyleSheet(NULL);
    ui->pushButton_WritejzqNo->setStyleSheet(NULL);

    ui->pushButton_BToBDataSys->setEnabled(false);
    ui->pushButton_ReadjzqNo->setEnabled(false);
    ui->pushButton_WritejzqNo->setEnabled(false);
    ui->BtoBreadMeterButton->setEnabled(false);
    ui->spinBox_CMDtime->setEnabled(false);
}

//使能所有按钮
void LoRaTerminal::enable_all_pushButton(void)
{

    ui->BtoBreadMeterButton->setStyleSheet("background-color:#4b960B;color:#000;font-size:12px;border-radius:10px;");
    ui->pushButton_BToBDataSys->setStyleSheet("background-color:#4b960B;color:#000;font-size:12px;border-radius:10px;");
    ui->pushButton_ReadjzqNo->setStyleSheet("background-color:#4b960B;color:#000;font-size:12px;border-radius:10px;");
    ui->pushButton_WritejzqNo->setStyleSheet("background-color:#4b960B;color:#000;font-size:12px;border-radius:10px;");


    ui->pushButton_BToBDataSys->setEnabled(true);
    ui->pushButton_ReadjzqNo->setEnabled(true);
    ui->pushButton_WritejzqNo->setEnabled(true);
    ui->BtoBreadMeterButton->setEnabled(true);
    ui->spinBox_CMDtime->setEnabled(true);

}

//显示点对点抄表数据
void LoRaTerminal::showBTOBDatainUI(uchar* recvStr, int len)
{

    float metNO,vole;
    QString meterNoshow;//
    QString meterstatus;
    QString metervoleshow;
    QString metervershow;

    for(int i=0;i<len;i++)
    {
      qDebug("recvStr[%d]=0x%02x",i,recvStr[i]);
    }

    //解析表读数
    metNO = (float)(recvStr[8]<<16|recvStr[7]<<8|recvStr[6])/10;
    qDebug("meno = %f",metNO);
    meterNoshow = QString::number(metNO,'f',1);
    ui->lineEdit_MT_Data->setStyleSheet("font-size:10px;color:#fff;font-weight:bold;background-color:#cc0000;");
    ui->lineEdit_MT_Data->setText(meterNoshow);

    //解析表状态
    switch (recvStr[9]&0xc0) {
    case 0xc0:
        meterstatus = "满电";
        break;
    case 0x80:
        meterstatus = "有电";
        break;
    case 0x40:
        meterstatus = "欠电";
        break;
    case 0x00:
        meterstatus = "掉电";
        break;
    default:
        break;
    }

    meterstatus+=",";

    switch (recvStr[9]&0x30) {
    case 0x30:
        meterstatus+="磁干扰";
        break;
    case 0x10:
        meterstatus+="单管故障";
        break;
    case 0x20:
        meterstatus+="干扰";
        break;
    case 0x00:
        meterstatus+="无异常";
        break;
    default:
        break;
    }
    meterstatus+=",";

    switch (recvStr[9]&0x03) {
    case 0x03:
        meterstatus+="无阀门";
        break;
    case 0x01:
        meterstatus+="阀开";
        break;
    case 0x02:
        meterstatus+="阀关";
        break;
    case 0x00:
        meterstatus+="阀门异常";
        break;
    default:
        break;
    }
  ui->lineEdit_MT_Status->setStyleSheet("font-size:10px;color:#fff;font-weight:bold;background-color:#cc0000;");
  ui->lineEdit_MT_Status->setText(meterstatus);

  //解析电压
  vole = (float)recvStr[10]/10;
  qDebug("vole = %f",vole);
  metervoleshow = QString::number(vole,'f',1);//数字是几就保留几位小数
  metervoleshow+="V";
  ui->lineEdit_Volatage->setStyleSheet("font-size:10px;color:#fff;font-weight:bold;background-color:#cc0000;");
  ui->lineEdit_Volatage->setText(metervoleshow);


  //解析版本号
  char ver[5];
  sprintf(ver,"0x%02x",recvStr[11]);
  QString mver((char *)ver);
  ui->lineEdit_MT_ver->setStyleSheet("font-size:10px;color:#fff;font-weight:bold;background-color:#cc0000;");
  ui->lineEdit_MT_ver->setText(mver);

  sprintf(ver,"0x%02x",recvStr[12]);
  QString pver((char *)ver);
  ui->lineEdit_Protocol_ver->setStyleSheet("font-size:10px;color:#fff;font-weight:bold;background-color:#cc0000;");
  ui->lineEdit_Protocol_ver->setText(pver);


  //解析月冻结
  char dongjiliang[40];

  metNO = (float)(recvStr[18]<<16|recvStr[17]<<8|recvStr[16])/10;
  qDebug("解析月冻结metNO = %f",metNO);

  sprintf(dongjiliang,"冻结时间:%d-%d-%d,冻结量:%.1f",recvStr[13],recvStr[14],recvStr[15],metNO);
  QString showdjl(dongjiliang);

  ui->lineEdit_DQ_DJL->setStyleSheet("font-size:10px;color:#000000;background-color:#cc0000;");
  ui->lineEdit_DQ_DJL->setText(showdjl);

  //解析信号强度
  char rssishow[30];
  sprintf(rssishow,"Rssi=%ddBm,Snr=%ddBm",recvStr[20],recvStr[19]);
  QString showssi(rssishow);
  ui->lineEdit_RSSI->setStyleSheet("font-size:10px;color:#000000;background-color:#cc0000;");
  ui->lineEdit_RSSI->setText(showssi);


}






//显示错误信息
void LoRaTerminal::showErroMg(QString recvStr)
{
    QString showReciveMsg;
    UartAssist::currentTime=QDateTime::currentDateTime();
    UartAssist::timeinfo= UartAssist::currentTime.toString("[yyyy-MM-d hh:mm:ss] ");
    showReciveMsg = UartAssist::timeinfo;
    showReciveMsg+= "收到数据：";
    showReciveMsg+= recvStr;
    ui->textEditLogPrintf->setTextColor(QColor("red"));
    ui->textEditLogPrintf->append(showReciveMsg);

}


void LoRaTerminal::showmessBOXFail()
{

   CMDRUNFailBOX = new QMessageBox("操作失败",       ///--这里是设置消息框标题
    "请检查后重试！",                                  ///--这里是设置消息框显示的内容
    QMessageBox::Question,                            ///--这里是在消息框显示的图标
    QMessageBox::Ok | QMessageBox::Default,         ///---这里是显示消息框上的按钮情况
    QMessageBox::Cancel | QMessageBox::Escape,      ///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
    0);                                             ///---这里是 定义第三个按钮， 该例子 只是 了显示2个按钮
   CMDRUNFailBOX->show();
   if(CMDRUNFailBOX->exec() == QMessageBox::Ok) //消息框中的OK和cancle按钮
   {
       qDebug("请检查后重试！,点了OK键");
   }
   else
   {
       qDebug("请检查后重试！,点了cancle键");
   }


}

void LoRaTerminal::showRecMg(QString recvStr, int len)
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
    ui->textEditLogPrintf->setTextColor(QColor("green"));
    ui->textEditLogPrintf->append(showReciveMsg);
}

void LoRaTerminal::showOpenSeriaprotMsg(void)
{
    NotOpenSerialprotBox = new QMessageBox("失败",    ///--这里是设置消息框标题
    "请先打开串口！",                                  ///--这里是设置消息框显示的内容
    QMessageBox::Warning,                            ///--这里是在消息框显示的图标
    QMessageBox::Ok | QMessageBox::Default,         ///---这里是显示消息框上的按钮情况
    QMessageBox::Cancel | QMessageBox::Escape,      ///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
    0);                                             ///---这里是 定义第三个按钮， 该例子 只是 了显示2个按钮
   NotOpenSerialprotBox->show();
   if(NotOpenSerialprotBox->exec() == QMessageBox::Ok) //消息框中的OK和cancle按钮
   {
       qDebug("请先打开串口！,点了OK键");

   }
   else
   {
       qDebug("请先打开串口！,点了cancle键");
   }

}

void LoRaTerminal::showSendMsg(QByteArray sendArray)
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
    ui->textEditLogPrintf->setTextColor(QColor("black"));
    ui->textEditLogPrintf->append(showSendMsg);
}


void LoRaTerminal::on_pushButton_clearlog_clicked()
{
    ui->textEditLogPrintf->clear();
}

void LoRaTerminal::closeEvent(QCloseEvent *event)
{
    ExitLoRaTerminlWindow = new QMessageBox("返回",
                                     "确定返回主界面吗？",
                         QMessageBox:: Critical,
                         QMessageBox::Ok | QMessageBox::Default,
                         QMessageBox::Cancel| QMessageBox::Escape,
                         0
                                     );
    ExitLoRaTerminlWindow->show();
    if(ExitLoRaTerminlWindow->exec() == QMessageBox::Ok)
    {
       event->accept();
       LoMeterTerminalWindow = false;
       CommandTimeOut->stop();
       progressbarTimeout->stop();
       qDebug("CLOSE LoRaTerminlWindow WINDOW......");

    }
    else
    {
       event->ignore();
       qDebug("LORA LoRaTerminlWindow  ignore ...");
    }
}





void LoRaTerminal::on_pushButton_ReadjzqNo_clicked()
{

    if(UartAssist::IsSerialPortOpen == false)
    {

      showOpenSeriaprotMsg();
    }
    else
    {
        disable_all_pushButton();
        CommandTimeOut->start();
        progressbarTimecout = 0;
        progressbarTimeout->start();

        int txlen = protocol::readjzqNo();
        UartAssist ::serialPort.write((const char*)protocol::SendBuf,txlen);
        QByteArray temp((const char*)protocol::SendBuf,txlen);
        showSendMsg(temp);
    }

}

void LoRaTerminal::on_pushButton_WritejzqNo_clicked()
{

    if(UartAssist::IsSerialPortOpen == false)
    {
        showOpenSeriaprotMsg();

    }
    else
    {
        disable_all_pushButton(); //
        CommandTimeOut->start();
        progressbarTimecout = 0;
        progressbarTimeout->start();

        GetJzqNoInUi();
        int txlen = protocol::writejzqNo(); //
        UartAssist ::serialPort.write((const char*)protocol::SendBuf,txlen);
        QByteArray temp((const char*)protocol::SendBuf,txlen);
        showSendMsg(temp);
    }

}

void LoRaTerminal::on_pushButton_BToBDataSys_clicked()
{
    if(UartAssist::IsSerialPortOpen == false)
    {
        showOpenSeriaprotMsg();
    }
    else
    {
        disable_all_pushButton(); //
        CommandTimeOut->start();
        progressbarTimecout = 0;
        progressbarTimeout->start();
        //
        GetSysParaInUi_ForBTOBSys();

    }

}

void LoRaTerminal::on_BtoBreadMeterButton_clicked()
{

    if(UartAssist::IsSerialPortOpen == false)
    {
        showOpenSeriaprotMsg();
    }
    else
    {
        disable_all_pushButton(); //
        CommandTimeOut->start();
        progressbarTimecout = 0;
        progressbarTimeout->start();
        qDebug("执行点对点抄表指令");
        //从UI中读取集中器地址和表地址，下发指令
        GetJzqNoInUi();
        GetMeterNoInUi_ForBTOBRead();
        int txlen = protocol::BtoBReadMT(); //
        UartAssist ::serialPort.write((const char*)protocol::SendBuf,txlen);
        QByteArray temp((const char*)protocol::SendBuf,txlen);
        showSendMsg(temp);
    }

}
void LoRaTerminal::GetSysParaInUi_ForBTOBSys(void)
{



}

void LoRaTerminal::GetMeterNoInUi_ForBTOBRead(void)
{

 QString sendMsg = ui->lineEdit_BtoBmeterNo_For_ReadMT->text();
 QByteArray temp=sendMsg.toLatin1();
 temp=UartAssist::HexStrToByteArray(sendMsg);
 if(temp.count() != 0)
 {
 uchar *data = (uchar *)temp.data();   //unsigned char * 与QByteArray 之间转换
 memcpy(protocol::MeterNo,data,sizeof(protocol::MeterNo));
 }
 else
 memset(protocol::MeterNo,0,sizeof(protocol::MeterNo));
}


void LoRaTerminal::GetJzqNoInUi(void)
{

   QString sendMsg = ui->lineEdit_JzqNo->text();
   QByteArray temp=sendMsg.toLatin1();
   temp=UartAssist::HexStrToByteArray(sendMsg);
   if(temp.count() != 0)
   {
   uchar *data = (uchar *)temp.data();   //unsigned char * 与QByteArray 之间转换
   memcpy(protocol::JZQNO,data,sizeof(protocol::JZQNO));
   }
   else
      memset(protocol::JZQNO,0,sizeof(protocol::JZQNO));

}

void LoRaTerminal::setTextJzqNoInUi(QString data)
{

    ui->lineEdit_JzqNo->setText(data);

}

void LoRaTerminal::on_spinBox_CMDtime_valueChanged(int arg1)
{
    CommandTimeOut->setInterval(ui->spinBox_CMDtime->value());
    ui->progressBar_BtoB->setRange(0,ui->spinBox_CMDtime->value());

    qDebug()<<ui->spinBox_CMDtime->value();
}





//数据处理
void LoRaTerminal::RecvDataProgress(QString data, int len)
{

     showRecMg(data,len); //在日志中显示收到的数据
     enable_all_pushButton();
     CommandTimeOut->stop();
     progressbarTimeout->stop();
     progressbarTimecout = 0;
     //数据处理
     QByteArray temp=UartAssist::HexStrToByteArray(data);
     uchar *RecvBUF = (uchar *)temp.data(); //unsigned char * 与QByteArray 之间转换 得到数据
     ushort p188DI;
     struct_protocol_188 *rx;
     rx = (struct_protocol_188*)RecvBUF;
     p188DI = (ushort)(rx->DI[0]<<8|rx->DI[1]); //提取标识符控制码
     if(rx->FrameHead == USART_STX)
     {
         qDebug("帧头正确"); //计算校验值
         uchar crc =protocol::doSUMCRC((uchar*)rx,(rx->DataLen+11));
         qDebug("crc = 0x%02x",crc);
         if(crc == rx->Dat[rx->DataLen - 3])
         {
              qDebug("校验正确"); //数据解析
              switch(p188DI)
              {
                 case RD_ADR_ID: //读地址
                  {
                    //提取地址信息显示到地址栏
                    if(rx->CtlCode == (RD_ADR|0x80)) //指令应答正确
                    {
                        QByteArray temp((const char*)rx->Addr,7);
                        ui->lineEdit_JzqNo->setText(temp.toHex());
                    }
                    else
                    {
                      showmessBOXFail();
                    }
                  }break;
                 case WR_ADR_ID://写地址
                  {
                      QByteArray temp((const char*)rx->Addr,7);
                      ui->lineEdit_JzqNo->setText(temp.toHex());
                  }break;

                  case BTOB_METER_Read:
                  {
                    if(rx->CtlCode == (METER_DAT|0x80)) //指令应答正确
                    {
                        if(rx->DataLen == 0x03)
                        {
                            disable_all_pushButton();
                            progressbarTimecout =0;
                            ui->progressBar_BtoB->setValue(0);
                            progressbarTimeout->start();

                        }
                        else if(rx->DataLen > 0x03) //抄表数据
                            {
                                progressbarTimecout =0;
                                showBTOBDatainUI(rx->Dat,21);

                        }

                    }
                    else
                    {
                        showmessBOXFail();
                    }


                  }
                      break;






                 default : break;
               }


         }
         else
         {


             QString erroinfo;
             char err[20];
             sprintf(err,"SUMCRC = 0x%02X",crc);
             erroinfo = "校验错误  ";
             erroinfo+= QString((const char*)err);
             showErroMg(erroinfo);
         }

     }
     else
     {

        showErroMg("帧头错误");
     }

}






