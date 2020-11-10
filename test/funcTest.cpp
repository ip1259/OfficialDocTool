#include "controller.h"
#include <QString>
#include <QDate>
#include <iostream>

#define EOL "\n"
using namespace std;



class funcTest
{
    public :
        static void test()
        {
            cout << "Test Start" << EOL;
            QDate date = QDate(2020,11,10);
            cout << Controller::dateString(date).toStdString() << EOL;
            QString testStr = QString(Controller::chineseString("109å¹´åº¦¢æ¥­‡çäººæ¹èè¨ˆç•«²ç«¯è³‡èç®¡çå¹³å°è¨­èå¯¦å"));
            testStr.remove(' ');
            Controller::insertDashAt(15,&testStr);
            Controller::copyToClipboard(testStr);
            cout << testStr.toLocal8Bit().constData() << EOL;
            cout << "Test End" << EOL;
        }
};
