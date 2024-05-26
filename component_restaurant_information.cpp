#include "component_restaurant_information.h"
#include "ui_component_restaurant_information.h"

component_restaurant_information::component_restaurant_information(QString name, QString location, QString picture_file_path, double rank,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_restaurant_information)
{
    ui->setupUi(this);
}

component_restaurant_information::~component_restaurant_information()
{
    delete ui;
}
