/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *Jeden;
    QPushButton *Dwa;
    QPushButton *Trzy;
    QPushButton *Siedem;
    QPushButton *Cztery;
    QPushButton *Piec;
    QPushButton *Szesc;
    QPushButton *Osiem;
    QPushButton *Dziewiec;
    QPushButton *pushButton_9;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Plus;
    QPushButton *Minus;
    QPushButton *Mnoz;
    QPushButton *Dziel;
    QPushButton *Mod;
    QPushButton *Wynik;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(220, 210, 321, 251));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Jeden = new QPushButton(gridLayoutWidget);
        Jeden->setObjectName("Jeden");

        gridLayout_2->addWidget(Jeden, 0, 0, 1, 1);

        Dwa = new QPushButton(gridLayoutWidget);
        Dwa->setObjectName("Dwa");

        gridLayout_2->addWidget(Dwa, 0, 1, 1, 1);

        Trzy = new QPushButton(gridLayoutWidget);
        Trzy->setObjectName("Trzy");

        gridLayout_2->addWidget(Trzy, 0, 2, 1, 1);

        Siedem = new QPushButton(gridLayoutWidget);
        Siedem->setObjectName("Siedem");

        gridLayout_2->addWidget(Siedem, 2, 0, 1, 1);

        Cztery = new QPushButton(gridLayoutWidget);
        Cztery->setObjectName("Cztery");

        gridLayout_2->addWidget(Cztery, 1, 0, 1, 1);

        Piec = new QPushButton(gridLayoutWidget);
        Piec->setObjectName("Piec");

        gridLayout_2->addWidget(Piec, 1, 1, 1, 1);

        Szesc = new QPushButton(gridLayoutWidget);
        Szesc->setObjectName("Szesc");

        gridLayout_2->addWidget(Szesc, 1, 2, 1, 1);

        Osiem = new QPushButton(gridLayoutWidget);
        Osiem->setObjectName("Osiem");

        gridLayout_2->addWidget(Osiem, 2, 1, 1, 1);

        Dziewiec = new QPushButton(gridLayoutWidget);
        Dziewiec->setObjectName("Dziewiec");

        gridLayout_2->addWidget(Dziewiec, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout_2->addWidget(pushButton_9, 3, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(570, 210, 160, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Plus = new QPushButton(verticalLayoutWidget);
        Plus->setObjectName("Plus");

        verticalLayout->addWidget(Plus);

        Minus = new QPushButton(verticalLayoutWidget);
        Minus->setObjectName("Minus");

        verticalLayout->addWidget(Minus);

        Mnoz = new QPushButton(verticalLayoutWidget);
        Mnoz->setObjectName("Mnoz");

        verticalLayout->addWidget(Mnoz);

        Dziel = new QPushButton(verticalLayoutWidget);
        Dziel->setObjectName("Dziel");

        verticalLayout->addWidget(Dziel);

        Mod = new QPushButton(verticalLayoutWidget);
        Mod->setObjectName("Mod");

        verticalLayout->addWidget(Mod);

        Wynik = new QPushButton(verticalLayoutWidget);
        Wynik->setObjectName("Wynik");

        verticalLayout->addWidget(Wynik);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 90, 271, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(22);
        label->setFont(font);
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
        Jeden->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Dwa->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Trzy->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Siedem->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Cztery->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Piec->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Szesc->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Osiem->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Dziewiec->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Mnoz->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Dziel->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Wynik->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TU LICZBy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
