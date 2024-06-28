/********************************************************************************
** Form generated from reading UI file 'component_dish_for_restaurant.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_DISH_FOR_RESTAURANT_H
#define UI_COMPONENT_DISH_FOR_RESTAURANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_dish_for_restaurant
{
public:
    QLabel *label;

    void setupUi(QWidget *component_dish_for_restaurant)
    {
        if (component_dish_for_restaurant->objectName().isEmpty())
            component_dish_for_restaurant->setObjectName("component_dish_for_restaurant");
        component_dish_for_restaurant->resize(400, 300);
        label = new QLabel(component_dish_for_restaurant);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 81, 41));

        retranslateUi(component_dish_for_restaurant);

        QMetaObject::connectSlotsByName(component_dish_for_restaurant);
    } // setupUi

    void retranslateUi(QWidget *component_dish_for_restaurant)
    {
        component_dish_for_restaurant->setWindowTitle(QCoreApplication::translate("component_dish_for_restaurant", "Form", nullptr));
        label->setText(QCoreApplication::translate("component_dish_for_restaurant", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component_dish_for_restaurant: public Ui_component_dish_for_restaurant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_DISH_FOR_RESTAURANT_H
