#include "customer_choose_dishes.h"
#include "ui_customer_choose_dishes.h"
#include"server.h"
#include "component_dish.h"
#include"customer_rank.h"
#include<QVBoxLayout>
#include<QMessageBox>
#include<vector>

customer_choose_dishes::customer_choose_dishes(QString name,  QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_choose_dishes)
{
    ui->setupUi(this);
    this->setFixedSize(450, 900);
    ui->centralwidget->setFixedSize(450, 900);
    ui->scrollArea->setFixedSize(450, 800);
    ui->scrollAreaWidgetContents->setFixedSize(400, 800);


    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);
    server* getinfo = new server();


    vector<QString>dishesID = getinfo->getPart("restaurant_name", name, "dish");
    for(auto p = dishesID.begin();p != dishesID.end(); p++){
        QString dish_id = *p;
        QString dish_name = getinfo->getName_dish("id", dish_id);
        QString dish_picture = getinfo->getPicture_dish("id", dish_id);
        double price = getinfo->getPrice_dish("id", dish_id);
        component_dish* dish = new component_dish(dish_name, dish_picture, price);
        connect(dish, &component_dish::ordered, this, &customer_choose_dishes::addAmount);
        layout->addWidget(dish);
    }

    connect(ui->pushButton, &QPushButton::clicked, [&](){
        QMessageBox ms;
        ms.setText("确认付款");
        ms.setAttribute(Qt::WA_DeleteOnClose);
        ms.setStandardButtons(QMessageBox::Ok);
        ms.setIcon(QMessageBox::Information);
        connect(&ms, &QMessageBox::buttonClicked, [&](){
            emit enter();
        });
        ms.show();
    });

    connect(this, &customer_choose_dishes::enter, [&](){
        customer_rank* rank = new customer_rank(name);
        this->hide();
        connect(rank, &customer_rank::subClose, this, &QMainWindow::close);
        rank->setAttribute(Qt::WA_DeleteOnClose);
        rank->show();
    });

    ui->scrollAreaWidgetContents->setLayout(layout);


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
}

void customer_choose_dishes::closeEvent(QCloseEvent *){
    emit subClose();
}
