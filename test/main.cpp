#include "mainwindow.h"
#include "funcTest.cpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    funcTest::test();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
