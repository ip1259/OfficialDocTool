#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controller.h"
#include <QTextCodec>
#include "database.cpp"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

DataBase database = DataBase();


void MainWindow::on_lineEdit_org_textChanged(const QString &arg1)
{
    QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");

    if(ui->lineEdit_org->text() == codec->toUnicode("勞動部勞動力發展署中彰投分署"))
    {
        ui->cb_word->clear();
        ui->cb_word->addItems({codec->toUnicode("中分署秘"),codec->toUnicode("中分署訓")});
    }
    if(ui->lineEdit_org->text() == codec->toUnicode("臺中市政府"))
    {
        ui->cb_word->clear();
        ui->cb_word->addItem(codec->toUnicode("府授勞就"));
    }
    if(ui->lineEdit_org->text() == codec->toUnicode("臺中市政府勞工局"))
    {
        ui->cb_word->clear();
        ui->cb_word->addItem(codec->toUnicode("中市勞就"));
    }
}

void MainWindow::on_textEdit_reason_textChanged()
{
    ui->textEdit_viewReason->setText(ui->textEdit_reason->toPlainText());

}

void MainWindow::on_btn_rmws_clicked()
{

    ui->textEdit_reason->clear();
    ui->textEdit_reason->paste();
    ui->textEdit_reason->setText(ui->textEdit_reason->toPlainText().remove("\n"));
    ui->textEdit_reason->setText(ui->textEdit_reason->toPlainText().remove(" "));
}

void MainWindow::on_calendar_selectionChanged()
{
    ui->lineEdit_viewDate->setText(Controller::dateString(ui->calendar->selectedDate()));
}

void MainWindow::on_btn_copy_clicked()
{
    ui->label_msg->setText(Controller::chinese("訊息:"));
    if(ui->lineEdit_viewDate->text().isEmpty() || ui->lineEdit_viewWord->text().isEmpty() || ui->lineEdit_viewNum->text().isEmpty() || ui->lineEdit_viewOrg->text().isEmpty() || ui->textEdit_viewReason->toPlainText().isEmpty() || ui->lineEdit_viewName->text().isEmpty())
    {
        ui->label_msg->setText(Controller::chinese("訊息:資料不能空白!"));
    }else
    {
        Controller::copyToClipboard(QString::fromStdString(Controller::combineAsTable(ui->lineEdit_viewDate->text(),ui->lineEdit_viewWord->text(),ui->lineEdit_viewNum->text(),ui->lineEdit_viewOrg->text(),ui->textEdit_viewReason->toPlainText(),ui->lineEdit_viewName->text(), ui->label_wn->text(), ui->label_nm->text(), ui->label_send->text())));
        ui->label_msg->setText(Controller::chinese("訊息:資料複製成功"));
    }
}

void MainWindow::on_btn_clear_clicked()
{
    ui->lineEdit_number->setText("");
    ui->textEdit_reason->setText("");
    ui->btn_nextData->setEnabled(true);
}

void MainWindow::on_btn_clearAll_clicked()
{
    ui->lineEdit_viewDate->clear();
    ui->lineEdit_org->clear();
    ui->lineEdit_word->clear();
    ui->lineEdit_number->clear();
    ui->lineEdit_name->clear();
    ui->textEdit_reason->clear();
    ui->btn_nextData->setEnabled(true);
}

void MainWindow::on_btn_nextData_clicked()
{
    ui->label_msg->setText(Controller::chinese("訊息:"));
    if(ui->lineEdit_viewDate->text().isEmpty() || ui->lineEdit_viewWord->text().isEmpty() || ui->lineEdit_viewNum->text().isEmpty() || ui->lineEdit_viewOrg->text().isEmpty() || ui->textEdit_viewReason->toPlainText().isEmpty() || ui->lineEdit_viewName->text().isEmpty())
    {
        ui->label_msg->setText(Controller::chinese("訊息:資料不能空白!"));
    }
    else
    {
        database.addData(ui->lineEdit_viewDate->text(),ui->lineEdit_viewWord->text(),ui->lineEdit_viewNum->text(),ui->lineEdit_viewOrg->text(),ui->textEdit_viewReason->toPlainText(),ui->lineEdit_viewName->text());
        ui->lineEdit_viewDate->clear();
        ui->lineEdit_viewWord->clear();
        ui->lineEdit_viewNum->clear();
        ui->lineEdit_viewOrg->clear();
        ui->textEdit_viewReason->clear();
        ui->lineEdit_viewName->clear();
        ui->lcdNumber->display(database.length()+1);
        ui->label_msg->setText(Controller::chinese("訊息:資料儲存成功"));
        database.setCur(database.getCur()+1);
    }
}

void MainWindow::on_btn_copyAll_clicked()
{
    ui->label_msg->setText(Controller::chinese("訊息:"));
    if(database.isEmpty())
    {
        ui->label_msg->setText(Controller::chinese("訊息:資料是空的"));
    }
    else
    {
        Controller::copyToClipboard(database.dataToTable());
        ui->label_msg->setText(Controller::chinese("訊息:資料複製成功"));
    }
}

void MainWindow::displayViewArea(QStringList data)
{
    ui->lineEdit_viewDate->setText(data[0]);
    ui->lineEdit_viewWord->setText(data[1]);
    ui->lineEdit_viewNum->setText(data[2]);
    ui->lineEdit_viewOrg->setText(data[3]);
    ui->textEdit_viewReason->setText(data[4]);
    ui->lineEdit_viewName->setText(data[5]);
    ui->btn_nextData->setEnabled(false);
}

void MainWindow::on_btn_next_clicked()
{
    ui->label_msg->setText(Controller::chinese("訊息:"));
    if(!database.isEmpty())
    {
        database.setCur(ui->lcdNumber->intValue()-1);
        database.nextData();
        ui->lcdNumber->display(database.getCur()+1);
        displayViewArea(database.getCurData());
        ui->label_msg->setText(Controller::chinese("訊息:資料讀取成功，清除資料以開啟儲存下一筆按鈕"));
    }
    else
    {
        ui->label_msg->setText(Controller::chinese("訊息:沒有資料"));
    }
}

void MainWindow::on_btn_viewPre_clicked()
{
    ui->label_msg->setText(Controller::chinese("訊息:"));
    if(!database.isEmpty())
    {
        database.setCur(ui->lcdNumber->intValue()-1);
        database.privData();
        ui->lcdNumber->display(database.getCur()+1);
        displayViewArea(database.getCurData());
        ui->label_msg->setText(Controller::chinese("訊息:資料讀取成功，清除資料以開啟儲存下一筆按鈕"));
    }
    else
    {
        ui->label_msg->setText(Controller::chinese("訊息:沒有資料"));
    }
}
