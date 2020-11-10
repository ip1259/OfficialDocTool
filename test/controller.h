#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QString>
#include <QDate>
#include <QTextCodec>
#include <string.h>
#include <QClipboard>
#include <QApplication>
#include <iostream>

using namespace std;

class Controller
{
    public:
        static QString dateString(QDate date)
        {
            return date.toString("yyyy/MM/dd");
        }
        static void copyToClipboard(QString str)
        {
            QClipboard *clipboard = QApplication::clipboard();
            clipboard->setText(str);
        }
        static string combineAsTable(QString date, QString word, QString number, QString org, QString reason, QString name)
        {
            return date.toStdString() + "\t" + word.toStdString() + "\t" + "�r��" + "\t" + number.toStdString() + "\t" + "��" + "\t" + org.toStdString() + "\t" +"��" + "\t\t" + reason.toStdString() + "\t" + name.toStdString();
        }


};


#endif // CONTROLLER_H
