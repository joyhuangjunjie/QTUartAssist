#include "uartassist.h"
#include "ui_uartassist.h"
#include <QShortcut>
#include <QFile>
#include <QDebug>
#include <QIcon>
#include "lorameter.h"
#include "protocol.h"
#include "loraterminal.h"
#include "myhelper.h"
//初始化静态变量
QSerialPort UartAssist::serialPort;



bool UartAssist::IsServerListenOpen = false;
bool UartAssist::IsSerialPortOpen = false;
bool UartAssist::IsSendByHex;
bool UartAssist::IsReceiveByHex;

bool UartAssist::IsSendByCom= false;
bool UartAssist::IsSendByTcp= false;
bool UartAssist::saveDataToTXTFileEn = false;



QDateTime UartAssist::currentTime;
QString UartAssist::timeinfo;
QString UartAssist::txtfileNamePath;



UartAssist::UartAssist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UartAssist)
{

      ui->setupUi(this);

      initSerialSetCombox();  //SerialSetCombox填充串口设置里面的值
      initWidget();


      connect(ui->serialPortcomboBox,SIGNAL(activated(int)),this,SLOT(InitSerialPort()));
      connect(ui->BaudRatecomboBox,SIGNAL(activated(int)),this,SLOT(setBaudRateByIndex()));

      connect(ui->check_Repeat,SIGNAL(stateChanged(int)),this,SLOT(onCheckRepeatCheck(int))); //循环发送使能
      connect(ui->ShowSend,SIGNAL(stateChanged(int)),this,SLOT(onCheckShowSendMsg(int)));     //显示发送
      connect(ui->ShowTime,SIGNAL(stateChanged(int)),this,SLOT(onCheckShowTime(int)));        //显示时间
      connect(ui->CalSendWriteInfo,SIGNAL(stateChanged(int)),this,SLOT(onCheckCalInfo(int))); //收发统计
      connect(ui->HexRadio_Receive,SIGNAL(toggled(bool)),this,SLOT(onCheckSendByHex(bool)));
      connect(ui->HexRadio,SIGNAL(toggled(bool)),this,SLOT(onCheckReciveByHex(bool)));

      connect(repeatSend,SIGNAL(timeout()),this,SLOT(onRepeatTimer()));    //循环发送时间到

      connect(receiveTimer,SIGNAL(timeout()),this,SLOT(onComRecvProgress())); //数据接收处理

      connect(netreceiveTimer,SIGNAL(timeout()),this,SLOT(onNetRecvProgress()));

      connect(ui->sendBtn,SIGNAL(clicked()),this,SLOT(sendData()));        //发送数据
      connect(ui->clear,SIGNAL(clicked()),this,SLOT(onClearToolBtn()));    //清空数据

      connect(ui->RefreshBtn,SIGNAL(clicked()),this,SLOT(onRefreshBtn()));  //更新按钮




}

UartAssist::~UartAssist()
{
    delete ui;

}




void UartAssist::InitSerialPort(void)
{
    QVariant data=ui->serialPortcomboBox->currentText();  //得到现在的COM号
    portToOpen=data.toString();
    QString  portStatus=portToOpen+" closed";

    ui->textBrowserLog->setTextColor(QColor("red"));
    ui->textBrowserLog->setText(portStatus.toUpper());

    //重新开启串口时
    if(IsSerialPortOpen)
    {
        qDebug() << "openBUTONN opend";
        ui->openSerialPortButton->setText("打开");
        IsSerialPortOpen=false;

    }

}

//设置波特率的槽函数
int UartAssist::setBaudRateByIndex(void)
{
    QVariant data=ui->BaudRatecomboBox->currentText();
    int baudRate;
    switch(data.toInt())
    {

    case 115200:
        baudRate=QSerialPort::Baud115200;
        break;
    case 9600:
        baudRate=QSerialPort::Baud9600;
        break;
    case 4800:
        baudRate=QSerialPort::Baud9600;
        break;
    case 19200:
        baudRate=QSerialPort::Baud19200;
        break;
    case 38400:
        baudRate=QSerialPort::Baud38400;
        break;
    case 57600:
        baudRate=QSerialPort::Baud57600;
        break;
    default:
        baudRate=QSerialPort::Baud115200;
    }
    return baudRate;

}

//设置是否重复发送数据
void UartAssist::onCheckRepeatCheck(int state)
{
    if(state==Qt::Checked)
    {
        repeatSend->setInterval(ui->spinBox->value());
        qDebug() << "循环发送使能 " << ui->spinBox->value();
        IsRepeatSend=true;
    }
    else
    {
        IsRepeatSend=false;
        repeatSend->stop();
        ui->sendBtn->setText("发送");
    }
}
//设置是否显示发送数据
void UartAssist::onCheckShowSendMsg(int state)
{
    if(state==Qt::Checked)
    {
        IsShowSendMsg=true;
    }
    else
    {
        IsShowSendMsg=false;
    }
}

