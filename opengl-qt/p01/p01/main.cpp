#include "p01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    p01 w;
    w.show();
    return a.exec();
}
