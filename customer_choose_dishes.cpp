#include "customer_choose_dishes.h"
#include "ui_customer_choose_dishes.h"

customer_choose_dishes::customer_choose_dishes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_choose_dishes)
{
    ui->setupUi(this);
}

customer_choose_dishes::~customer_choose_dishes()
{
    delete ui;
}
