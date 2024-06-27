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
    vector<QString> all_customer_id = getinfo_c->getAll("costomer");
    vector<QString> all_restaurant_id = getinfo_r->getAll("restaurant");
    vector<QString> all_deliveryman_id = getinfo_d->getAll("deliveryman");
    int t = 0;
    t = bg->checkedId();
    if(t==0)
    for(auto p = all_customer_id.begin(); p != all_customer_id.end();p++){
            if(getinfo_c->exists(ui->username->text(), "customer")){
            if(getinfo_c->match(ui->username->text(), ui->password->text(), "customer")){
                customer_main *ptrcustomer = new customer_main(this);
                ptrcustomer->show();
            }
            else{
                QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
            }
            break;
        }
    }
    if(t==1){
        for(auto p = all_restaurant_id.begin(); p != all_restaurant_id.end();p++){
            if(getinfo_r->exists(ui->username->text(), "restaurant")){
                if(getinfo_r->match(ui->username->text(), ui->password->text(), "restaurant")){
                    restaurant_main *ptrrestaurant = new restaurant_main(this);
                    ptrrestaurant->show();
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
                break;
            }
        }
    }
    if(t==2){
        for(auto p = all_deliveryman_id.begin(); p != all_deliveryman_id.end();p++){
            if(getinfo_d->exists(ui->username->text(), "deliveryman")){
                if(getinfo_d->match(ui->username->text(), ui->password->text(), "deliveryman")){
                    delivery_main *ptrdeliveryman = new delivery_main(this);
                    ptrdeliveryman->show();
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
                break;
            }
        }
    }
    if(t==-1){
        QMessageBox::warning(this,"登录失败","用户名不存在！",QMessageBox::Ok);
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
