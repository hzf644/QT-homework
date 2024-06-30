#include "restaurant_edit_dish.h"
#include "ui_restaurant_edit_dish.h"
#include"server.h"

restaurant_edit_dish::restaurant_edit_dish(QString a, bool b, QString c, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_edit_dish)
{
    dishID = a;
    mode = b;
    restaurant_id = c;
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    if(mode){
        connect(ui->pushButton, &QPushButton::clicked, [&](){
        server * getinfo = new server();

        if(!ui->name->text().isEmpty()){
            QString new_name = ui->name->text();
            getinfo->editName_dish("id", dishID, new_name);
        }
        if(!ui->picture->text().isEmpty()){
            QString new_picture = ui->picture->text();
            getinfo->editPicture_dish("id", dishID, new_picture);
        }
        if(!ui->price->text().isEmpty()){
            double new_price = ui->price->text().toDouble();
            getinfo->editPrice_dish("id", dishID, new_price);
        }

        delete getinfo;
        emit aaaaa();
        });
    }
    else{
        connect(ui->pushButton, &QPushButton::clicked, [&](){
            server * getinfo = new server();
            QString new_name = ui->name->text();
            QString new_picture = ui->picture->text();
            double new_price = ui->price->text().toDouble();
            getinfo->addDish(restaurant_id, new_name, new_picture, new_price);
            delete getinfo;
            emit aaaaa();
        });
    }
}

restaurant_edit_dish::~restaurant_edit_dish()
{
    delete ui;
}
