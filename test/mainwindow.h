#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_org_textChanged(const QString &arg1);

    void on_textEdit_reason_textChanged();

    void on_btn_rmws_clicked();

    void on_calendar_selectionChanged();

    void on_btn_copy_clicked();

    void on_btn_clear_clicked();

    void on_btn_clearAll_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
