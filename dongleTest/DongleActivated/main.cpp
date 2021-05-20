#include "DongleActivated.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DongleActivated w;
    w.show();
    return a.exec();
}
