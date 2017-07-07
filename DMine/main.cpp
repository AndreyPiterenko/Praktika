#include "mine.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // Mine w;
   // w.show();
    Mine *Wind = new Mine;
    Wind->show();

    return a.exec();
}
