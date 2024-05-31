#include "component_order.h"
#include "ui_component_order.h"
#include "server.h"
#include<QVBoxLayout>
#include<vector>

component_order::component_order(QString id, QString restaurant, QString startlocation, QString destination, double profits,QWidget *parent = nullptr)
    : QMainWindow(parent)
    , ui(new Ui::component_order)
{
    ui->setupUi(this);
    ui->order_id->setText(id);
    ui->restaurant_loc->setText(startlocation);
    ui->customer_loc->setText(destination);
    restaurant_id = restaurant;
    order_profits = profits;
}

component_order::~component_order()
{
    delete ui;
}

void component_order::on_have_finished_clicked()
{
    server* getinfo = new server();
    double old_profits = getinfo->getProfits_restaurant("id", restaurant_id);
    double new_profits = old_profits + order_profits;
    getinfo->editProfits_restaurant("id", restaurant_id, new_profits);
    delete getinfo;
    close();
}

