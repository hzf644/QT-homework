#include "customer_main.h"
#include "ui_customer_main.h"
#include "component_restaurant_information.h"
#include "customer_choose_dishes.h"
#include "server.h"
#include<QVBoxLayout>
#include<vector>


customer_main::customer_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_main)
{
    ui->setupUi(this);
    this->setFixedSize(450, 900);
    ui->centralwidget->setFixedSize(450, 900);
    ui->scrollArea->setFixedSize(450, 800);
    ui->scrollAreaWidgetContents->setFixedSize(400, 800);


    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);
    server* getinfo = new server();

    vector<QString> all_restaurant_id = getinfo->getAll("restaurant");
    for(auto p = all_restaurant_id.begin(); p != all_restaurant_id.end();p++){
        QString id = *p;
        QString name = getinfo->getName_restaurant("id", id);
        QString location = getinfo->getLocation_restaurant("id", id);
        double rank = getinfo->getRank_restaurant("id", id);
        QString picture_file_path = getinfo->getPicture_restaurant("id", id);
        component_restaurant_information* restaurant_information = new component_restaurant_information(name, location, picture_file_path, rank);
        connect(restaurant_information, &component_restaurant_information::enter, [&](QString name){
            customer_choose_dishes* choose = new customer_choose_dishes(userID, name, this);
            this->hide();
            connect(this, &customer_main::sendID, choose, [&](){
                choose->UserID = userID;
            });
            emit sendID();
            connect(choose,&customer_choose_dishes::subClose,this, &QMainWindow::show);
            choose->setAttribute(Qt::WA_DeleteOnClose);
            choose->show();
        });
        layout->addWidget(restaurant_information);
    }
    ui->scrollAreaWidgetContents->setLayout(layout);


    delete getinfo;
}

customer_main::~customer_main()
{
    delete ui;
}

void customer_main::setId(QString id)
{
    this->userID = id;
}
