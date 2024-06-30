#include "delivery_main.h"
#include "ui_delivery_main.h"
#include "server.h"
#include "component_order.h"
#include<QVBoxLayout>
#include<vector>

delivery_main::delivery_main(QString qwer, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::delivery_main)
{
    deliveryid = qwer;
    ui->setupUi(this);
    this->setFixedSize(450, 900);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->centralwidget->setFixedSize(450, 900);
    ui->scrollArea->setFixedSize(450, 900);
    ui->scrollAreaWidgetContents->setFixedSize(400, 900);
    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);
    server* getinfo = new server();
    vector<QString> all_order_id = getinfo->getAll("orderr");
    for(auto p = all_order_id.begin(); p != all_order_id.end();p++){
        QString id = *p;
        QString startlocation = getinfo->getStartLocation("id", id);
        QString destination = getinfo->getDestination("id", id);
        QString delivery_man_id = getinfo->getDeliveryManID_order("id", id);
        bool is = getinfo->is_taken("id", id);
        bool is_finished = getinfo->is_finished("id", id);
        component_order* order_information = new component_order(id,startlocation, destination, is, delivery_man_id);
        order_information->setAttribute(Qt::WA_DeleteOnClose);

        connect(order_information, &component_order::change, [=](bool is_take){
            order_information->change_status(is_take);
            this->repaint();
        });
        if((delivery_man_id==""||delivery_man_id==deliveryid)&&!is_finished)layout->addWidget(order_information);
    }
    ui->scrollAreaWidgetContents->setLayout(layout);
    delete getinfo;
}

delivery_main::~delivery_main()
{
    delete ui;
}

void delivery_main::closeEvent(QCloseEvent *)
{
    emit subClose();
}
