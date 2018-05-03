#include "uartassist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UartAssist w;
    w.show();

    return a.exec();
}
