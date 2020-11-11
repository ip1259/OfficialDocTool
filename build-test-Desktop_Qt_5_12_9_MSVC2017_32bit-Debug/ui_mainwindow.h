/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *Layout_inputArea;
    QLabel *label_number;
    QLineEdit *lineEdit_org;
    QLineEdit *lineEdit_word;
    QLabel *label_reason;
    QLabel *label_word;
    QHBoxLayout *Layout_view;
    QLineEdit *lineEdit_viewDate;
    QLineEdit *lineEdit_viewWord;
    QLabel *label_wn;
    QLineEdit *lineEdit_viewNum;
    QLabel *label_nm;
    QLineEdit *lineEdit_viewOrg;
    QLabel *label_send;
    QLabel *label_7;
    QTextEdit *textEdit_viewReason;
    QLineEdit *lineEdit_viewName;
    QLabel *label_org;
    QLabel *label_date;
    QLineEdit *lineEdit_name;
    QTextEdit *textEdit_reason;
    QLabel *label_name;
    QGridLayout *gridLayout_3;
    QPushButton *btn_copy;
    QPushButton *btn_clear;
    QPushButton *btn_clearAll;
    QPushButton *btn_copyAll;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_viewPre;
    QLCDNumber *lcdNumber;
    QPushButton *btn_next;
    QLabel *label_msg;
    QPushButton *btn_nextData;
    QLineEdit *lineEdit_number;
    QComboBox *cb_word;
    QComboBox *cb_org;
    QCalendarWidget *calendar;
    QGridLayout *Layout_btn;
    QPushButton *btn_rmws;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *cb_name;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(900, 700));
        MainWindow->setMouseTracking(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        Layout_inputArea = new QGridLayout();
        Layout_inputArea->setSpacing(20);
        Layout_inputArea->setObjectName(QString::fromUtf8("Layout_inputArea"));
        Layout_inputArea->setSizeConstraint(QLayout::SetDefaultConstraint);
        Layout_inputArea->setContentsMargins(-1, 10, -1, 10);
        label_number = new QLabel(centralwidget);
        label_number->setObjectName(QString::fromUtf8("label_number"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(14);
        label_number->setFont(font);
        label_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Layout_inputArea->addWidget(label_number, 3, 0, 1, 1);

        lineEdit_org = new QLineEdit(centralwidget);
        lineEdit_org->setObjectName(QString::fromUtf8("lineEdit_org"));

        Layout_inputArea->addWidget(lineEdit_org, 1, 5, 1, 1);

        lineEdit_word = new QLineEdit(centralwidget);
        lineEdit_word->setObjectName(QString::fromUtf8("lineEdit_word"));

        Layout_inputArea->addWidget(lineEdit_word, 2, 5, 1, 1);

        label_reason = new QLabel(centralwidget);
        label_reason->setObjectName(QString::fromUtf8("label_reason"));
        label_reason->setFont(font);
        label_reason->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Layout_inputArea->addWidget(label_reason, 4, 0, 1, 1);

        label_word = new QLabel(centralwidget);
        label_word->setObjectName(QString::fromUtf8("label_word"));
        label_word->setFont(font);
        label_word->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Layout_inputArea->addWidget(label_word, 2, 0, 1, 1);

        Layout_view = new QHBoxLayout();
        Layout_view->setObjectName(QString::fromUtf8("Layout_view"));
        lineEdit_viewDate = new QLineEdit(centralwidget);
        lineEdit_viewDate->setObjectName(QString::fromUtf8("lineEdit_viewDate"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Arabic"));
        font1.setPointSize(14);
        lineEdit_viewDate->setFont(font1);
        lineEdit_viewDate->setReadOnly(true);

        Layout_view->addWidget(lineEdit_viewDate);

        lineEdit_viewWord = new QLineEdit(centralwidget);
        lineEdit_viewWord->setObjectName(QString::fromUtf8("lineEdit_viewWord"));
        lineEdit_viewWord->setFont(font1);
        lineEdit_viewWord->setReadOnly(true);

        Layout_view->addWidget(lineEdit_viewWord);

        label_wn = new QLabel(centralwidget);
        label_wn->setObjectName(QString::fromUtf8("label_wn"));
        label_wn->setFont(font1);

        Layout_view->addWidget(label_wn);

        lineEdit_viewNum = new QLineEdit(centralwidget);
        lineEdit_viewNum->setObjectName(QString::fromUtf8("lineEdit_viewNum"));
        lineEdit_viewNum->setFont(font1);
        lineEdit_viewNum->setReadOnly(true);

        Layout_view->addWidget(lineEdit_viewNum);

        label_nm = new QLabel(centralwidget);
        label_nm->setObjectName(QString::fromUtf8("label_nm"));
        label_nm->setFont(font1);

        Layout_view->addWidget(label_nm);

        lineEdit_viewOrg = new QLineEdit(centralwidget);
        lineEdit_viewOrg->setObjectName(QString::fromUtf8("lineEdit_viewOrg"));
        lineEdit_viewOrg->setFont(font1);
        lineEdit_viewOrg->setReadOnly(true);

        Layout_view->addWidget(lineEdit_viewOrg);

        label_send = new QLabel(centralwidget);
        label_send->setObjectName(QString::fromUtf8("label_send"));
        label_send->setFont(font1);

        Layout_view->addWidget(label_send);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        Layout_view->addWidget(label_7);

        textEdit_viewReason = new QTextEdit(centralwidget);
        textEdit_viewReason->setObjectName(QString::fromUtf8("textEdit_viewReason"));
        textEdit_viewReason->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(12);
        textEdit_viewReason->setFont(font2);
        textEdit_viewReason->setReadOnly(true);

        Layout_view->addWidget(textEdit_viewReason);

        lineEdit_viewName = new QLineEdit(centralwidget);
        lineEdit_viewName->setObjectName(QString::fromUtf8("lineEdit_viewName"));
        lineEdit_viewName->setFont(font1);
        lineEdit_viewName->setReadOnly(true);

        Layout_view->addWidget(lineEdit_viewName);

        Layout_view->setStretch(0, 3);
        Layout_view->setStretch(1, 3);
        Layout_view->setStretch(3, 3);
        Layout_view->setStretch(5, 3);
        Layout_view->setStretch(7, 1);
        Layout_view->setStretch(8, 3);
        Layout_view->setStretch(9, 3);

        Layout_inputArea->addLayout(Layout_view, 6, 0, 1, 6);

        label_org = new QLabel(centralwidget);
        label_org->setObjectName(QString::fromUtf8("label_org"));
        label_org->setFont(font);
        label_org->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Layout_inputArea->addWidget(label_org, 1, 0, 1, 1);

        label_date = new QLabel(centralwidget);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setFont(font);
        label_date->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Layout_inputArea->addWidget(label_date, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        Layout_inputArea->addWidget(lineEdit_name, 5, 5, 1, 1);

        textEdit_reason = new QTextEdit(centralwidget);
        textEdit_reason->setObjectName(QString::fromUtf8("textEdit_reason"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_reason->sizePolicy().hasHeightForWidth());
        textEdit_reason->setSizePolicy(sizePolicy1);
        textEdit_reason->setMaximumSize(QSize(16777215, 100));

        Layout_inputArea->addWidget(textEdit_reason, 4, 5, 1, 1);

        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setFont(font);
        label_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        Layout_inputArea->addWidget(label_name, 5, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_copy = new QPushButton(centralwidget);
        btn_copy->setObjectName(QString::fromUtf8("btn_copy"));
        btn_copy->setMinimumSize(QSize(200, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        btn_copy->setFont(font3);

        gridLayout_3->addWidget(btn_copy, 0, 2, 1, 1);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setMinimumSize(QSize(200, 40));
        btn_clear->setFont(font3);

        gridLayout_3->addWidget(btn_clear, 0, 1, 1, 1);

        btn_clearAll = new QPushButton(centralwidget);
        btn_clearAll->setObjectName(QString::fromUtf8("btn_clearAll"));
        btn_clearAll->setMinimumSize(QSize(0, 40));
        btn_clearAll->setFont(font3);

        gridLayout_3->addWidget(btn_clearAll, 0, 0, 1, 1);

        btn_copyAll = new QPushButton(centralwidget);
        btn_copyAll->setObjectName(QString::fromUtf8("btn_copyAll"));
        btn_copyAll->setMinimumSize(QSize(0, 40));
        btn_copyAll->setFont(font3);

        gridLayout_3->addWidget(btn_copyAll, 0, 3, 1, 1);


        Layout_inputArea->addLayout(gridLayout_3, 8, 0, 1, 6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_viewPre = new QPushButton(centralwidget);
        btn_viewPre->setObjectName(QString::fromUtf8("btn_viewPre"));
        btn_viewPre->setFont(font3);

        horizontalLayout_2->addWidget(btn_viewPre);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setEnabled(true);
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(1));

        horizontalLayout_2->addWidget(lcdNumber);

        btn_next = new QPushButton(centralwidget);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setFont(font3);

        horizontalLayout_2->addWidget(btn_next);

        label_msg = new QLabel(centralwidget);
        label_msg->setObjectName(QString::fromUtf8("label_msg"));
        label_msg->setMinimumSize(QSize(300, 0));
        label_msg->setMaximumSize(QSize(300, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font4.setPointSize(14);
        font4.setUnderline(true);
        label_msg->setFont(font4);
        label_msg->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_msg->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(label_msg);

        btn_nextData = new QPushButton(centralwidget);
        btn_nextData->setObjectName(QString::fromUtf8("btn_nextData"));
        btn_nextData->setFont(font3);

        horizontalLayout_2->addWidget(btn_nextData);


        Layout_inputArea->addLayout(horizontalLayout_2, 7, 0, 1, 6);

        lineEdit_number = new QLineEdit(centralwidget);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));

        Layout_inputArea->addWidget(lineEdit_number, 3, 1, 1, 4);

        cb_word = new QComboBox(centralwidget);
        cb_word->setObjectName(QString::fromUtf8("cb_word"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        cb_word->setFont(font5);

        Layout_inputArea->addWidget(cb_word, 2, 1, 1, 4);

        cb_org = new QComboBox(centralwidget);
        cb_org->addItem(QString());
        cb_org->addItem(QString());
        cb_org->addItem(QString());
        cb_org->setObjectName(QString::fromUtf8("cb_org"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_org->sizePolicy().hasHeightForWidth());
        cb_org->setSizePolicy(sizePolicy2);
        cb_org->setMinimumSize(QSize(0, 0));
        cb_org->setFont(font5);

        Layout_inputArea->addWidget(cb_org, 1, 1, 1, 4);

        calendar = new QCalendarWidget(centralwidget);
        calendar->setObjectName(QString::fromUtf8("calendar"));

        Layout_inputArea->addWidget(calendar, 0, 1, 1, 4);

        Layout_btn = new QGridLayout();
        Layout_btn->setObjectName(QString::fromUtf8("Layout_btn"));
        btn_rmws = new QPushButton(centralwidget);
        btn_rmws->setObjectName(QString::fromUtf8("btn_rmws"));
        btn_rmws->setMinimumSize(QSize(90, 30));
        btn_rmws->setFont(font3);

        Layout_btn->addWidget(btn_rmws, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_btn->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_btn->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        Layout_inputArea->addLayout(Layout_btn, 4, 1, 1, 4);

        cb_name = new QComboBox(centralwidget);
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->addItem(QString());
        cb_name->setObjectName(QString::fromUtf8("cb_name"));
        cb_name->setFont(font5);

        Layout_inputArea->addWidget(cb_name, 5, 1, 1, 4);

        Layout_inputArea->setColumnStretch(1, 1);
        Layout_inputArea->setColumnStretch(5, 1);

        gridLayout_4->addLayout(Layout_inputArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
#ifndef QT_NO_SHORTCUT
        label_number->setBuddy(lineEdit_number);
        label_reason->setBuddy(textEdit_reason);
        label_word->setBuddy(lineEdit_word);
        label_org->setBuddy(lineEdit_org);
        label_date->setBuddy(calendar);
        label_name->setBuddy(lineEdit_name);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(calendar, cb_org);
        QWidget::setTabOrder(cb_org, cb_word);
        QWidget::setTabOrder(cb_word, lineEdit_number);
        QWidget::setTabOrder(lineEdit_number, btn_rmws);
        QWidget::setTabOrder(btn_rmws, cb_name);
        QWidget::setTabOrder(cb_name, btn_nextData);
        QWidget::setTabOrder(btn_nextData, btn_copyAll);
        QWidget::setTabOrder(btn_copyAll, btn_copy);
        QWidget::setTabOrder(btn_copy, btn_clear);
        QWidget::setTabOrder(btn_clear, btn_clearAll);
        QWidget::setTabOrder(btn_clearAll, btn_next);
        QWidget::setTabOrder(btn_next, btn_viewPre);
        QWidget::setTabOrder(btn_viewPre, lineEdit_org);
        QWidget::setTabOrder(lineEdit_org, lineEdit_word);
        QWidget::setTabOrder(lineEdit_word, textEdit_reason);
        QWidget::setTabOrder(textEdit_reason, lineEdit_name);
        QWidget::setTabOrder(lineEdit_name, lineEdit_viewDate);
        QWidget::setTabOrder(lineEdit_viewDate, lineEdit_viewWord);
        QWidget::setTabOrder(lineEdit_viewWord, lineEdit_viewNum);
        QWidget::setTabOrder(lineEdit_viewNum, lineEdit_viewOrg);
        QWidget::setTabOrder(lineEdit_viewOrg, textEdit_viewReason);
        QWidget::setTabOrder(textEdit_viewReason, lineEdit_viewName);

        retranslateUi(MainWindow);
        QObject::connect(cb_org, SIGNAL(activated(QString)), lineEdit_org, SLOT(setText(QString)));
        QObject::connect(cb_word, SIGNAL(activated(QString)), lineEdit_word, SLOT(setText(QString)));
        QObject::connect(cb_name, SIGNAL(activated(QString)), lineEdit_name, SLOT(setText(QString)));
        QObject::connect(lineEdit_org, SIGNAL(textChanged(QString)), lineEdit_viewOrg, SLOT(setText(QString)));
        QObject::connect(lineEdit_word, SIGNAL(textChanged(QString)), lineEdit_viewWord, SLOT(setText(QString)));
        QObject::connect(lineEdit_number, SIGNAL(textChanged(QString)), lineEdit_viewNum, SLOT(setText(QString)));
        QObject::connect(lineEdit_name, SIGNAL(textChanged(QString)), lineEdit_viewName, SLOT(setText(QString)));
        QObject::connect(cb_word, SIGNAL(currentTextChanged(QString)), lineEdit_word, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\205\254\346\226\207\350\274\270\345\205\245\350\274\224\345\212\251\347\250\213\345\274\217", nullptr));
        label_number->setText(QApplication::translate("MainWindow", "\345\216\237\346\226\207\350\231\237\343\200\200", nullptr));
        label_reason->setText(QApplication::translate("MainWindow", "\344\272\213\347\224\261\343\200\200\343\200\200", nullptr));
        label_word->setText(QApplication::translate("MainWindow", "\345\216\237\346\226\207\345\255\227\343\200\200", nullptr));
        label_wn->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\254", nullptr));
        label_nm->setText(QApplication::translate("MainWindow", "\350\231\237", nullptr));
        label_send->setText(QApplication::translate("MainWindow", "\345\207\275", nullptr));
        label_7->setText(QString());
        label_org->setText(QApplication::translate("MainWindow", "\347\231\274\346\226\207\346\251\237\351\227\234", nullptr));
        label_date->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237\343\200\200\343\200\200", nullptr));
        label_name->setText(QApplication::translate("MainWindow", "\346\211\277\350\276\246\344\272\272\343\200\200", nullptr));
        btn_copy->setText(QApplication::translate("MainWindow", "\350\244\207\350\243\275\351\200\231\347\255\206\350\263\207\346\226\231\345\210\260\345\211\252\350\262\274\347\260\277", nullptr));
        btn_clear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        btn_clearAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\346\270\205\351\231\244", nullptr));
        btn_copyAll->setText(QApplication::translate("MainWindow", "\350\244\207\350\243\275\345\205\250\351\203\250\350\263\207\346\226\231\345\210\260\345\211\252\350\262\274\347\260\277", nullptr));
        btn_viewPre->setText(QApplication::translate("MainWindow", "<", nullptr));
        btn_next->setText(QApplication::translate("MainWindow", ">", nullptr));
        label_msg->setText(QApplication::translate("MainWindow", "\350\250\212\346\201\257:", nullptr));
        btn_nextData->setText(QApplication::translate("MainWindow", "\345\204\262\345\255\230\344\270\246\344\270\213\344\270\200\347\255\206", nullptr));
        cb_org->setItemText(0, QApplication::translate("MainWindow", "\345\213\236\345\213\225\351\203\250\345\213\236\345\213\225\345\212\233\347\231\274\345\261\225\347\275\262\344\270\255\345\275\260\346\212\225\345\210\206\347\275\262", nullptr));
        cb_org->setItemText(1, QApplication::translate("MainWindow", "\350\207\272\344\270\255\345\270\202\346\224\277\345\272\234", nullptr));
        cb_org->setItemText(2, QApplication::translate("MainWindow", "\350\207\272\344\270\255\345\270\202\346\224\277\345\272\234\345\213\236\345\267\245\345\261\200", nullptr));

        btn_rmws->setText(QApplication::translate("MainWindow", "\350\262\274\344\270\212\n"
"\344\270\246\347\247\273\351\231\244\347\251\272\347\231\275\345\255\227\345\205\203", nullptr));
        cb_name->setItemText(0, QApplication::translate("MainWindow", "\347\216\213\346\267\221\347\234\237", nullptr));
        cb_name->setItemText(1, QApplication::translate("MainWindow", "\346\242\201\347\200\236\344\272\221", nullptr));
        cb_name->setItemText(2, QApplication::translate("MainWindow", "\345\221\250\346\201\251\347\220\246", nullptr));
        cb_name->setItemText(3, QApplication::translate("MainWindow", "\347\256\241\351\207\207\350\202\262", nullptr));
        cb_name->setItemText(4, QApplication::translate("MainWindow", "\344\276\257\346\205\247\347\276\216", nullptr));
        cb_name->setItemText(5, QApplication::translate("MainWindow", "\345\274\265\345\271\274\351\272\227", nullptr));
        cb_name->setItemText(6, QApplication::translate("MainWindow", "\345\274\265\345\256\245\347\206\217", nullptr));
        cb_name->setItemText(7, QApplication::translate("MainWindow", "\350\250\261\351\233\205\345\251\267", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
