#include <QtCore/QCoreApplication>
#include <QTest>
#include "ShenSiDongle.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ShenSiDongle shenSiDongle;
    QTest::qExec(&shenSiDongle);
    return a.exec();
}
