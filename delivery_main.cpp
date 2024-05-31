#include "delivery_main.h"
#include "ui_delivery_main.h"
#include "server.h"
#include "component_order.h"
#include<QVBoxLayout>
#include<vector>

delivery_main::delivery_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::delivery_main)
{
    ui->setupUi(this);
    this->setFixedSize(450, 900);
    ui->centralwidget->setFixedSize(450, 900);
    ui->scrollArea->setFixedSize(450, 800);
    ui->scrollAreaWidgetContents->setFixedSize(400, 800);
    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);
    server* getinfo = new server();
    vector<QString> all_order_id = getinfo->getAll("order");
    for(auto p = all_order_id.begin(); p != all_order_id.end();p++){
        QString id = *p;
        QString startlocation = getinfo->getStartLocation("id", id);
        QString destination = getinfo->getDestination("id", id);
        component_order* order_information = new component_order(id, startlocation, destination);
        layout->addWidget(order_information);
    }
    ui->scrollAreaWidgetContents->setLayout(layout);
    delete getinfo;
}

delivery_main::~delivery_main()
{
    delete ui;
}
