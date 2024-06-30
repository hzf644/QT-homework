#ifndef COMPONENT_DISH_FOR_RESTAURANT_H
#define COMPONENT_DISH_FOR_RESTAURANT_H

#include <QWidget>

namespace Ui {
class component_dish_for_restaurant;
}

class component_dish_for_restaurant : public QWidget
{
    Q_OBJECT

public:
    explicit component_dish_for_restaurant(QString name, QString pciture_file_path, double price, QWidget *parent = nullptr);
    ~component_dish_for_restaurant();

signals:
    void edited();
    void deleted();

private:
    Ui::component_dish_for_restaurant *ui;
};

#endif // COMPONENT_DISH_FOR_RESTAURANT_H
