#include "dmine.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DMine w;
    w.show();

    return a.exec();
}
