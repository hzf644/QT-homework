#include "restaurant_deal_with_orders.h"
#include "ui_restaurant_deal_with_orders.h"

restaurant_deal_with_orders::restaurant_deal_with_orders(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_deal_with_orders)
{
    ui->setupUi(this);
}

restaurant_deal_with_orders::~restaurant_deal_with_orders()
{
    delete ui;
}
