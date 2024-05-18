#include "customer_rank.h"
#include "ui_customer_rank.h"

customer_rank::customer_rank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customer_rank)
{
    ui->setupUi(this);
}

customer_rank::~customer_rank()
{
    delete ui;
}
