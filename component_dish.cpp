#include "component_dish.h"
#include "ui_component_dish.h"

component_dish::component_dish(QString name, QString pciture_file_path, double price, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::component_dish)
{
    ui->setupUi(this);
    ui->name->setText(name);
    QPixmap p = QPixmap(pciture_file_path);
    QPixmap q = p.scaled(ui->pricture->size(), Qt::KeepAspectRatio);
    ui->pricture->setPixmap(q);
    ui->price->display(price);
    connect(ui->pushButton, &QPushButton::clicked, [&](){
        emit this->ordered();
    });
}

component_dish::~component_dish()
{
    delete ui;
}
