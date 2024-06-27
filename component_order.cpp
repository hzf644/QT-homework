#include "component_order.h"
#include "ui_component_order.h"
#include "server.h"
#include<QVBoxLayout>
#include<vector>

component_order::component_order(QString id, QString restaurant, QString start_location, QString destination, double profits, QString delivery_man_name, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_order)
{
    ui->setupUi(this);
    ui->order_id->setText(id);
    ui->restaurant_loc->setText(start_location);
    ui->customer_loc->setText(destination);
    restaurant_name = restaurant;
    order_profits = profits;
}

component_order::~component_order()
{
    delete ui;
}

void component_order::on_have_finished_clicked()
{
    server* getinfo = new server();
    getinfo->editProfits_restaurant("name", restaurant_name, order_profits);
    delete getinfo;
    close();
}

