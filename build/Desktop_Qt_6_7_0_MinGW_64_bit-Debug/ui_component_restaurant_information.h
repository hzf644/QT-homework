/********************************************************************************
** Form generated from reading UI file 'component_restaurant_information.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_RESTAURANT_INFORMATION_H
#define UI_COMPONENT_RESTAURANT_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_restaurant_information
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *component_restaurant_information)
    {
        if (component_restaurant_information->objectName().isEmpty())
            component_restaurant_information->setObjectName("component_restaurant_information");
        component_restaurant_information->resize(800, 600);
        centralwidget = new QWidget(component_restaurant_information);
        centralwidget->setObjectName("centralwidget");
        component_restaurant_information->setCentralWidget(centralwidget);
        menubar = new QMenuBar(component_restaurant_information);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        component_restaurant_information->setMenuBar(menubar);
        statusbar = new QStatusBar(component_restaurant_information);
        statusbar->setObjectName("statusbar");
        component_restaurant_information->setStatusBar(statusbar);

        retranslateUi(component_restaurant_information);

        QMetaObject::connectSlotsByName(component_restaurant_information);
    } // setupUi

    void retranslateUi(QMainWindow *component_restaurant_information)
    {
        component_restaurant_information->setWindowTitle(QCoreApplication::translate("component_restaurant_information", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_restaurant_information: public Ui_component_restaurant_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_RESTAURANT_INFORMATION_H
