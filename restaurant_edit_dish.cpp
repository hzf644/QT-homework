#include "restaurant_edit_dish.h"
#include "ui_restaurant_edit_dish.h"

restaurant_edit_dish::restaurant_edit_dish(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_edit_dish)
{
    ui->setupUi(this);
}

restaurant_edit_dish::~restaurant_edit_dish()
{
    delete ui;
}
