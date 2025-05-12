/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *ekrankod;
    QPushButton *dodaj;
    QPushButton *odejmij;
    QPushButton *drukuj;
    QListWidget *koniec;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ekrankod = new QLineEdit(centralwidget);
        ekrankod->setObjectName("ekrankod");
        ekrankod->setGeometry(QRect(30, 30, 401, 61));
        dodaj = new QPushButton(centralwidget);
        dodaj->setObjectName("dodaj");
        dodaj->setGeometry(QRect(30, 130, 171, 91));
        odejmij = new QPushButton(centralwidget);
        odejmij->setObjectName("odejmij");
        odejmij->setGeometry(QRect(260, 130, 171, 91));
        drukuj = new QPushButton(centralwidget);
        drukuj->setObjectName("drukuj");
        drukuj->setGeometry(QRect(30, 410, 401, 91));
        koniec = new QListWidget(centralwidget);
        koniec->setObjectName("koniec");
        koniec->setGeometry(QRect(460, 30, 311, 471));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        dodaj->setText(QCoreApplication::translate("MainWindow", "DODAJ", nullptr));
        odejmij->setText(QCoreApplication::translate("MainWindow", "USU\305\203", nullptr));
        drukuj->setText(QCoreApplication::translate("MainWindow", "DRUKUJ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
