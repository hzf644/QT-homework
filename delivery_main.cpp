#include "delivery_main.h"
#include "ui_delivery_main.h"

delivery_main::delivery_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::delivery_main)
{
    ui->setupUi(this);
}

delivery_main::~delivery_main()
{
    delete ui;
}
