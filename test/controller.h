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
        static QString chinese(const char* chars)
        {
            QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");
            return codec->toUnicode(chars);
        }
        static QStringList loadFromClipBoard()
        {
            QStringList *strLst = new QStringList();
            QString input;
            QClipboard *clipboard = QApplication::clipboard();
            input = clipboard->text();
            input.remove(" ");
            input.remove("\n");
            while(!input.isEmpty() && input.contains(chinese("¥D¦®")))
            {
                //cout << "/***************************/\n" << input.toLocal8Bit().toStdString() << "\n/************************************/\n";
                int subLength = input.length()-input.lastIndexOf(chinese("¥D¦®"));
                strLst->push_front(input.right(subLength));
                cout << "/***************************/\n" << input.right(subLength).toLocal8Bit().toStdString() << "\n/************************************/\n";
                input.chop(subLength);
                //cout << "/***************************/\n" << input.toLocal8Bit().toStdString() << "\n/************************************/\n";
            }
            return *strLst;
        }

};


#endif // CONTROLLER_H
