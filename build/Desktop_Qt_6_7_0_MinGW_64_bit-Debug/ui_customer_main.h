/********************************************************************************
** Form generated from reading UI file 'customer_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_MAIN_H
#define UI_CUSTOMER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_main
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer_main)
    {
        if (customer_main->objectName().isEmpty())
            customer_main->setObjectName("customer_main");
        customer_main->resize(450, 800);
        centralwidget = new QWidget(customer_main);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 390, 800));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 388, 798));
        scrollArea->setWidget(scrollAreaWidgetContents);
        customer_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer_main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 17));
        customer_main->setMenuBar(menubar);
        statusbar = new QStatusBar(customer_main);
        statusbar->setObjectName("statusbar");
        customer_main->setStatusBar(statusbar);

        retranslateUi(customer_main);

        QMetaObject::connectSlotsByName(customer_main);
    } // setupUi

    void retranslateUi(QMainWindow *customer_main)
    {
        customer_main->setWindowTitle(QCoreApplication::translate("customer_main", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_main: public Ui_customer_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_MAIN_H
