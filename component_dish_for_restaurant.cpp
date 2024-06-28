#include "component_dish_for_restaurant.h"
#include "ui_component_dish_for_restaurant.h"

component_dish_for_restaurant::component_dish_for_restaurant(QString name, QString pciture_file_path, double price, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::component_dish_for_restaurant)
{
    ui->setupUi(this);
    ui->name->setText(name);
    ui->price->display(price);
    ui->picture->setPixmap(QPixmap(pciture_file_path));
    connect(ui->deletebutton, &QPushButton::clicked, [&](){
        emit deleted();
    });
    connect(ui->edit, &QPushButton::clicked, [&](){
        emit edited();
    });
}

component_dish_for_restaurant::~component_dish_for_restaurant()
{
    delete ui;
}
