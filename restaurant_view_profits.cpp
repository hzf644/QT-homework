#include "restaurant_view_profits.h"
#include "ui_restaurant_view_profits.h"

restaurant_view_profits::restaurant_view_profits(double profit, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_view_profits)
{
    ui->setupUi(this);
    ui->lcdNumber->display(profit);
}

restaurant_view_profits::~restaurant_view_profits()
{
    delete ui;
}
