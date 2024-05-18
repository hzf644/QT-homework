#ifndef RESTAURANT_DISTRIBUTE_ORDERS_H
#define RESTAURANT_DISTRIBUTE_ORDERS_H

#include <QMainWindow>

namespace Ui {
class restaurant_distribute_orders;
}

class restaurant_distribute_orders : public QMainWindow
{
    Q_OBJECT

public:
    explicit restaurant_distribute_orders(QWidget *parent = nullptr);
    ~restaurant_distribute_orders();

private:
    Ui::restaurant_distribute_orders *ui;
};

#endif // RESTAURANT_DISTRIBUTE_ORDERS_H
