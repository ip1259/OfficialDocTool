#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controller.h"
#include <QTextCodec>


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
    ui->textEdit_reason->setText(ui->textEdit_reason->toPlainText().remove("\n"));
    ui->textEdit_reason->setText(ui->textEdit_reason->toPlainText().remove(" "));
}

void MainWindow::on_calendar_selectionChanged()
{
    ui->lineEdit_viewDate->setText(Controller::dateString(ui->calendar->selectedDate()));
}

void MainWindow::on_btn_copy_clicked()
{
    Controller::copyToClipboard(QString::fromStdString(Controller::combineAsTable(ui->lineEdit_viewDate->text(),ui->lineEdit_viewWord->text(),ui->lineEdit_viewNum->text(),ui->lineEdit_viewOrg->text(),ui->textEdit_viewReason->toPlainText(),ui->lineEdit_viewName->text(), ui->label_wn->text(), ui->label_nm->text(), ui->label_send->text())));
}