void UartAssist::onCheckShowTime(int state)
{

    if(state==Qt::Checked)
    {
        IsShowCurrentTime=true;
    }
    else
    {
        IsShowCurrentTime=false;
    }

}
//设置发送数据格式
void UartAssist::onCheckSendByHex(bool checked)
{

    if(checked==true)
    {
        IsSendByHex=true;
    }
    else
    {
        IsSendByHex=false;
    }
    showSendFormatWarnMsg(IsSendByHex);

}
//设置接收数据格式
void UartAssist::onCheckReciveByHex(bool checked)
{
    if(checked==true)
    {
        IsReceiveByHex=true;
    }
    else
    {
        IsReceiveByHex=false;
    }
}



void UartAssist::on_checkBox_UARTsendEN_toggled(bool checked)
{
    if(checked==true)
    {
        IsSendByCom=true;
        qDebug("IsSendByCom=true");
    }
    else
    {
        IsSendByCom=false;
        qDebug("IsSendByCom=false");
    }
}

void UartAssist::on_checkBox_NETsendEN_toggled(bool checked)
{
    if(checked==true)
    {
        IsSendByTcp=true;
    }
    else
    {
        IsSendByTcp=false;
    }

}


//统计发送次数和接收次数
void UartAssist::onCheckCalInfo(int state)
{

    QString calInfo;
    if(state==Qt::Checked)
    {
        calInfo+="\n<======收发统计信息======>\n";
        calInfo+="发出数据次数：";
        calInfo+=QString::number(sendTime)+"\n";
        calInfo+="收到数据次数：";
        calInfo+=QString::number(receiveTime)+"\n";
        ui->RecvtextEdit->append(calInfo);
    }

}



void UartAssist::sendData()
{


    if(IsRepeatSend)
    {
        if(StopSendDataFlag == true)
        {
            ui->sendBtn->setText("发送");
            StopSendDataFlag =false;
            repeatSend->stop();
        }
        else
        {

            ui->sendBtn->setText("停止发送");
            StopSendDataFlag = true;
            repeatSend->start();
        }
    }
    Write();

}

void UartAssist::onRepeatTimer() //timeouT信号
{
    Write();
}

void UartAssist::onReadyRead()
{

    receiveTimer->start();
    comRecvdata+=serialPort.readAll(); //防止接收数据包不完整的情况

}

void UartAssist::onComRecvProgress()
{
    receiveTimer->stop();
    Read();
}



void UartAssist::onClearToolBtn()
{

    ui->RecvtextEdit->clear();
    reciveCount=0;
    sendCount=0;
    sendTime=0;
    receiveTime=0;
//	serialPortAssitant.status->RxByte->clear();
//	serialPortAssitant.status->TxByte->clear();

}

void UartAssist::onRefreshBtn()
{

    if(IsSerialPortOpen)
    {
       IsSerialPortOpen=false;
       serialPort.close();
       QString  portStatus=serialPort.portName()+" closed";
       ui->textBrowserLog->setTextColor(QColor("red"));
       ui->textBrowserLog->setText(portStatus.toUpper());

       ui->openSerialPortButton->setText("打开");
       ui->sendBtn->setEnabled(false);
       ui->serialPortcomboBox->setEnabled(true); //串口设置按钮关闭
       ui->BaudRatecomboBox->setEnabled(true);
       ui->ParityWidthcomboBox->setEnabled(true);
       ui->DataWidthcomboBox->setEnabled(true);
       ui->StopWidthcomboBox->setEnabled(true);

       ui->serialPortcomboBox->clear();
    }
    getSerialPortID();

}

void UartAssist::showStatusMsg()
{
    QString serialStatusInfo;
    serialStatusInfo= ui->serialPortcomboBox->currentText().toUpper();
    serialStatusInfo+=" OPENED";
    serialStatusInfo+=" , ";
    serialStatusInfo+=QString::number(serialPort.baudRate());
    serialStatusInfo+=" , ";
    serialStatusInfo+=ui->DataWidthcomboBox->currentText();
    serialStatusInfo+=" , ";
    serialStatusInfo+=ui->ParityWidthcomboBox->currentText().toUpper();
    serialStatusInfo+=" , ";
    serialStatusInfo+=ui->StopWidthcomboBox->currentText();

    ui->textBrowserLog->setTextColor(QColor("blue"));
    ui->textBrowserLog->setText(serialStatusInfo);

}




//转换为错误信息
QString UartAssist::getValueContent(QSerialPort::SerialPortError errorIndex)
{


    QString errorContent;
    switch(errorIndex)
    {
    case 0:
        errorContent="No Error";break;
    case 1:
        errorContent="Device Not Found";break;
    case 2:
        errorContent="Permission Error";break;
    case 3:
        errorContent="Open Error";break;
    case 4:
        errorContent="Not Open Error";break;
    case 5:
        errorContent="Parity Error";break;
    case 6:
        errorContent="Framing Error";break;
    case 7:
        errorContent="Break Condition Error";break;
    case 8:
        errorContent="Write Error";break;
    case 9:
        errorContent="Read Error";break;
    case 10:
        errorContent="Resource Error";break;
    case 11:
        errorContent="Unsupported Operation Error";break;
    case 12:
        errorContent="Time Out Error";break;
    case 13:
        errorContent="No Data Received";break;

    default:
        errorContent="No error";
    }
    return errorContent;
}

