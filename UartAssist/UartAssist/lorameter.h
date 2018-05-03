#ifndef LORAMETER_H
#define LORAMETER_H

#include <QMainWindow>
#include <QSerialPort>
#include <QCloseEvent>
#include <QMessageBox>


namespace Ui {
class LoRaMeter;
}

class LoRaMeter : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoRaMeter(QWidget *parent = 0);
    ~LoRaMeter();

    static bool LoMeterWindow;
    void RecvDataProgress(QString data, int len);








private slots:
    void on_ReadMeterNoButton_clicked();
    void on_SetMeterNoButton_clicked();

    void on_ClearLog_clicked();

private:
      Ui::LoRaMeter *ui;


     QMessageBox *isNotOpenSerialprotBox;

     QMessageBox *ExitLoRaWindow;

     void showRecMg(QString recvStr, int len);
     void showSendMsg(QByteArray sendArray);
     void closeEvent(QCloseEvent *event);//弹出的窗口点击关闭时，产生的事件


};

#endif // LORAMETER_H
