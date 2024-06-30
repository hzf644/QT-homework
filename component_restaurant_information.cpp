#include "component_restaurant_information.h"
#include "ui_component_restaurant_information.h"

component_restaurant_information::component_restaurant_information(QString name, QString location, QString picture_file_path, double rank,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_restaurant_information)
{
    ui->setupUi(this);
    ui->name->setText(name);
    ui->location->setText(location);
    ui->rank->display(rank);
    QPixmap p = QPixmap(picture_file_path);
    QPixmap q = p.scaled(ui->picture->size(), Qt::KeepAspectRatio);
    ui->picture->setPixmap(q);
    connect(ui->pushButton, &QPushButton::clicked, this, [&](){
        emit this->enter();
    });
}

component_restaurant_information::~component_restaurant_information()
{
    delete ui;
}
