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
    void on_jeden_clicked();

    void on_dwa_clicked();

    void on_dod_clicked();

    void on_wynik_clicked();

    void on_odej_clicked();

    void on_plusm_clicked();

    void on_coma_clicked();

    void on_clear_clicked();

    void on_dziel_clicked();

    void on_mnoz_clicked();

    void on_trzy_clicked();

    void on_cztery_clicked();

    void on_piec_clicked();

    void on_szesc_clicked();

    void on_siedem_clicked();

    void on_osiem_clicked();

    void on_dziewiec_clicked();

    void on_zero_clicked();

    void on_pierw_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
