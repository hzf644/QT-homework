#ifndef COMPONENT_DISH_H
#define COMPONENT_DISH_H

#include <QMainWindow>

namespace Ui {
class component_dish;
}

class component_dish : public QMainWindow
{
    Q_OBJECT

public:
    explicit component_dish(QWidget *parent = nullptr);
    ~component_dish();

private:
    Ui::component_dish *ui;
};

#endif // COMPONENT_DISH_H
