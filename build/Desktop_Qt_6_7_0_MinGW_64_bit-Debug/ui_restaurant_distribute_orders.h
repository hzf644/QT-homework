/********************************************************************************
** Form generated from reading UI file 'restaurant_distribute_orders.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANT_DISTRIBUTE_ORDERS_H
#define UI_RESTAURANT_DISTRIBUTE_ORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurant_distribute_orders
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *restaurant_distribute_orders)
    {
        if (restaurant_distribute_orders->objectName().isEmpty())
            restaurant_distribute_orders->setObjectName("restaurant_distribute_orders");
        restaurant_distribute_orders->resize(800, 600);
        centralwidget = new QWidget(restaurant_distribute_orders);
        centralwidget->setObjectName("centralwidget");
        restaurant_distribute_orders->setCentralWidget(centralwidget);
        menubar = new QMenuBar(restaurant_distribute_orders);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        restaurant_distribute_orders->setMenuBar(menubar);
        statusbar = new QStatusBar(restaurant_distribute_orders);
        statusbar->setObjectName("statusbar");
        restaurant_distribute_orders->setStatusBar(statusbar);

        retranslateUi(restaurant_distribute_orders);

        QMetaObject::connectSlotsByName(restaurant_distribute_orders);
    } // setupUi

    void retranslateUi(QMainWindow *restaurant_distribute_orders)
    {
        restaurant_distribute_orders->setWindowTitle(QCoreApplication::translate("restaurant_distribute_orders", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurant_distribute_orders: public Ui_restaurant_distribute_orders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANT_DISTRIBUTE_ORDERS_H
