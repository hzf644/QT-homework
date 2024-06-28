#include "component_order.h"
#include "ui_component_order.h"
#include "server.h"
#include<QVBoxLayout>
#include<vector>

component_order::component_order(QString id, QString start_location, QString destination, bool is_taken, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_order)
{
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

void component_order::change_status()
{
    ui->have_finished->setText("完成");
    this->repaint();
}



