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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_dish
{
public:
    QWidget *centralwidget;
    QLabel *name;
    QLabel *label;
    QLCDNumber *price;
    QLabel *label_2;
    QLabel *pricture;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *component_dish)
    {
        if (component_dish->objectName().isEmpty())
            component_dish->setObjectName("component_dish");
        component_dish->resize(400, 300);
        centralwidget = new QWidget(component_dish);
        centralwidget->setObjectName("centralwidget");
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 0, 191, 41));
        QFont font;
        font.setPointSize(12);
        name->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 0, 41, 41));
        label->setFont(font);
        price = new QLCDNumber(centralwidget);
        price->setObjectName("price");
        price->setGeometry(QRect(250, 10, 81, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 0, 41, 41));
        label_2->setFont(font);
        pricture = new QLabel(centralwidget);
        pricture->setObjectName("pricture");
        pricture->setGeometry(QRect(0, 50, 331, 231));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 300, 61, 31));
        pushButton->setFont(font);
        component_dish->setCentralWidget(centralwidget);
        menubar = new QMenuBar(component_dish);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
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
        name->setText(QCoreApplication::translate("component_dish", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("component_dish", "\344\273\267\346\240\274\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("component_dish", "\345\205\203", nullptr));
        pricture->setText(QCoreApplication::translate("component_dish", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("component_dish", "\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_dish: public Ui_component_dish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_DISH_H
