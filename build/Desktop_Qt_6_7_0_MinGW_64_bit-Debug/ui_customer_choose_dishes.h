/********************************************************************************
** Form generated from reading UI file 'customer_choose_dishes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_CHOOSE_DISHES_H
#define UI_CUSTOMER_CHOOSE_DISHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_choose_dishes
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer_choose_dishes)
    {
        if (customer_choose_dishes->objectName().isEmpty())
            customer_choose_dishes->setObjectName("customer_choose_dishes");
        customer_choose_dishes->resize(450, 800);
        centralwidget = new QWidget(customer_choose_dishes);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 400, 800));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 798));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 680, 51, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font.setPointSize(21);
        font.setItalic(true);
        pushButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 610, 51, 61));
        customer_choose_dishes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer_choose_dishes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 17));
        customer_choose_dishes->setMenuBar(menubar);
        statusbar = new QStatusBar(customer_choose_dishes);
        statusbar->setObjectName("statusbar");
        customer_choose_dishes->setStatusBar(statusbar);

        retranslateUi(customer_choose_dishes);

        QMetaObject::connectSlotsByName(customer_choose_dishes);
    } // setupUi

    void retranslateUi(QMainWindow *customer_choose_dishes)
    {
        customer_choose_dishes->setWindowTitle(QCoreApplication::translate("customer_choose_dishes", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("customer_choose_dishes", "\344\273\230\346\254\276", nullptr));
        label->setText(QCoreApplication::translate("customer_choose_dishes", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_choose_dishes: public Ui_customer_choose_dishes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_CHOOSE_DISHES_H
