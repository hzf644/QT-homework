/********************************************************************************
** Form generated from reading UI file 'component_order.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_ORDER_H
#define UI_COMPONENT_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_order
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *restaurant_loc;
    QLabel *customer_loc;
    QLabel *label_3;
    QLabel *order_id;
    QPushButton *have_finished;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *component_order)
    {
        if (component_order->objectName().isEmpty())
            component_order->setObjectName("component_order");
        component_order->resize(528, 235);
        centralwidget = new QWidget(component_order);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 69, 19));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 130, 69, 19));
        restaurant_loc = new QLabel(centralwidget);
        restaurant_loc->setObjectName("restaurant_loc");
        restaurant_loc->setGeometry(QRect(180, 90, 261, 19));
        customer_loc = new QLabel(centralwidget);
        customer_loc->setObjectName("customer_loc");
        customer_loc->setGeometry(QRect(180, 130, 261, 19));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 50, 69, 19));
        order_id = new QLabel(centralwidget);
        order_id->setObjectName("order_id");
        order_id->setGeometry(QRect(180, 50, 261, 19));
        have_finished = new QPushButton(centralwidget);
        have_finished->setObjectName("have_finished");
        have_finished->setGeometry(QRect(220, 170, 93, 28));
        component_order->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(component_order);
        statusbar->setObjectName("statusbar");
        component_order->setStatusBar(statusbar);

        retranslateUi(component_order);

        QMetaObject::connectSlotsByName(component_order);
    } // setupUi

    void retranslateUi(QMainWindow *component_order)
    {
        component_order->setWindowTitle(QCoreApplication::translate("component_order", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("component_order", "\345\225\206\345\256\266\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("component_order", "\351\241\276\345\256\242\345\234\260\345\235\200", nullptr));
        restaurant_loc->setText(QCoreApplication::translate("component_order", "\346\232\202\346\227\240", nullptr));
        customer_loc->setText(QCoreApplication::translate("component_order", "\346\232\202\346\227\240", nullptr));
        label_3->setText(QCoreApplication::translate("component_order", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        order_id->setText(QCoreApplication::translate("component_order", "\346\232\202\346\227\240", nullptr));
        have_finished->setText(QCoreApplication::translate("component_order", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_order: public Ui_component_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_ORDER_H
