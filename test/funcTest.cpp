#include "controller.h"
#include <QString>
#include <QDate>
#include <iostream>

using namespace std;

class funcTest
{
    public :
        static void test()
        {
            cout << "Test Start" <<"\n";
            QDate date = QDate(2020,11,9);
            cout << Controller::dateString(date).toStdString();
            cout << "\nTest End";
        }
};
