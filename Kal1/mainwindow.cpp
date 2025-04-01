#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_Jeden_clicked()
{
    ui->label->setText("1");
}


void MainWindow::on_Dwa_clicked()
{
     ui->label->setText("2");
}


void MainWindow::on_Trzy_clicked()
{
     ui->label->setText("3");
}


void MainWindow::on_Cztery_clicked()
{
     ui->label->setText("4");
}


void MainWindow::on_Piec_clicked()
{
     ui->label->setText("5");
}


void MainWindow::on_Szesc_clicked()
{
     ui->label->setText("6");
}


void MainWindow::on_Siedem_clicked()
{
     ui->label->setText("7");
}


void MainWindow::on_Osiem_clicked()
{
     ui->label->setText("8");
}


void MainWindow::on_Dziewiec_clicked()
{
     ui->label->setText("9");
}


void MainWindow::on_pushButton_9_clicked()
{
     ui->label->setText("0");
}

