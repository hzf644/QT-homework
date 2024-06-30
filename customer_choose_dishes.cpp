#include "customer_choose_dishes.h"
#include "ui_customer_choose_dishes.h"
#include "server.h"
#include "component_dish.h"
#include"customer_rank.h"
#include"customer_main.h"
#include<QVBoxLayout>
#include<QMessageBox>
#include<vector>

customer_choose_dishes::customer_choose_dishes(QString a, QString b,  QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_choose_dishes)
{
    ui->setupUi(this);
    userID = a;
    restaurant_id = b;

    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);
    server* getinfo = new server();

    vector<QString>dishesID = getinfo->getPart("restaurant_id", restaurant_id, "dish");
    for(auto p = dishesID.begin();p != dishesID.end(); p++){
        QString dish_id = *p;
        QString dish_name = getinfo->getName_dish("id", dish_id);
        QString dish_picture = getinfo->getPicture_dish("id", dish_id);
        double price = getinfo->getPrice_dish("id", dish_id);
        component_dish* dish = new component_dish(dish_name, dish_picture, price);
        dish->setAttribute(Qt::WA_DeleteOnClose);
        connect(dish, &component_dish::ordered, [=](){
            this->addAmount(price);
        });
        layout->addWidget(dish);
    }
    ui->scrollAreaWidgetContents->setLayout(layout);

    connect(ui->pushButton, &QPushButton::clicked, [=](){
        QString destination = getinfo->getLocation_customer("id", userID);
        QString startLocation = getinfo->getLocation_restaurant("id", restaurant_id);
        getinfo->addOrder(startLocation, restaurant_id, destination);
        getinfo->editProfits_restaurant("id", restaurant_id, amount);
        customer_rank* rank = new customer_rank(restaurant_id);
        this->hide();
        connect(rank, &customer_rank::subClose, this, &QMainWindow::close);
        rank->setAttribute(Qt::WA_DeleteOnClose);
        rank->show();
    });



    delete getinfo;
}

customer_choose_dishes::~customer_choose_dishes()
{
    delete ui;
}

void customer_choose_dishes::addAmount(double price)
{
    amount += price;
    this->ui->label->setNum(amount);
    this->repaint();
}

void customer_choose_dishes::closeEvent(QCloseEvent *){
    emit subClose();
}
