/********************************************************************************
** Form generated from reading UI file 'restaurant_deal_with_orders.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANT_DEAL_WITH_ORDERS_H
#define UI_RESTAURANT_DEAL_WITH_ORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurant_deal_with_orders
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *restaurant_deal_with_orders)
    {
        if (restaurant_deal_with_orders->objectName().isEmpty())
            restaurant_deal_with_orders->setObjectName("restaurant_deal_with_orders");
        restaurant_deal_with_orders->resize(800, 600);
        centralwidget = new QWidget(restaurant_deal_with_orders);
        centralwidget->setObjectName("centralwidget");
        restaurant_deal_with_orders->setCentralWidget(centralwidget);
        menubar = new QMenuBar(restaurant_deal_with_orders);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        restaurant_deal_with_orders->setMenuBar(menubar);
        statusbar = new QStatusBar(restaurant_deal_with_orders);
        statusbar->setObjectName("statusbar");
        restaurant_deal_with_orders->setStatusBar(statusbar);

        retranslateUi(restaurant_deal_with_orders);

        QMetaObject::connectSlotsByName(restaurant_deal_with_orders);
    } // setupUi

    void retranslateUi(QMainWindow *restaurant_deal_with_orders)
    {
        restaurant_deal_with_orders->setWindowTitle(QCoreApplication::translate("restaurant_deal_with_orders", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurant_deal_with_orders: public Ui_restaurant_deal_with_orders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANT_DEAL_WITH_ORDERS_H
