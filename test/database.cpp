#include <QString>
#include <QStringList>
#include <QTextCodec>
#include <QList>
#include "controller.h"

class DataBase
{

    private:
        QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");
        const QString wWords = codec->toUnicode("¦r²Ä");
        const QString wNumber = codec->toUnicode("¸¹");
        const QString wSend = codec->toUnicode("¨ç");
        QList<QStringList> db = QList<QStringList>();
        int cur = 0;

        QString dataToTable()
        {
            QString store = "";
            foreach(QStringList data, db)
            {
                store = store + QString::fromStdString(Controller::combineAsTable(data[0],data[1],data[2],data[3],data[4],data[5],wWords,wNumber,wSend)) + "\n";
            }
            return store;
        }

    public:
        DataBase();
        QStringList getCurData()
        {
            return db[cur];
        }
        int getCur()
        {
            return cur;
        }
        void nextData()
        {
            if(cur < db.length()-1)
            {
                cur = cur+1;
            }
            else
            {
                cur = 0;
            }

        }
        void addData(QString date, QString words, QString num, QString org, QString reason, QString name)
        {
            QStringList temp = QStringList();
            temp.push_back(date);
            temp.push_back(words);
            temp.push_back(num);
            temp.push_back(org);
            temp.push_back(reason);
            temp.push_back(name);

            db.push_back(temp);
        }
};

DataBase::DataBase()
{

}
