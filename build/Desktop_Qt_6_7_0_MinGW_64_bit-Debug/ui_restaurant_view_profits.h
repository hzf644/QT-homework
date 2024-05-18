/********************************************************************************
** Form generated from reading UI file 'restaurant_view_profits.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANT_VIEW_PROFITS_H
#define UI_RESTAURANT_VIEW_PROFITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurant_view_profits
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *restaurant_view_profits)
    {
        if (restaurant_view_profits->objectName().isEmpty())
            restaurant_view_profits->setObjectName("restaurant_view_profits");
        restaurant_view_profits->resize(800, 600);
        centralwidget = new QWidget(restaurant_view_profits);
        centralwidget->setObjectName("centralwidget");
        restaurant_view_profits->setCentralWidget(centralwidget);
        menubar = new QMenuBar(restaurant_view_profits);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        restaurant_view_profits->setMenuBar(menubar);
        statusbar = new QStatusBar(restaurant_view_profits);
        statusbar->setObjectName("statusbar");
        restaurant_view_profits->setStatusBar(statusbar);

        retranslateUi(restaurant_view_profits);

        QMetaObject::connectSlotsByName(restaurant_view_profits);
    } // setupUi

    void retranslateUi(QMainWindow *restaurant_view_profits)
    {
        restaurant_view_profits->setWindowTitle(QCoreApplication::translate("restaurant_view_profits", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurant_view_profits: public Ui_restaurant_view_profits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANT_VIEW_PROFITS_H
