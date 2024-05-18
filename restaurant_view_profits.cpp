#include "restaurant_view_profits.h"
#include "ui_restaurant_view_profits.h"

restaurant_view_profits::restaurant_view_profits(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_view_profits)
{
    ui->setupUi(this);
}

restaurant_view_profits::~restaurant_view_profits()
{
    delete ui;
}
