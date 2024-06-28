#include "restaurant_main.h"
#include "ui_restaurant_main.h"
#include "server.h"
#include <QVBoxLayout>
#include "component_dish_for_restaurant.h"
#include "restaurant_edit_dish.h"
#include "restaurant_view_profits.h"
#include <vector>

restaurant_main::restaurant_main(QString restaurant_ID, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_main)
{
    ui->setupUi(this);
    this->setFixedSize(450, 900);
    ui->centralwidget->setFixedSize(450, 900);
    ui->scrollArea->setFixedSize(450, 900);
    ui->scrollAreaWidgetContents->setFixedSize(400, 900);
    this->setAttribute(Qt::WA_DeleteOnClose);

    server* getinfo = new server();
    vector<QString>dish_id = getinfo->getPart("restaurant_id", restaurant_ID, "dish");

    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);

    for(auto p = dish_id.begin();p != dish_id.end();++p){
        QString id = *p;
        QString name = getinfo->getName_dish("id", id);
        QString picture_file_path = getinfo->getPicture_dish("id", id);
        double price = getinfo->getPrice_dish("id", id);
        component_dish_for_restaurant* dish = new component_dish_for_restaurant(name, picture_file_path, price);
        connect(dish, &component_dish_for_restaurant::edited, [&](){
            restaurant_edit_dish * editor = new restaurant_edit_dish(id);
            editor->setAttribute(Qt::WA_DeleteOnClose);
            editor->show();
        });
        connect(dish, &component_dish_for_restaurant::deleted, [&](){
            getinfo->deleteDish("id", id);
            this->repaint();
        });
    }

    delete getinfo;
}

restaurant_main::~restaurant_main()
{
    delete ui;
}
