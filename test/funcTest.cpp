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
            QString testStr = QString(Controller::chineseString("109年度�業��人��計畫�端資�管�平台設�實�"));
            testStr.remove(' ');
            Controller::insertDashAt(15,&testStr);
            Controller::copyToClipboard(testStr);
            cout << testStr.toLocal8Bit().constData() << EOL;
            cout << "Test End" << EOL;
        }
};
