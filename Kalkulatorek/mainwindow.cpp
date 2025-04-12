#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "kalkulator.h"
#include <QMessageBox>
double ekran = 0;
int zakres = 10;
cal kalk ;
char znak;
bool przecinek = false;
int miejsce = 0;

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

void MainWindow::on_jeden_clicked()
{
    if (!przecinek)
    {
    ekran = ekran * 10 + 1;
    }
    else{
        ekran = ekran + 1.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));
}



void MainWindow::on_dwa_clicked()
{

    if (!przecinek)
    {
        ekran = ekran * 10 + 2;
    }
    else{
        ekran = ekran + 2.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));
}

void MainWindow::on_trzy_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 3;
    }
    else{
        ekran = ekran + 3.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));

}

void MainWindow::on_cztery_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 4;
    }
    else{
        ekran = ekran + 4.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));

}


void MainWindow::on_piec_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 5;
    }
    else{
        ekran = ekran + 5.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));

}


void MainWindow::on_szesc_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 6;
    }
    else{
        ekran = ekran + 6.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));

}


void MainWindow::on_siedem_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 7;
    }
    else{
        ekran = ekran + 7.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));

}


void MainWindow::on_osiem_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 8;
    }
    else{
        ekran = ekran + 8.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));
}


void MainWindow::on_dziewiec_clicked()
{
    if (!przecinek)
    {
        ekran = ekran * 10 + 9;
    }
    else{
        ekran = ekran + 9.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));
}


void MainWindow::on_zero_clicked()
{    if (!przecinek)
    {
        ekran = ekran * 10;
    }
    else{
        ekran = ekran + 0.0 / pow(10, miejsce);
        miejsce++;
    }
    ui->ekran->setText(QString::number(ekran,'g',zakres));

}


void MainWindow::on_dod_clicked()
{
    znak = '+';
    kalk.setmem(ui->ekran-> displayText().toDouble()) ;
    ekran = 0;
}

void MainWindow::on_odej_clicked()
{
    znak = '-';
    kalk.setmem(ui->ekran-> displayText().toDouble());
    ekran = 0;
}
void MainWindow::on_mnoz_clicked()
{
    znak = '*';
    kalk.setmem(ui->ekran-> displayText().toDouble());
    ekran = 0;
}

void MainWindow::on_dziel_clicked()
{
    znak = '/';
    kalk.setmem(ui->ekran-> displayText().toDouble());
    if(kalk.retmem() == 0)
    {
        QMessageBox::about(this, "BLAD", "NIE MOZNA DZIELIC PRZEZ 0");
        ekran = 0;
        kalk.reset();
        znak = '0';
    }
    ekran = 0;

}
void MainWindow::on_pierw_clicked()
{
    kalk.setmem(ui->ekran-> displayText().toDouble());
    if(kalk.retmem() > 0)
    {
        kalk.setmem(ui->ekran-> displayText().toDouble());
        ui->ekran->setText((QString::number(kalk.pier(),'g',zakres)));
        ekran = 0;
    }
 else {
        QMessageBox::about(this, "BLAD", "NIE MOZNA PIERWIASTKOWAC UJEMNEJ LICZBY");
        ekran = 0;
       kalk.reset();
       znak = '0';
    }
}



void MainWindow::on_wynik_clicked()
{
    switch(znak)
    {
    case '+':
        ui->ekran->setText((QString::number(kalk.add(ekran),'g',zakres)));
        ekran = 0;
        break;
    case '-':
         ui->ekran->setText((QString::number(kalk.sub(ekran),'g',zakres)));
        ekran = 0;
        break;
    case '*':
        ui->ekran->setText((QString::number(kalk.mlt(ekran),'g',zakres)));
        ekran = 0;
        break;
    case '/':
        ui->ekran->setText((QString::number(ekran,'g',zakres)));
        if(ekran == 0)
        {
            QMessageBox::about(this, "BLAD", "NIE MOZNA DZIELIC PRZEZ 0");
            kalk.reset();
            znak = '0';
            break;
        }
        else{
        ui->ekran->setText((QString::number(kalk.div(ekran),'g',zakres)));
        ekran = 0;
        break;}
    }

}

void MainWindow::on_plusm_clicked()
{
    ekran = - ekran;
    ui->ekran->setText(QString::number(ekran,'g',zakres));
}


void MainWindow::on_coma_clicked()
{
    przecinek = true;
    miejsce = 1;
    ui->ekran->setText(QString::number(ekran, 'g', 15) + ".");
}


void MainWindow::on_clear_clicked()
{
    kalk.reset();
    ekran = 0;
    znak = '0';
    ui->ekran->setText((QString::number(kalk.retmem(),'g',zakres)));
}










