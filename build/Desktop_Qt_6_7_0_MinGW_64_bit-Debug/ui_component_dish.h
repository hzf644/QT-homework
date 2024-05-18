/********************************************************************************
** Form generated from reading UI file 'component_dish.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_DISH_H
#define UI_COMPONENT_DISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_dish
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *component_dish)
    {
        if (component_dish->objectName().isEmpty())
            component_dish->setObjectName("component_dish");
        component_dish->resize(800, 600);
        centralwidget = new QWidget(component_dish);
        centralwidget->setObjectName("centralwidget");
        component_dish->setCentralWidget(centralwidget);
        menubar = new QMenuBar(component_dish);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        component_dish->setMenuBar(menubar);
        statusbar = new QStatusBar(component_dish);
        statusbar->setObjectName("statusbar");
        component_dish->setStatusBar(statusbar);

        retranslateUi(component_dish);

        QMetaObject::connectSlotsByName(component_dish);
    } // setupUi

    void retranslateUi(QMainWindow *component_dish)
    {
        component_dish->setWindowTitle(QCoreApplication::translate("component_dish", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_dish: public Ui_component_dish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_DISH_H
