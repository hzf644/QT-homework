/********************************************************************************
** Form generated from reading UI file 'restaurant_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANT_MAIN_H
#define UI_RESTAURANT_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurant_main
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *restaurant_main)
    {
        if (restaurant_main->objectName().isEmpty())
            restaurant_main->setObjectName("restaurant_main");
        restaurant_main->resize(800, 600);
        centralwidget = new QWidget(restaurant_main);
        centralwidget->setObjectName("centralwidget");
        restaurant_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(restaurant_main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        restaurant_main->setMenuBar(menubar);
        statusbar = new QStatusBar(restaurant_main);
        statusbar->setObjectName("statusbar");
        restaurant_main->setStatusBar(statusbar);

        retranslateUi(restaurant_main);

        QMetaObject::connectSlotsByName(restaurant_main);
    } // setupUi

    void retranslateUi(QMainWindow *restaurant_main)
    {
        restaurant_main->setWindowTitle(QCoreApplication::translate("restaurant_main", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurant_main: public Ui_restaurant_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANT_MAIN_H
