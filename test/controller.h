#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QString>
#include <QDate>
class Controller
{
    public:
        static QString dateString(QDate date)
        {
            return date.toString("yyyy/MM/dd");
        }
        static void insertDashAt(int cursor, QString* string);
        static QString combineAsTable(QString date, QString word, QString number, QString org, QString reason, QString name);


};


#endif // CONTROLLER_H
