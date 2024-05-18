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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_order
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *component_order)
    {
        if (component_order->objectName().isEmpty())
            component_order->setObjectName("component_order");
        component_order->resize(800, 600);
        centralwidget = new QWidget(component_order);
        centralwidget->setObjectName("centralwidget");
        component_order->setCentralWidget(centralwidget);
        menubar = new QMenuBar(component_order);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        component_order->setMenuBar(menubar);
        statusbar = new QStatusBar(component_order);
        statusbar->setObjectName("statusbar");
        component_order->setStatusBar(statusbar);

        retranslateUi(component_order);

        QMetaObject::connectSlotsByName(component_order);
    } // setupUi

    void retranslateUi(QMainWindow *component_order)
    {
        component_order->setWindowTitle(QCoreApplication::translate("component_order", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_order: public Ui_component_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_ORDER_H
