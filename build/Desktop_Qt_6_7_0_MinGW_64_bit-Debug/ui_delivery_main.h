/********************************************************************************
** Form generated from reading UI file 'delivery_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVERY_MAIN_H
#define UI_DELIVERY_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delivery_main
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *delivery_main)
    {
        if (delivery_main->objectName().isEmpty())
            delivery_main->setObjectName("delivery_main");
        delivery_main->resize(800, 600);
        centralwidget = new QWidget(delivery_main);
        centralwidget->setObjectName("centralwidget");
        delivery_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(delivery_main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        delivery_main->setMenuBar(menubar);
        statusbar = new QStatusBar(delivery_main);
        statusbar->setObjectName("statusbar");
        delivery_main->setStatusBar(statusbar);

        retranslateUi(delivery_main);

        QMetaObject::connectSlotsByName(delivery_main);
    } // setupUi

    void retranslateUi(QMainWindow *delivery_main)
    {
        delivery_main->setWindowTitle(QCoreApplication::translate("delivery_main", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delivery_main: public Ui_delivery_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERY_MAIN_H
