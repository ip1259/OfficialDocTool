#include "mainwindow.h"

#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    printf("���տ�X");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


