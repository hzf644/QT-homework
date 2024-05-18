#include "restaurant_distribute_orders.h"
#include "ui_restaurant_distribute_orders.h"

restaurant_distribute_orders::restaurant_distribute_orders(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_distribute_orders)
{
    ui->setupUi(this);
}

restaurant_distribute_orders::~restaurant_distribute_orders()
{
    delete ui;
}
