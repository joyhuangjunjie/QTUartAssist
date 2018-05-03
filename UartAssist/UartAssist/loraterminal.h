#ifndef LORATERMINAL_H
#define LORATERMINAL_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDateTime>
#include <QTimer>

namespace Ui {
class LoRaTerminal;
}

class LoRaTerminal : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoRaTerminal(QWidget *parent = 0);
    ~LoRaTerminal();
    static bool  LoMeterTerminalWindow;

    void RecvDataProgress(QString data, int len);
    void GetJzqNoInUi(void);
    void setTextJzqNoInUi(QString data);
    void GetMeterNoInUi_ForBTOBRead();


    void GetSysParaInUi_ForBTOBSys();
private slots:
    void on_pushButton_clearlog_clicked();
    void on_pushButton_ReadjzqNo_clicked();
    void on_pushButton_WritejzqNo_clicked();
    void CommandTimeOut_deal();
    void progressbarTimeout_deal();

    void on_spinBox_CMDtime_valueChanged(int arg1);

    void on_pushButton_BToBDataSys_clicked();

    void on_BtoBreadMeterButton_clicked();

private:
    Ui::LoRaTerminal *ui;

     QMessageBox *ExitLoRaTerminlWindow;
     QMessageBox *NotOpenSerialprotBox;
     QMessageBox *CMDRUNFailBOX;
     QTimer *CommandTimeOut;
     QTimer *progressbarTimeout;

     int progressbarTimecout;

    void initloraterminalWidget();
    void closeEvent(QCloseEvent *event);//弹出的窗口点击关闭时，产生的事件
    void showRecMg(QString recvStr, int len);
    void showOpenSeriaprotMsg(void);
    void showSendMsg(QByteArray sendArray);
    void showErroMg(QString recvStr);
    void showmessBOXFail(void);
    void disable_all_pushButton();
    void enable_all_pushButton();
    void showBTOBDatainUI(uchar *recvStr, int len);
};

#endif // LORATERMINAL_H


