/********************************************************************************
** Form generated from reading UI file 'customer_rank.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_RANK_H
#define UI_CUSTOMER_RANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_rank
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer_rank)
    {
        if (customer_rank->objectName().isEmpty())
            customer_rank->setObjectName("customer_rank");
        customer_rank->resize(800, 600);
        centralwidget = new QWidget(customer_rank);
        centralwidget->setObjectName("centralwidget");
        customer_rank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer_rank);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        customer_rank->setMenuBar(menubar);
        statusbar = new QStatusBar(customer_rank);
        statusbar->setObjectName("statusbar");
        customer_rank->setStatusBar(statusbar);

        retranslateUi(customer_rank);

        QMetaObject::connectSlotsByName(customer_rank);
    } // setupUi

    void retranslateUi(QMainWindow *customer_rank)
    {
        customer_rank->setWindowTitle(QCoreApplication::translate("customer_rank", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_rank: public Ui_customer_rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_RANK_H
