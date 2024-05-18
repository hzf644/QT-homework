#include "customer_main.h"
#include "ui_customer_main.h"

customer_main::customer_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_main)
{
    ui->setupUi(this);
}

customer_main::~customer_main()
{
    delete ui;
}
