/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QWidget *centralwidget;
    QPushButton *login;
    QPushButton *signup;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLineEdit *password;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_3;

    void setupUi(QMainWindow *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName("log_in");
        log_in->resize(368, 270);
        centralwidget = new QWidget(log_in);
        centralwidget->setObjectName("centralwidget");
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(60, 220, 93, 28));
        signup = new QPushButton(centralwidget);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(210, 220, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 31, 19));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 70, 31, 19));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(150, 30, 113, 25));
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(150, 70, 113, 25));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(150, 120, 111, 21));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(150, 150, 73, 18));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(150, 180, 73, 18));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 120, 40, 12));
        log_in->setCentralWidget(centralwidget);

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QMainWindow *log_in)
    {
        log_in->setWindowTitle(QCoreApplication::translate("log_in", "log_in", nullptr));
        login->setText(QCoreApplication::translate("log_in", "\347\231\273\345\275\225", nullptr));
        signup->setText(QCoreApplication::translate("log_in", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("log_in", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("log_in", "\345\257\206\347\240\201\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("log_in", "\351\241\276\345\256\242", nullptr));
        radioButton_2->setText(QCoreApplication::translate("log_in", "\345\225\206\345\256\266", nullptr));
        radioButton_3->setText(QCoreApplication::translate("log_in", "\351\252\221\346\211\213", nullptr));
        label_3->setText(QCoreApplication::translate("log_in", "\346\202\250\346\230\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
