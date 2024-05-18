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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName("log_in");
        log_in->resize(800, 600);
        centralwidget = new QWidget(log_in);
        centralwidget->setObjectName("centralwidget");
        log_in->setCentralWidget(centralwidget);
        menubar = new QMenuBar(log_in);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        log_in->setMenuBar(menubar);
        statusbar = new QStatusBar(log_in);
        statusbar->setObjectName("statusbar");
        log_in->setStatusBar(statusbar);

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QMainWindow *log_in)
    {
        log_in->setWindowTitle(QCoreApplication::translate("log_in", "log_in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
