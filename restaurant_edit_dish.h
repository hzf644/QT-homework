#ifndef RESTAURANT_EDIT_DISH_H
#define RESTAURANT_EDIT_DISH_H

#include <QMainWindow>

namespace Ui {
class restaurant_edit_dish;
}

class restaurant_edit_dish : public QMainWindow
{
    Q_OBJECT

public:
    explicit restaurant_edit_dish(QWidget *parent = nullptr);
    ~restaurant_edit_dish();

private:
    Ui::restaurant_edit_dish *ui;
};

#endif // RESTAURANT_EDIT_DISH_H
