/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
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
    QGridLayout *gridLayout;
    QLineEdit *ekran;
    QPushButton *coma;
    QPushButton *dwa;
    QPushButton *plusm;
    QPushButton *clear;
    QPushButton *piec;
    QPushButton *trzy;
    QPushButton *dziewiec;
    QPushButton *cztery;
    QPushButton *siedem;
    QPushButton *szesc;
    QPushButton *modu;
    QPushButton *osiem;
    QPushButton *zero;
    QPushButton *pierw;
    QPushButton *jeden;
    QPushButton *dod;
    QPushButton *odej;
    QPushButton *mnoz;
    QPushButton *dziel;
    QPushButton *wynik;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(452, 447);
        MainWindow->setMinimumSize(QSize(452, 447));
        MainWindow->setMaximumSize(QSize(452, 447));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        ekran = new QLineEdit(centralwidget);
        ekran->setObjectName("ekran");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ekran->sizePolicy().hasHeightForWidth());
        ekran->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        ekran->setFont(font);
        ekran->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ekran->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        ekran->setReadOnly(true);

        gridLayout->addWidget(ekran, 0, 0, 1, 4);

        coma = new QPushButton(centralwidget);
        coma->setObjectName("coma");
        sizePolicy.setHeightForWidth(coma->sizePolicy().hasHeightForWidth());
        coma->setSizePolicy(sizePolicy);

        gridLayout->addWidget(coma, 5, 0, 1, 1);

        dwa = new QPushButton(centralwidget);
        dwa->setObjectName("dwa");
        sizePolicy.setHeightForWidth(dwa->sizePolicy().hasHeightForWidth());
        dwa->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dwa, 1, 1, 1, 1);

        plusm = new QPushButton(centralwidget);
        plusm->setObjectName("plusm");
        sizePolicy.setHeightForWidth(plusm->sizePolicy().hasHeightForWidth());
        plusm->setSizePolicy(sizePolicy);

        gridLayout->addWidget(plusm, 5, 2, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(clear, 7, 2, 1, 1);

        piec = new QPushButton(centralwidget);
        piec->setObjectName("piec");
        sizePolicy.setHeightForWidth(piec->sizePolicy().hasHeightForWidth());
        piec->setSizePolicy(sizePolicy);

        gridLayout->addWidget(piec, 3, 1, 1, 1);

        trzy = new QPushButton(centralwidget);
        trzy->setObjectName("trzy");
        sizePolicy.setHeightForWidth(trzy->sizePolicy().hasHeightForWidth());
        trzy->setSizePolicy(sizePolicy);

        gridLayout->addWidget(trzy, 1, 2, 1, 1);

        dziewiec = new QPushButton(centralwidget);
        dziewiec->setObjectName("dziewiec");
        sizePolicy.setHeightForWidth(dziewiec->sizePolicy().hasHeightForWidth());
        dziewiec->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dziewiec, 4, 2, 1, 1);

        cztery = new QPushButton(centralwidget);
        cztery->setObjectName("cztery");
        sizePolicy.setHeightForWidth(cztery->sizePolicy().hasHeightForWidth());
        cztery->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cztery, 3, 0, 1, 1);

        siedem = new QPushButton(centralwidget);
        siedem->setObjectName("siedem");
        sizePolicy.setHeightForWidth(siedem->sizePolicy().hasHeightForWidth());
        siedem->setSizePolicy(sizePolicy);

        gridLayout->addWidget(siedem, 4, 0, 1, 1);

        szesc = new QPushButton(centralwidget);
        szesc->setObjectName("szesc");
        sizePolicy.setHeightForWidth(szesc->sizePolicy().hasHeightForWidth());
        szesc->setSizePolicy(sizePolicy);

        gridLayout->addWidget(szesc, 3, 2, 1, 1);

        modu = new QPushButton(centralwidget);
        modu->setObjectName("modu");
        sizePolicy.setHeightForWidth(modu->sizePolicy().hasHeightForWidth());
        modu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(modu, 7, 1, 1, 1);

        osiem = new QPushButton(centralwidget);
        osiem->setObjectName("osiem");
        sizePolicy.setHeightForWidth(osiem->sizePolicy().hasHeightForWidth());
        osiem->setSizePolicy(sizePolicy);

        gridLayout->addWidget(osiem, 4, 1, 1, 1);

        zero = new QPushButton(centralwidget);
        zero->setObjectName("zero");
        sizePolicy.setHeightForWidth(zero->sizePolicy().hasHeightForWidth());
        zero->setSizePolicy(sizePolicy);

        gridLayout->addWidget(zero, 5, 1, 1, 1);

        pierw = new QPushButton(centralwidget);
        pierw->setObjectName("pierw");
        sizePolicy.setHeightForWidth(pierw->sizePolicy().hasHeightForWidth());
        pierw->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pierw, 7, 0, 1, 1);

        jeden = new QPushButton(centralwidget);
        jeden->setObjectName("jeden");
        sizePolicy.setHeightForWidth(jeden->sizePolicy().hasHeightForWidth());
        jeden->setSizePolicy(sizePolicy);

        gridLayout->addWidget(jeden, 1, 0, 1, 1);

        dod = new QPushButton(centralwidget);
        dod->setObjectName("dod");
        sizePolicy.setHeightForWidth(dod->sizePolicy().hasHeightForWidth());
        dod->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dod, 1, 3, 1, 1);

        odej = new QPushButton(centralwidget);
        odej->setObjectName("odej");
        sizePolicy.setHeightForWidth(odej->sizePolicy().hasHeightForWidth());
        odej->setSizePolicy(sizePolicy);

        gridLayout->addWidget(odej, 3, 3, 1, 1);

        mnoz = new QPushButton(centralwidget);
        mnoz->setObjectName("mnoz");
        sizePolicy.setHeightForWidth(mnoz->sizePolicy().hasHeightForWidth());
        mnoz->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mnoz, 4, 3, 1, 1);

        dziel = new QPushButton(centralwidget);
        dziel->setObjectName("dziel");
        sizePolicy.setHeightForWidth(dziel->sizePolicy().hasHeightForWidth());
        dziel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dziel, 5, 3, 1, 1);

        wynik = new QPushButton(centralwidget);
        wynik->setObjectName("wynik");
        sizePolicy.setHeightForWidth(wynik->sizePolicy().hasHeightForWidth());
        wynik->setSizePolicy(sizePolicy);

        gridLayout->addWidget(wynik, 7, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 452, 22));
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
        coma->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        dwa->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        plusm->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        piec->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        trzy->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        dziewiec->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        cztery->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        siedem->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        szesc->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        modu->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        osiem->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pierw->setText(QCoreApplication::translate("MainWindow", "Sqrt", nullptr));
        jeden->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        dod->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        odej->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mnoz->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        dziel->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        wynik->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
