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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_up
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sign_up)
    {
        if (sign_up->objectName().isEmpty())
            sign_up->setObjectName("sign_up");
        sign_up->resize(800, 600);
        centralwidget = new QWidget(sign_up);
        centralwidget->setObjectName("centralwidget");
        sign_up->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sign_up);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
    } // retranslateUi

};

namespace Ui {
    class sign_up: public Ui_sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
