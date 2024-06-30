#include "component_order.h"
#include "ui_component_order.h"
#include "server.h"
#include<QVBoxLayout>
#include<vector>

component_order::component_order(QString a, QString n, QString c, bool d,QString f, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_order)
{
    id = a;
    start_location = n;
    destination = c;
    deliveryID = f;
    is_taken = d;
    ui->setupUi(this);
    ui->order_id->setText(id);
    ui->restaurant_loc->setText(start_location);
    ui->customer_loc->setText(destination);
    if(is_taken){
        ui->have_finished->setText("完成");
    }
    else{
        ui->have_finished->setText("接单");
    }
    connect(ui->have_finished, &QPushButton::clicked, [&](){
        emit change(is_taken);
    });
}

component_order::~component_order()
{
    delete ui;
}

void component_order::change_status(bool is_take)
{
    ui->have_finished->setText("完成");
    this->repaint();
    if(!is_taken){
        server* getinfo = new server();
        getinfo->taken("id", id);
        getinfo->addDeliveryID_order("id", id, deliveryID);
        delete getinfo;
    }
    else{
        server* getinfo = new server();
        getinfo->finished("id", id);
        delete getinfo;
    }
}



