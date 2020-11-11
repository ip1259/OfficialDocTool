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
        static string combineAsTable(QString date, QString word, QString number, QString org, QString reason, QString name, QString wn, QString nm, QString send)
        {
            return date.toStdString() + "\t" + word.toStdString() + "\t" + wn.toStdString() + "\t" + number.toStdString() + "\t" + nm.toStdString() + "\t" + org.toStdString() + "\t" + send.toStdString() + "\t\t" + reason.toStdString() + "\t" + name.toStdString();
        }
        QString chinese(const char* chars)
        {
            QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");
            return codec->toUnicode(chars);
        }

};


#endif // CONTROLLER_H
