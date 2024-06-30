#include "customer_rank.h"
#include "ui_customer_rank.h"
#include "server.h"
#include<QLineEdit>
#include<QRegularExpressionValidator>
#include<QPushButton>


customer_rank::customer_rank(QString a, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_rank)
{
    ui->setupUi(this);
    server* editinfo = new server();
    restaurant_name = a;

    connect(ui->pushButton, &QPushButton::clicked, this, &QMainWindow::close);

    connect(ui->lineEdit, &QLineEdit::returnPressed, [=](){
        double new_rank = ui->lineEdit->text().toDouble();
        editinfo->editRank_restaurant("id", restaurant_name, new_rank);
    });
    delete editinfo;
}

customer_rank::~customer_rank()
{
    delete ui;
}

void customer_rank::closeEvent(QCloseEvent *){
    emit subClose();
}
