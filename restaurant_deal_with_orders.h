#ifndef RESTAURANT_DEAL_WITH_ORDERS_H
#define RESTAURANT_DEAL_WITH_ORDERS_H

#include <QMainWindow>

namespace Ui {
class restaurant_deal_with_orders;
}

class restaurant_deal_with_orders : public QMainWindow
{
    Q_OBJECT

public:
    explicit restaurant_deal_with_orders(QWidget *parent = nullptr);
    ~restaurant_deal_with_orders();

private:
    Ui::restaurant_deal_with_orders *ui;
};

#endif // RESTAURANT_DEAL_WITH_ORDERS_H
