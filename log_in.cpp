#include "log_in.h"
#include "ui_log_in.h"
#include "server.h"
#include "customer_main.h"
#include "restaurant_main.h"
#include "delivery_main.h"
#include "sign_up.h"
#include <QMessageBox>
#include<vector>

log_in::log_in(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::log_in)
{
    ui->setupUi(this);
    setWindowTitle("登录界面");
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
    bool already_find = 0;
    for(auto p = all_customer_id.begin(); p != all_customer_id.end();p++){
        if(getinfo_c->exits(ui->id->text(), "customer")){
            if(getinfo_c->match(ui->id->text(), ui->password->text(), "customer")){
                customer_main *ptrcustomer = new customer_main(this);
                ptrcustomer->show();
            }
            else{
                QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
            }
            already_find = 1;
            break;
        }
    }
    if(!already_find){
        for(auto p = all_restaurant_id.begin(); p != all_restaurant_id.end();p++){
            if(getinfo_r->exits(ui->id->text(), "restaurant")){
                if(getinfo_r->match(ui->id->text(), ui->password->text(), "restaurant")){
                    restaurant_main *ptrrestaurant = new restaurant_main(this);
                    ptrrestaurant->show();
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
                already_find = 1;
                break;
            }
        }
    }
    if(!already_find){
        for(auto p = all_deliveryman_id.begin(); p != all_deliveryman_id.end();p++){
            if(getinfo_d->exits(ui->id->text(), "deliveryman")){
                if(getinfo_d->match(ui->id->text(), ui->password->text(), "deliveryman")){
                    delivery_main *ptrdeliveryman = new delivery_main(this);
                    ptrdeliveryman->show();
                }
                else{
                    QMessageBox::warning(this,"登录失败","用户名或密码输入错误！",QMessageBox::Ok);
                }
                already_find = 1;
                break;
            }
        }
    }
    if(!already_find){
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
