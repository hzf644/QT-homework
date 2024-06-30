#include "log_in.h"
#include "ui_log_in.h"
#include "server.h"
#include "customer_main.h"
#include "restaurant_main.h"
#include "delivery_main.h"
#include "sign_up.h"
#include <QMessageBox>
#include<QButtonGroup>
#include<vector>

log_in::log_in(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::log_in)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    setWindowTitle("登录界面");
    bg->addButton(ui->radioButton);
    bg->addButton(ui->radioButton_2);
    bg->addButton(ui->radioButton_3);
}

log_in::~log_in()
{
    delete ui;
}

void log_in::on_login_clicked()
{
    server* getinfo_c = new server();
    server* getinfo_r = new server();
    server* getinfo_d = new server();
    vector<QString> all_customer_id = getinfo_c->getAll("customer");
    vector<QString> all_restaurant_id = getinfo_r->getAll("restaurant");
    vector<QString> all_deliveryman_id = getinfo_d->getAll("delivery");
    int t = 0;
    t = bg->checkedId();
    t = -2-t;
    if(t==0){
            if(getinfo_c->exists(ui->username->text(), "customer")){
                if(getinfo_c->match(ui->username->text(), ui->password->text(), "customer")){
                    customer_main *ptrcustomer = new customer_main(ui->username->text());
                    ptrcustomer->show();
                    this->hide();
                    connect(ptrcustomer, &customer_main::subClose, this, &log_in::show);
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
            }
            else{
                QMessageBox::warning(this,"登录失败","用户名不存在！",QMessageBox::Ok);
            }
    }
    else if(t==1){
            if(getinfo_r->exists(ui->username->text(), "restaurant")){
                if(getinfo_r->match(ui->username->text(), ui->password->text(), "restaurant")){
                    restaurant_main *ptrrestaurant = new restaurant_main(ui->username->text());
                    ptrrestaurant->show();
                    this->hide();
                    connect(ptrrestaurant, &restaurant_main::subClose, this, &log_in::show);
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
            }
            else{
                QMessageBox::warning(this,"登录失败","用户名不存在！",QMessageBox::Ok);
            }
    }
    else if(t==2){
            if(getinfo_d->exists(ui->username->text(), "delivery")){
                if(getinfo_d->match(ui->username->text(), ui->password->text(), "delivery")){
                    delivery_main *ptrdeliveryman = new delivery_main(ui->username->text());
                    ptrdeliveryman->show();
                    this->hide();
                    connect(ptrdeliveryman, &delivery_main::subClose, this, &log_in::show);
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
            }
            else{
                QMessageBox::warning(this,"登录失败","用户名不存在！",QMessageBox::Ok);
            }
    }

    delete getinfo_c;
    delete getinfo_r;
    delete getinfo_d;
}

void log_in::on_signup_clicked()
{
    sign_up *s = new sign_up;
    s->show();
}
