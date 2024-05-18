#include "component_dish.h"
#include "ui_component_dish.h"

component_dish::component_dish(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_dish)
{
    ui->setupUi(this);
}

component_dish::~component_dish()
{
    delete ui;
}
