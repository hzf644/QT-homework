#include "component_dish_for_restaurant.h"
#include "ui_component_dish_for_restaurant.h"

component_dish_for_restaurant::component_dish_for_restaurant(QString name, QString pciture_file_path, double price, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::component_dish_for_restaurant)
{
    ui->setupUi(this);
    ui->name->setText(name);
    ui->price->display(price);
    QPixmap p = QPixmap(pciture_file_path);
    QPixmap q = p.scaled(ui->picture->size(), Qt::KeepAspectRatio);
    ui->picture->setPixmap(q);
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
