/********************************************************************************
** Form generated from reading UI file 'customer_choose_dishes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_CHOOSE_DISHES_H
#define UI_CUSTOMER_CHOOSE_DISHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_choose_dishes
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer_choose_dishes)
    {
        if (customer_choose_dishes->objectName().isEmpty())
            customer_choose_dishes->setObjectName("customer_choose_dishes");
        customer_choose_dishes->resize(800, 600);
        centralwidget = new QWidget(customer_choose_dishes);
        centralwidget->setObjectName("centralwidget");
        customer_choose_dishes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer_choose_dishes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        customer_choose_dishes->setMenuBar(menubar);
        statusbar = new QStatusBar(customer_choose_dishes);
        statusbar->setObjectName("statusbar");
        customer_choose_dishes->setStatusBar(statusbar);

        retranslateUi(customer_choose_dishes);

        QMetaObject::connectSlotsByName(customer_choose_dishes);
    } // setupUi

    void retranslateUi(QMainWindow *customer_choose_dishes)
    {
        customer_choose_dishes->setWindowTitle(QCoreApplication::translate("customer_choose_dishes", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_choose_dishes: public Ui_customer_choose_dishes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_CHOOSE_DISHES_H
