#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Jeden_clicked();

    void on_Dwa_clicked();

    void on_Trzy_clicked();

    void on_Cztery_clicked();

    void on_Piec_clicked();

    void on_Szesc_clicked();

    void on_Siedem_clicked();

    void on_Osiem_clicked();

    void on_Dziewiec_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
