#include "component_order.h"
#include "ui_component_order.h"

component_order::component_order(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_order)
{
    ui->setupUi(this);
}

component_order::~component_order()
{
    delete ui;
}
