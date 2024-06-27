/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_up
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *id;
    QLineEdit *location;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *picture;
    QLineEdit *name;
    QLineEdit *password;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *confirm;
    QPushButton *return_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QRadioButton *i_customer;
    QRadioButton *i_restaurant;
    QRadioButton *i_delivery;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sign_up)
    {
        if (sign_up->objectName().isEmpty())
            sign_up->setObjectName("sign_up");
        sign_up->resize(507, 388);
        centralwidget = new QWidget(sign_up);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 31, 19));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 80, 31, 19));
        id = new QLineEdit(centralwidget);
        id->setObjectName("id");
        id->setGeometry(QRect(170, 40, 113, 25));
        location = new QLineEdit(centralwidget);
        location->setObjectName("location");
        location->setGeometry(QRect(170, 200, 113, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 120, 121, 19));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 200, 31, 19));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 240, 111, 19));
        picture = new QLineEdit(centralwidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(170, 240, 113, 25));
        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(170, 120, 113, 25));
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(170, 80, 113, 25));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(320, 200, 111, 19));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(300, 240, 161, 19));
        confirm = new QPushButton(centralwidget);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(110, 290, 93, 28));
        return_2 = new QPushButton(centralwidget);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(270, 290, 93, 28));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 160, 301, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 0, 31, 19));
        i_customer = new QRadioButton(groupBox);
        i_customer->setObjectName("i_customer");
        i_customer->setGeometry(QRect(70, 0, 61, 23));
        i_restaurant = new QRadioButton(groupBox);
        i_restaurant->setObjectName("i_restaurant");
        i_restaurant->setGeometry(QRect(140, 0, 61, 23));
        i_delivery = new QRadioButton(groupBox);
        i_delivery->setObjectName("i_delivery");
        i_delivery->setGeometry(QRect(210, 0, 61, 23));
        sign_up->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sign_up);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 507, 25));
        sign_up->setMenuBar(menubar);
        statusbar = new QStatusBar(sign_up);
        statusbar->setObjectName("statusbar");
        sign_up->setStatusBar(statusbar);

        retranslateUi(sign_up);

        QMetaObject::connectSlotsByName(sign_up);
    } // setupUi

    void retranslateUi(QMainWindow *sign_up)
    {
        sign_up->setWindowTitle(QCoreApplication::translate("sign_up", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("sign_up", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("sign_up", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("sign_up", "\345\247\223\345\220\215(\346\210\226\345\272\227\351\223\272\345\220\215\347\247\260)", nullptr));
        label_4->setText(QCoreApplication::translate("sign_up", "\345\234\260\345\235\200", nullptr));
        label_5->setText(QCoreApplication::translate("sign_up", "\345\233\276\347\211\207\347\232\204\346\226\207\344\273\266\350\267\257\345\276\204", nullptr));
        label_7->setText(QCoreApplication::translate("sign_up", "\357\274\210\351\252\221\346\211\213\344\270\215\351\241\273\345\241\253\345\206\231\357\274\211", nullptr));
        label_8->setText(QCoreApplication::translate("sign_up", "\357\274\210\351\241\276\345\256\242\345\222\214\351\252\221\346\211\213\344\270\215\351\241\273\345\241\253\345\206\231\357\274\211", nullptr));
        confirm->setText(QCoreApplication::translate("sign_up", "\347\241\256\350\256\244", nullptr));
        return_2->setText(QCoreApplication::translate("sign_up", "\350\277\224\345\233\236", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("sign_up", "\350\272\253\344\273\275", nullptr));
        i_customer->setText(QCoreApplication::translate("sign_up", "\351\241\276\345\256\242", nullptr));
        i_restaurant->setText(QCoreApplication::translate("sign_up", "\345\225\206\345\256\266", nullptr));
        i_delivery->setText(QCoreApplication::translate("sign_up", "\351\252\221\346\211\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_up: public Ui_sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