void UartAssist::showErrMsg(bool bShowTime,QSerialPort::SerialPortError errorEum)
{

    if(bShowTime)
    {
        errorInfo=" ";
        currentTime=QDateTime::currentDateTime();
        timeinfo=currentTime.toString("yyyy/MM/d--hh:mm:ss");
        errorInfo="错误提示: ";
        errorInfo+=timeinfo;
        errorInfo+="\n";
    }
    else
    {
        errorInfo=" ";
        errorInfo="错误提示: ";
        errorInfo+="\n";
    }
    ui->RecvtextEdit->append(errorInfo+getValueContent(errorEum));



}

void UartAssist::showSendFormatWarnMsg(bool bSendByHex)
{
    if(bSendByHex)
    {
        if(IsShowCurrentTime)
        {
            errorInfo=" ";
            currentTime=QDateTime::currentDateTime();
            timeinfo=currentTime.toString("yyyy-MM_-d  hh:mm:ss");
            errorInfo=QString::fromLocal8Bit("提示信息   ");
            errorInfo+=timeinfo;
            errorInfo+="\n";
        }
        else
        {
            errorInfo=" ";
            errorInfo=QString::fromLocal8Bit("提示信息   ");
            errorInfo+="\n";
        }
        ui->RecvtextEdit->append("当前选择为16进制发送，请输入偶数倍长度!");
    }
}




void UartAssist::initSerialSetCombox()
{
   getSerialPortID();
    QString BaudRateList[]={"9600","115200","4800","19200","38400","57600"};
    for(int i=0;i<6;i++)
    {
        ui->BaudRatecomboBox->addItem(BaudRateList[i]);
    }

    QString dataWidthList[]={"8","7","6","5"};
    for(int i=0;i<4;i++)
    {
        ui->DataWidthcomboBox->addItem(dataWidthList[i]);
    }

    QString ParityWidthList[]={"None","Odd","Even"};
    for(int i=0;i<3;i++)
    {
        ui->ParityWidthcomboBox->addItem(ParityWidthList[i]);
    }

    QString StopWidth[]={"1","1.5","2"};
    for(int i=0;i<3;i++)
    {
        ui->StopWidthcomboBox->addItem(StopWidth[i]);
    }

}

void UartAssist::getSerialPortID()
{

    //移除已有的列表信息
    for(int i=0;i<ui->serialPortcomboBox->count();i++)
    {
        ui->serialPortcomboBox->removeItem(i);
    }
    serialList= serialInfo->availablePorts();
    int nSerialnum=serialList.length();

    ui->RecvtextEdit->setTextColor(QColor("blue"));
    ui->RecvtextEdit->clear();
    ui->RecvtextEdit->setText("找到以下串口：");
    for(int i=0;i<nSerialnum;i++)
    {
        QString serialName=serialList[i].portName();
        QString serialDesp=serialList[i].description();
        ui->serialPortcomboBox->addItem(serialName);
        ui->RecvtextEdit->append(serialName);
        ui->RecvtextEdit->append(serialDesp);
    }

    QString currentPort=ui->serialPortcomboBox->currentText();
    portToOpen=currentPort;

}

