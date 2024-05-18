/********************************************************************************
** Form generated from reading UI file 'restaurant_edit_dish.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANT_EDIT_DISH_H
#define UI_RESTAURANT_EDIT_DISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurant_edit_dish
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *restaurant_edit_dish)
    {
        if (restaurant_edit_dish->objectName().isEmpty())
            restaurant_edit_dish->setObjectName("restaurant_edit_dish");
        restaurant_edit_dish->resize(800, 600);
        centralwidget = new QWidget(restaurant_edit_dish);
        centralwidget->setObjectName("centralwidget");
        restaurant_edit_dish->setCentralWidget(centralwidget);
        menubar = new QMenuBar(restaurant_edit_dish);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        restaurant_edit_dish->setMenuBar(menubar);
        statusbar = new QStatusBar(restaurant_edit_dish);
        statusbar->setObjectName("statusbar");
        restaurant_edit_dish->setStatusBar(statusbar);

        retranslateUi(restaurant_edit_dish);

        QMetaObject::connectSlotsByName(restaurant_edit_dish);
    } // setupUi

    void retranslateUi(QMainWindow *restaurant_edit_dish)
    {
        restaurant_edit_dish->setWindowTitle(QCoreApplication::translate("restaurant_edit_dish", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurant_edit_dish: public Ui_restaurant_edit_dish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANT_EDIT_DISH_H
