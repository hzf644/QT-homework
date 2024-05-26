/********************************************************************************
** Form generated from reading UI file 'customer_rank.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_RANK_H
#define UI_CUSTOMER_RANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_rank
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer_rank)
    {
        if (customer_rank->objectName().isEmpty())
            customer_rank->setObjectName("customer_rank");
        customer_rank->resize(280, 200);
        QFont font;
        font.setPointSize(12);
        customer_rank->setFont(font);
        centralwidget = new QWidget(customer_rank);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 10, 41, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 91, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 80, 181, 81));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 120, 51, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font1.setPointSize(16);
        pushButton->setFont(font1);
        customer_rank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer_rank);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 280, 21));
        customer_rank->setMenuBar(menubar);
        statusbar = new QStatusBar(customer_rank);
        statusbar->setObjectName("statusbar");
        customer_rank->setStatusBar(statusbar);

        retranslateUi(customer_rank);

        QMetaObject::connectSlotsByName(customer_rank);
    } // setupUi

    void retranslateUi(QMainWindow *customer_rank)
    {
        customer_rank->setWindowTitle(QCoreApplication::translate("customer_rank", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("customer_rank", "\350\257\267\344\270\272\345\225\206\345\256\266\346\211\223\345\210\206\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("customer_rank", "\350\257\267\350\276\223\345\205\245\350\257\204\344\273\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("customer_rank", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_rank: public Ui_customer_rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_RANK_H
