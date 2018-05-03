#ifndef UARTASSIST_H
#define UARTASSIST_H

#include <QMainWindow>
#include "ui_uartassist.h"
#include <synchapi.h>
#include<QObject>
#include<QSerialPortInfo>
#include<QSerialPort>
#include<QDateTime>
#include<QTimer>
#include<QToolBar>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QMessageBox>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include "QFileDialog"


#include "about.h"
#include "lorameter.h"
#include "loraterminal.h"

#include "TCPSERVER/mytcpserver.h"


//extern bool IsSerialPortOpen;
//extern QSerialPort *serialPort;

extern uchar doSUM(char *data, int len);
extern void  testPtf(void);

namespace Ui {
class UartAssist;
}

class UartAssist : public QMainWindow
{
    Q_OBJECT

public:

    explicit UartAssist(QWidget *parent = 0);
    ~UartAssist();



    static QSerialPort serialPort; //串口
    static QDateTime currentTime;
    static QString timeinfo;

     LoRaTerminal *LoRaTerminalview;


    static QString ByteArrayToHexStr(QByteArray data); //
    static QByteArray HexStrToByteArray(QString str);
    static char ConvertHexChar(char ch);


    static QString txtfileNamePath;

    //变量定义
    static bool IsServerListenOpen;
    static bool IsSerialPortOpen;
    static bool IsSendByHex;
    static bool IsReceiveByHex;
    static bool IsSendByCom;
    static bool IsSendByTcp;
    static bool saveDataToTXTFileEn;




   uchar doSUM(char *data, int len);
   void  testPtf(void);
   int Isadata;



   void saveDataToTXTFile(QString FILEPATH, QString data);
public slots:


protected slots:  //槽函数
        void InitSerialPort(void);
        int setBaudRateByIndex(void);
        void onCheckRepeatCheck(int state);
        void onCheckShowSendMsg(int state);
        void onCheckShowTime(int state);
        void onCheckSendByHex(bool checked);
        void onCheckReciveByHex(bool checked);
        void onCheckCalInfo(int state);
        void sendData();
        void onRepeatTimer();
        void onReadyRead();
        void onClearToolBtn();
       // void onDisconnectBtn();
        void onRefreshBtn();

private slots:
        void on_openSerialPortButton_clicked();
        void on_cleanCntButton_clicked();

        void on_cleanSendBtn_clicked();

        void on_SUMBtn_clicked();

        void on_actionAbout_triggered();

        void on_actionLoraMeter_triggered();

        void on_actionLoRaTherm_triggered();

        void onComRecvProgress();
        void on_pushButton_netlisten_clicked();




        void on_checkBox_UARTsendEN_toggled(bool checked);

        void on_checkBox_NETsendEN_toggled(bool checked);

        void on_pushButton_clearListenlog_clicked();

        void ClientReadData(int clientID, QString IP, int Port, QByteArray data);

        void ClientConnect(int clientID, QString IP, int Port);
        void ClientDisConnect(int clientID, QString IP, int Port);
        void on_actionOpen_triggered();



        void on_SaveRecDataToTxtFile_stateChanged(int arg1);

        void on_actionConfig_triggered();

private:
    Ui::UartAssist *ui;

    void initSerialSetCombox(); //初始化串口设置
    void getSerialPortID();   //获取串口号

    void initWidget();       //初始化窗口部件

    QTcpSocket *socket;
    myTcpServer *server;

    QSerialPortInfo* serialInfo;
    QList<QSerialPortInfo>serialList;
    QString  portToOpen;

    QByteArray comRecvdata;

    QByteArray TCPIPRecvdatabuffer;

    QString clientipaddress;

    QString mPortName;  //串口信息
    QString mBaudRate;
    QString mParity;
    QString mDataBits;
    QString mStopBits;
    QSerialPort::SerialPortError errorValue;
    int sendCount;   //统计发送
    int reciveCount; //统计接收
    QTimer *repeatSend;     //循环发送时间
    QTimer *receiveTimer;   //串口接收时间
    QTimer *netreceiveTimer; //TCP接收数据数据

    int sendTime;
    int receiveTime;


    QString errorInfo;
    //标志
    bool StopSendDataFlag;
    bool IsRepeatSend;

    bool IsWrittenSuccessed;
    bool IsReadSuccessed;
    bool IsShowSendMsg;
    bool IsShowCurrentTime;


    void showErrMsg(bool bShowTime, QSerialPort::SerialPortError errorEum);
    QString getValueContent(QSerialPort::SerialPortError errorIndex);
    void showStatusMsg();
    void showSendFormatWarnMsg(bool bSendByHex);
    bool getSerialPortConfig();
    void Write();
    void Read();
    void showSendMsg(bool bShowSendMsg, QByteArray sendArray);
    void showRecvMsg(bool bShowTime, QString recvStr);


    about *view;        //关于界面
    LoRaMeter *loraview;



    QString get_localmachine_ip();
    void selectFile();
};




#endif // UARTASSIST_H
