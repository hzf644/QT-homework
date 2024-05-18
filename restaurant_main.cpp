#include "restaurant_main.h"
#include "ui_restaurant_main.h"

restaurant_main::restaurant_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_main)
{
    ui->setupUi(this);
}

restaurant_main::~restaurant_main()
{
    delete ui;
}