void UartAssist::initWidget()
{
    //设置标题  :/new/prefix1
    QIcon Windowicon;
    Windowicon.addFile(QStringLiteral(":/new/prefix1/Resources/6_96px_1168279_easyicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
    setWindowIcon(Windowicon); //图标

    setWindowTitle("调试助手 By HuangJunJie");  //
    setFixedSize(this->size());
   // setWindowFlags(Qt::WindowMaximizeButtonHint); //M没有最大化按钮





    //初始打开时，光标在输入行上
//	ui->sendLine->setFocus();
//	ui->ReciveWidget->setOverwriteMode(false);

    //设置spinBox的上下限制
    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(100000); //单位ms
    ui->spinBox->setValue(150);
    ui->spinBox->setSingleStep(1);

    //绑定快捷键
    QShortcut *sendkey=new QShortcut(QKeySequence(Qt::Key_Return),this);//
    connect(sendkey,SIGNAL(activated()),ui->sendBtn,SLOT(click()));

    //初始化控件

    //移动光标到末尾
     QTextCursor cursor = ui->RecvtextEdit->textCursor();
     cursor.movePosition(QTextCursor::End);
     ui->RecvtextEdit->setTextCursor(cursor);


     QIcon icon;
     icon.addFile(QStringLiteral(":/new/prefix1/Resources/open_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
     ui->openSerialPortButton->setIcon(icon);
     ui->openSerialPortButton->setIconSize(QSize(48, 48));

    ui->RxLCD->setStyleSheet("background-color:#717171;");
    ui->TxLCD->setStyleSheet("background-color:#717171;");

    ui->sendBtn->setEnabled(false);
    ui->sendBtn->setStyleSheet("font-size:18px;font-weight:bold;background-color:#DEDEDE;border:1px solid #666;border-radius:5px;");

    ui->openSerialPortButton->setText("打开");  //



    ui->clear->setToolTip("清除当前数据");        //光标指在按钮上显示这个

    ui->clear->setStyleSheet("background-color:#4b960B;color:#fff;font-size:12px;border-radius:5px;");



    QIcon Reficon;
    Reficon.addFile(QStringLiteral(":/new/prefix1/Resources/refresh_32px_1133650.png"), QSize(), QIcon::Normal, QIcon::Off);
    ui->RefreshBtn->setIcon(Reficon);

    ui->RefreshBtn->setStyleSheet("background-color:#F0F0F0;");

    ui->cleanSendBtn->setToolTip("清除发送数据");
    ui->cleanSendBtn->setStyleSheet("background-color:#4b960B;color:#fff;font-size:12px;border-radius:10px;");


    errorValue=QSerialPort::NoError;

    repeatSend =new QTimer;  //循环发送时间
    receiveTimer=new QTimer; //接收时间
    netreceiveTimer = new QTimer;

    sendCount=0;                                                //统计发送的Byte
    reciveCount=0;                                            //统计接收的Byte


    Isadata = 40;

    sendTime =0;    //收发条数清零
    receiveTime =0;

    StopSendDataFlag =false;
    IsRepeatSend=false;       //循环发送标志
    IsSerialPortOpen=false;   //串口打开标志
    IsReadSuccessed=false;
    IsWrittenSuccessed=false;   //


    //是否显示发送数据
    IsShowSendMsg=true;
    ui->ShowSend->setCheckState(Qt::Checked);

    //是否显示时间
    IsShowCurrentTime=false;
    ui->ShowTime->setCheckState(Qt::Unchecked);//

    //发送格式为16进制
    IsSendByHex=true;
    ui->HexRadio->setChecked(true);

    //接收格式为16进制
    IsReceiveByHex=true;
    ui->HexRadio_Receive->setChecked(true);


    //默认串口发送
    ui->checkBox_UARTsendEN->setChecked(true);


    currentTime=QDateTime::currentDateTime();
    timeinfo=currentTime.toString("yyyy__MM__d__hh:mm:ss");

    receiveTimer->setInterval(100); //接收超时时间100ms

    netreceiveTimer->setInterval(100); //500ms


     /***************************初始化网络窗口一栏*********************************/

    ui->comboBox_nettype->addItem("TcpServer");
    ui->lineEdit_netport->setText("12345");
   //得到本机的IP地址
    QString myipaddr = get_localmachine_ip();
    ui->comboBox_myIPaddr->addItem(myipaddr);

    ui->pushButton_clearListenlog->setToolTip("清除监听日志");
    ui->pushButton_clearListenlog->setStyleSheet("background-color:#4b960B;color:#fff;font-size:12px;border-radius:10px;");

    //
    server=new myTcpServer(this);
    connect(server,SIGNAL(ClientConnect(int,QString,int)),this,SLOT(ClientConnect(int,QString,int)));
    connect(server,SIGNAL(ClientDisConnect(int,QString,int)),this,SLOT(ClientDisConnect(int,QString,int)));
    connect(server,SIGNAL(ClientReadData(int,QString,int,QByteArray)),this,SLOT(ClientReadData(int,QString,int,QByteArray)));


    /***************************初始化网络窗口一栏*********************************/

}

/**
  *@brief: 得到本机的IP地址
  *@param:
  *@author: hello world
  *@return:
  *@date: 2018-1-1
  */
QString UartAssist::get_localmachine_ip(void)
{
    QString ipaddress;
    QList<QHostAddress> ipaddressList = QNetworkInterface::allAddresses();

    for(int i=0;i<ipaddressList.size();i++)
    {
        if(ipaddressList.at(i)!= QHostAddress::LocalHost &&
                ipaddressList.at(i).toIPv4Address()
                ){
            ipaddress = ipaddressList.at(i).toString();
            break;
        }

    }
    // if we did not find one, use IPv4 localhost
    qDebug() << ipaddress;
    if (ipaddress.isEmpty())
            ipaddress = QHostAddress(QHostAddress::LocalHost).toString();
    return ipaddress;

}

//获取串口配置函数
bool UartAssist::getSerialPortConfig()
{
    //获取串口配置
    mPortName = ui->serialPortcomboBox->currentText();
    mBaudRate = ui->BaudRatecomboBox->currentText();
    mParity =   ui->ParityWidthcomboBox->currentText();
    mDataBits = ui->DataWidthcomboBox->currentText();
    mStopBits = ui->StopWidthcomboBox->currentText();

    //设置串口
    //端口号
    serialPort.setPortName(mPortName);

    //波特率
    if("2400" == mBaudRate)
    {
          serialPort.setBaudRate(QSerialPort::Baud2400);
    }
    else if("4800" == mBaudRate)
    {
          serialPort.setBaudRate(QSerialPort::Baud4800);
    }
    else if("9600" == mBaudRate)
    {
          serialPort.setBaudRate(QSerialPort::Baud9600);
    }
    else if("19200" == mBaudRate)
    {
         serialPort.setBaudRate(QSerialPort::Baud19200);
    }
    else if("38400" == mBaudRate)
    {
         serialPort.setBaudRate(QSerialPort::Baud38400);
    }
    else if("57600" == mBaudRate)
    {
         serialPort.setBaudRate(QSerialPort::Baud57600);
    }
    else if("115200" == mBaudRate)
    {
         serialPort.setBaudRate(QSerialPort::Baud115200);
    }

    //校验位
    if("EVEN" == mParity)
    {
         serialPort.setParity(QSerialPort::EvenParity);
    }
    else if("ODD" == mParity)
    {
         serialPort.setParity(QSerialPort::OddParity);
    }
    else
    {
         serialPort.setParity(QSerialPort::NoParity);
    }

    //数据位
    if("5" == mDataBits)
    {
         serialPort.setDataBits(QSerialPort::Data5);
    }
    else if("6" == mDataBits)
    {
         serialPort.setDataBits(QSerialPort::Data6);
    }
    else if("7" == mDataBits)
    {
         serialPort.setDataBits(QSerialPort::Data7);
    }
    else
    {
         serialPort.setDataBits(QSerialPort::Data8);
    }

    //停止位
    if("1.5" == mStopBits)
    {
         serialPort.setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if("2" == mStopBits)
    {
         serialPort.setStopBits(QSerialPort::TwoStop);
    }
    else
    {
         serialPort.setStopBits(QSerialPort::OneStop);
    }

    //打开串口
    return  serialPort.open(QSerialPort::ReadWrite);

}

void UartAssist::on_openSerialPortButton_clicked() //按一下打开 再按一下关闭
{

    if(IsSerialPortOpen == false)
    {

        if(true == getSerialPortConfig())
        {
            showStatusMsg();
            connect(&serialPort,SIGNAL(readyRead()),this,SLOT(onReadyRead()));

            QIcon icon;
            icon.addFile(QStringLiteral(":/new/prefix1/Resources/Closed_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
            ui->openSerialPortButton->setIcon(icon);
            ui->openSerialPortButton->setIconSize(QSize(48, 48));
            ui->openSerialPortButton->setText("关闭");

            IsSerialPortOpen=true;
            qDebug() << "成功打开串口" << mPortName;

//          showSendFormatWarnMsg(IsSendByHex);

            ui->sendBtn->setEnabled(true);   //发送按钮使能
            ui->sendBtn->setStyleSheet("font-size:18px;color:#fff;font-weight:bold;background-color:#4b960B;\
                                       border:1px solid #666;border-radius:10px;");

            ui->serialPortcomboBox->setEnabled(false); //串口设置按钮关闭
            ui->BaudRatecomboBox->setEnabled(false);
            ui->ParityWidthcomboBox->setEnabled(false);
            ui->DataWidthcomboBox->setEnabled(false);
            ui->StopWidthcomboBox->setEnabled(false);

            ui->RecvtextEdit->setTextColor(QColor("black"));
        }
        else
        {
            //打开串口失败，显示相应的错误信息
            errorValue=serialPort.error();
            showErrMsg(IsShowCurrentTime,errorValue);
            return;

        }

    }
    else
    {
        serialPort.close();
        QString  portStatus=serialPort.portName()+" closed";
        ui->textBrowserLog->setTextColor(QColor("red"));
        ui->textBrowserLog->setText(portStatus.toUpper());
        IsSerialPortOpen=false;

        QIcon Openicon;
        Openicon.addFile(QStringLiteral(":/new/prefix1/Resources/open_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui->openSerialPortButton->setIcon(Openicon);
        ui->openSerialPortButton->setIconSize(QSize(48, 48));
        ui->openSerialPortButton->setText("打开");

        qDebug() << "关闭串口";

        if(!IsServerListenOpen)
        {
         ui->sendBtn->setEnabled(false);
         ui->sendBtn->setStyleSheet("font-size:18px;font-weight:bold;background-color:#DEDEDE;border:1px solid #666;border-radius:10px;");
        }
        ui->serialPortcomboBox->setEnabled(true); //串口设置按钮关闭
        ui->BaudRatecomboBox->setEnabled(true);
        ui->ParityWidthcomboBox->setEnabled(true);
        ui->DataWidthcomboBox->setEnabled(true);
        ui->StopWidthcomboBox->setEnabled(true);

    }


}



//显示发送数据
void UartAssist::showSendMsg(bool bShowSendMsg,QByteArray sendArray)
{
    if(!bShowSendMsg)return;
    QString showSendMsg;
    if(IsShowCurrentTime)
    {

        currentTime=QDateTime::currentDateTime();
        timeinfo=currentTime.toString("yyyy/MM/d  hh:mm:ss");
        showSendMsg+="Tx: ";
        showSendMsg+=timeinfo;
        showSendMsg+="\n";
        //判断显示16进制还是ACSII字符
        if(IsSendByHex)
            showSendMsg+=ByteArrayToHexStr(sendArray);
        else
            showSendMsg+=sendArray;
    }
    else
    {
        showSendMsg="Tx: ";
        if(IsSendByHex)
            showSendMsg+=ByteArrayToHexStr(sendArray);
        else
            showSendMsg+=sendArray;

    }
    ui->RecvtextEdit->setTextColor(QColor("black"));
    ui->RecvtextEdit->append(showSendMsg);
}
//显示接收数据
void UartAssist::showRecvMsg(bool bShowTime,QString recvStr)
{
    QString showReciveMsg;
    //-----------------------------显示格式------------------------------//
    if(bShowTime)
    {

        currentTime=QDateTime::currentDateTime();
        timeinfo=currentTime.toString("yyyy-MM-d  hh:mm:ss");
        showReciveMsg+="Rx: ";
        showReciveMsg+=timeinfo;
        showReciveMsg+="\n";
    }
    else
    {
        showReciveMsg="Rx: ";
    }
    showReciveMsg+=recvStr;
    ui->RecvtextEdit->setTextColor(QColor("green"));
    ui->RecvtextEdit->append(showReciveMsg);

    if(saveDataToTXTFileEn)
    {
        saveDataToTXTFile(txtfileNamePath,showReciveMsg);
    }

}






//发送数据
void UartAssist::Write()
{

    if(IsSendByCom == true)
    {
    QString sendMsg=ui->SendtextEdit->toPlainText(); //得到输入框的
    QByteArray temp=sendMsg.toLatin1();

    //------------判断发送模式：字符/16进制----------------------//
    if(IsSendByHex)
    {
        temp=HexStrToByteArray(sendMsg);
    }

    //----------------发送数据----------------//
    qint64 sendedNum;
    char *sendContent=temp.data();
    sendedNum=serialPort.write(sendContent,temp.count());

    //---------------判断发送数据是否成功----------------------//
    if(sendedNum==-1)
    {
        errorValue=serialPort.error();
       // showErrMsg(IsShowCurrentTime,errorValue);
       // return;
    }
        else
        {
            //统计发送数据
            sendTime++;   //次数
            sendCount+=temp.count();  //字节数
            //LCD显示发送个数
            ui->TxLCD->display(sendCount);

            //-------------显示发送数据-----------------------//
            showSendMsg(IsShowSendMsg,temp);
            IsWrittenSuccessed=true;
        }

    }

    if(IsSendByTcp == true && IsServerListenOpen == true )
    {
         //如果有字返回的是0
        if(!ui->comboBox_clientIPaddr->currentText().isEmpty())
        {
            QString data=ui->SendtextEdit->toPlainText();
            QByteArray TCPsendtemp=data.toLatin1();
            if(IsSendByHex)
            {
             TCPsendtemp = myHelper::HexStrToByteArray(data);
            }
            if (data==""){return;}
            QString str=ui->comboBox_clientIPaddr->currentText();
            int clientID=str.split(":")[0].toInt();
            QString IP=str.split(":")[1];
            int Port=str.split(":")[2].toInt();



            server->SendData(clientID,IP,Port,TCPsendtemp); //发送数据
            //统计发送数据
            sendTime++;   //次数
            sendCount+=TCPsendtemp.count();  //字节数
            //LCD显示发送个数
            ui->TxLCD->display(sendCount);

            //-------------显示发送数据-----------------------//
            ui->RecvtextEdit->setTextColor(QColor("black"));
            ui->RecvtextEdit->append("-->:"+str);
            showSendMsg(IsShowSendMsg,TCPsendtemp);
            IsWrittenSuccessed=true;
       }

    }


}


void UartAssist::Read()
{
    //从缓冲区读出数据
    //转换格式
    if(IsSerialPortOpen)
    {
        QString  receiveMsg;
        if(IsReceiveByHex)
            receiveMsg=ByteArrayToHexStr(comRecvdata);
        else
            receiveMsg=comRecvdata;
        //接收到的字节数
        if(comRecvdata.count()!=0)
        {
            receiveTime++;  //次数
            reciveCount+=comRecvdata.count();  //字节数
            if(LoRaMeter::LoMeterWindow) //lora窗口打开的
            {
                qDebug("LORA窗口打开，数据处理");
                loraview->RecvDataProgress(receiveMsg,comRecvdata.count());
            }
            if(LoRaTerminal::LoMeterTerminalWindow)
            {
                qDebug("LORA终端窗口打开，数据处理");
                LoRaTerminalview->RecvDataProgress(receiveMsg,comRecvdata.count());
            }

            //LCD显示接收计数
            ui->RxLCD->display(reciveCount);
            //显示接收数据
            showRecvMsg(IsShowCurrentTime,receiveMsg);
            comRecvdata.clear();
          //  serialPort.clear();
        }
    }

}



QByteArray UartAssist::HexStrToByteArray(QString str)
{
    QByteArray senddata;
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    char lstr,hstr;
    for(int i=0; i<len; )
    {
        hstr=str[i].toLatin1();
        if(hstr == ' ')
        {
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        senddata[hexdatalen] =hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);
    return senddata;
}

char UartAssist::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}

QString UartAssist::ByteArrayToHexStr(QByteArray data)
{
    QString temp="";
    QString hex=data.toHex();
    for (int i=0;i<hex.length();i=i+2)
    {
        temp+=hex.mid(i,2)+" ";
    }
    return temp.trimmed().toUpper();
}






void UartAssist::on_cleanCntButton_clicked()
{
    sendCount =0;   //统计发送
    reciveCount=0; //统计接收
    ui->TxLCD->display(sendCount);
    ui->RxLCD->display(reciveCount);
}


void UartAssist::on_cleanSendBtn_clicked()
{
    ui->SendtextEdit->clear();
}




void UartAssist::on_SUMBtn_clicked()
{

    QString sendMsg=ui->SendtextEdit->toPlainText(); //得到输入框的
    QByteArray temp=sendMsg.toLatin1();
    QString showSendMsg;
    uchar sumtemp;

    //------------判断发送模式：字符/16进制----------------------//
    if(IsSendByHex)
    {
        temp=HexStrToByteArray(sendMsg);
       // qint64 sendedNum;
        char *sendContent=temp.data(); //字节
        sendCount = temp.count();      //字节数

//       qDebug("sendCount = %d",sendCount);
//        for(int i=0;i<sendCount;i++)
//        {
//            qDebug("%x",*sendContent++);
//        }


        sumtemp = doSUM(sendContent,sendCount);

        temp.append(sumtemp);

//        qDebug("%x",sumtemp);


        showSendMsg+=ByteArrayToHexStr(temp);

        ui->SendtextEdit->setText(showSendMsg);

    }

}



//求校验和
uchar UartAssist::doSUM(char *data,int len)
{

    uchar sum=0;

    for(int i=0;i<len;i++)
    {
       sum+= *data++;
    }
    return sum;
}

void UartAssist::testPtf()
{
     qDebug() << "测试";
}

void UartAssist::on_actionAbout_triggered()
{
    qDebug() << "点击about";

    view = new about(this);
    view->setFixedSize(view->size());
    view ->show();
}



void UartAssist::on_actionLoraMeter_triggered()
{

    qDebug() << "点击loraitem";

    loraview = new LoRaMeter(this);
    loraview->setFixedSize(loraview->size());
    loraview ->show();

    qDebug("uartClass.IsSerialPortOpen = %d",UartAssist::IsSerialPortOpen);

}

void UartAssist::on_actionLoRaTherm_triggered()
{

    LoRaTerminalview = new LoRaTerminal(this);
    LoRaTerminalview->setFixedSize(LoRaTerminalview->size());
    LoRaTerminalview->show();

}

/**
  *@brief: 点击开始监听，再次点击停止监听
  *@param:
  *@author: hello world
  *@return:
  *@date: 2018-1-1
  */
void UartAssist::on_pushButton_netlisten_clicked()
{

    if(ui->pushButton_netlisten->text() == tr("开始监听"))
        {
        //从输入框中获取端口号
         int port = ui->lineEdit_netport->text().toInt();
         qDebug("监听端口号：%d",port);
         if(!server->listen(QHostAddress::Any,port))
         {
             qDebug()<<server->errorString();
             qDebug("监听失败");
             ui->textEdit_netlistenlog->setTextColor(QColor("darkMagenta"));
             ui->textEdit_netlistenlog->append(server->errorString());
             return;
         }
        IsServerListenOpen = true;
        ui->textEdit_netlistenlog->setTextColor(QColor("darkMagenta"));
        ui->textEdit_netlistenlog->append("Listen succeessfully!");
        ui->pushButton_netlisten->setText("停止监听");

        ui->sendBtn->setEnabled(true);
        ui->sendBtn->setStyleSheet("font-size:18px;color:#fff;font-weight:bold;background-color:#4b960B;\
                                        border:1px solid #666;border-radius:10px;");

    }
    else
    {

           server->close();
           ui->pushButton_netlisten->setText("开始监听");
           IsServerListenOpen = false;

           if(!IsSerialPortOpen)
           {
               ui->sendBtn->setEnabled(false);
               ui->sendBtn->setStyleSheet("font-size:18px;font-weight:bold;background-color:#DEDEDE;border:1px solid #666;border-radius:10px;");
           }

    }

}



void UartAssist::ClientConnect(int clientID,QString IP,int Port)
{
    ui->textEdit_netlistenlog->setTextColor(QColor("green"));
    ui->textEdit_netlistenlog->append(tr("客户端:[clientID:%1 IP:%2 Port:%3] 上线了！")
                           .arg(clientID).arg(IP).arg(Port));
    ui->comboBox_clientIPaddr->addItem(tr("%1:%2:%3").arg(clientID).arg(IP).arg(Port));

}

void UartAssist::ClientDisConnect(int clientID,QString IP,int Port)
{
    ui->textEdit_netlistenlog->setTextColor(QColor("red"));
    ui->textEdit_netlistenlog->append(tr("客户端:[clientID:%1 IP:%2 Port:%3] 下线了！")
                           .arg(clientID).arg(IP).arg(Port));
    ui->comboBox_clientIPaddr->removeItem(ui->comboBox_clientIPaddr->findText(tr("%1:%2:%3").arg(clientID).arg(IP).arg(Port)));


}



void UartAssist::ClientReadData(int clientID,QString IP,int Port,QByteArray data)
{
    if(!data.isEmpty()) //TCPipSERVER OPEN
    {

        QString  TCPreceiveMsg;
        if(IsReceiveByHex)
            TCPreceiveMsg=ByteArrayToHexStr(data);
        else
            TCPreceiveMsg=data;

        if(data.count()!=0) //收到的数据长度
        {

            receiveTime++;  //次数
            reciveCount+=data.count();  //字节数

            //LCD显示接收计数

            ui->RxLCD->display(reciveCount);
            //显示接收数据

            ui->RecvtextEdit->setTextColor(QColor("green"));
            QString recvFromIP;
            recvFromIP = tr("RecvFrom:[clientID:%1 IP:%2  Port:%3]").arg(clientID).arg(IP).arg(Port);
            ui->RecvtextEdit->append(recvFromIP);

            if(saveDataToTXTFileEn)
            {
                saveDataToTXTFile(txtfileNamePath,recvFromIP);
            }

            showRecvMsg(IsShowCurrentTime,TCPreceiveMsg);



            TCPIPRecvdatabuffer.clear();

        }

    }

}

void UartAssist::on_pushButton_clearListenlog_clicked()
{
    ui->textEdit_netlistenlog->clear();
}


/**
  *@brief: 打开一个文件
  *@param:
  *@author: hello world
  *@return:
  *@date: 2018-1-1
  */
void UartAssist::on_actionOpen_triggered()
{
   selectFile();
}

void UartAssist::selectFile()
{

    //定义文件对话框类
    QFileDialog *fileDialog = new QFileDialog(this);
    //定义文件对话框标题
    fileDialog->setWindowTitle(tr("打开一个txt文件"));
    //设置默认文件路径 "." 代表程序运行目录，"/" 代表当前盘符的根目录(Windows，Linux下/就是根目录了)，也可以是平台相关的，比如"C:\\"等；
    fileDialog->setDirectory(".");
    //设置文件过滤器 过滤的图片格式
    //fileDialog->setNameFilter(tr("Images Files(*.png *.jpg *.jpeg *.bmp)"));

    //设置文件过滤器 过滤- txt
    fileDialog->setNameFilter(tr("TXT Files(*.txt)"));


    //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);

    //打印所有选择的文件的路径
    /*
    QStringList fileNames;
    if(fileDialog->exec())
    {
        fileNames = fileDialog->selectedFiles();
    }
    for(auto tmp:fileNames)
    {
        qDebug()<<tmp<<endl;
    }
    */

    //打开一个文件
    QString fileNamePath;
    if(fileDialog->exec() == QDialog::Accepted)
    fileNamePath = fileDialog->selectedFiles()[0];
    qDebug()<<fileNamePath;

    if(!fileNamePath.isEmpty())
    {
        QFile file(fileNamePath);
        if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        {
           qDebug("读取文件失败！");
        }
        QTextStream in(&file);

        ui->SendtextEdit->append(in.readAll());

        file.close();

    }

}









void UartAssist::on_SaveRecDataToTxtFile_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        qDebug("on_SaveRecDataToTxtFile_stateChanged!!");

        QFileDialog *fileDialog = new QFileDialog(this);
        //定义文件对话框标题
        fileDialog->setWindowTitle(tr("选择一个txt文件，进行数据保存"));
        //设置默认文件路径 "." 代表程序运行目录，"/" 代表当前盘符的根目录(Windows，Linux下/就是根目录了)，也可以是平台相关的，比如"C:\\"等；
        fileDialog->setDirectory(".");
        //设置文件过滤器 过滤的图片格式
        //fileDialog->setNameFilter(tr("Images Files(*.png *.jpg *.jpeg *.bmp)"));

        //设置文件过滤器 过滤- txt
        fileDialog->setNameFilter(tr("TXT Files(*.txt)"));


        //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
        fileDialog->setFileMode(QFileDialog::ExistingFiles);
        //设置视图模式
        fileDialog->setViewMode(QFileDialog::Detail);

        //打开一个文件

        if(fileDialog->exec() == QDialog::Accepted)
        txtfileNamePath = fileDialog->selectedFiles()[0];
        qDebug()<<txtfileNamePath;
        if(!txtfileNamePath.isEmpty())
            {
                saveDataToTXTFileEn = true;
                ui->textBrowserLog->setTextColor(QColor("red"));
                ui->textBrowserLog->setText("保存路径："+txtfileNamePath);


                QFile file(txtfileNamePath);
                if(!file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
                {
                   qDebug("文件失败！");
                }
                QTextStream out(&file);
                out << ui->RecvtextEdit->toPlainText();
                file.close();

            }
    }
    else
    {
       saveDataToTXTFileEn = false;
       ui->textBrowserLog->clear();

    }

}

/**
  *@brief: 保存数据，到文本文件
  *@param: FILEPATH:文件路径，data：待保存的数据
  *@author:
  *@return:
  *@date: 2018-1-1
  */
void UartAssist::saveDataToTXTFile(QString FILEPATH,QString data)
{

    if(!FILEPATH.isEmpty())
    {

        QFile file(FILEPATH);
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
        {
           qDebug("文件失败！");
        }
        QTextStream out(&file);
        out << data << "\r\n";
        file.close();

    }

}






void UartAssist::on_actionConfig_triggered()
{

}
