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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_restaurant_information
{
public:
    QWidget *centralwidget;
    QLabel *name;
    QLCDNumber *rank;
    QLabel *location;
    QLabel *label;
    QLabel *picture;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *component_restaurant_information)
    {
        if (component_restaurant_information->objectName().isEmpty())
            component_restaurant_information->setObjectName("component_restaurant_information");
        component_restaurant_information->resize(400, 300);
        centralwidget = new QWidget(component_restaurant_information);
        centralwidget->setObjectName("centralwidget");
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(10, 10, 101, 31));
        QFont font;
        font.setPointSize(16);
        name->setFont(font);
        rank = new QLCDNumber(centralwidget);
        rank->setObjectName("rank");
        rank->setGeometry(QRect(300, 10, 91, 41));
        location = new QLabel(centralwidget);
        location->setObjectName("location");
        location->setGeometry(QRect(10, 50, 231, 16));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(229, 21, 41, 21));
        label->setFont(font);
        picture = new QLabel(centralwidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(0, 70, 301, 191));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 220, 71, 31));
        pushButton->setFont(font);
        component_restaurant_information->setCentralWidget(centralwidget);
        menubar = new QMenuBar(component_restaurant_information);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
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
        name->setText(QCoreApplication::translate("component_restaurant_information", "\345\220\215\347\247\260", nullptr));
        location->setText(QCoreApplication::translate("component_restaurant_information", "\345\234\260\345\235\200", nullptr));
        label->setText(QCoreApplication::translate("component_restaurant_information", "\350\257\204\345\210\206:", nullptr));
        picture->setText(QCoreApplication::translate("component_restaurant_information", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("component_restaurant_information", "\350\277\233\345\205\245\345\272\227\351\223\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_restaurant_information: public Ui_component_restaurant_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_RESTAURANT_INFORMATION_H
