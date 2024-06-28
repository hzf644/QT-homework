#include "sign_up.h"
#include "ui_sign_up.h"
#include "server.h"
#include <QMessageBox>
#include <vector>

sign_up::sign_up(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sign_up)
{
    ui->setupUi(this);
    setWindowTitle("注册界面");
}

sign_up::~sign_up()
{
    delete ui;
}

void sign_up::on_confirm_clicked()
{
    bool existed = 0;
    if((!ui->id->text().isEmpty())&&(!ui->password->text().isEmpty())&&(!ui->name->text().isEmpty())){
        if(ui->i_customer->isChecked()){
            if(!ui->location->text().isEmpty()){
                server* getinfo = new server();
                vector<QString> all_customer_id = getinfo->getAll("customer");
                for(auto p = all_customer_id.begin(); p != all_customer_id.end();p++){
                    if(getinfo->exists(ui->id->text(), "customer")){
                        QMessageBox::warning(this,"注册失败","该账号已存在！",QMessageBox::Ok);
                        existed = 1;
                        break;
                    }
                }
                if(!existed){
                    getinfo->addCustomer(ui->id->text(), ui->password->text(), ui->name->text(), ui->location->text());
                    QMessageBox::about(this,"注册成功","请前往登录！");
                    this->close();
                }
                delete getinfo;
            }
            else{
                QMessageBox::warning(this,"注册失败","请输入地址！",QMessageBox::Ok);
            }
        }
        else if(ui->i_restaurant->isChecked()){
            if((!ui->location->text().isEmpty())&&(!ui->picture->text().isEmpty())){
                server* getinfo = new server();
                vector<QString> all_restaurant_id = getinfo->getAll("restaurant");
                for(auto p = all_restaurant_id.begin(); p != all_restaurant_id.end();p++){
                    if(getinfo->exists(ui->id->text(), "restaurant")){
                        QMessageBox::warning(this,"注册失败","该账号已存在！",QMessageBox::Ok);
                        existed = 1;
                        break;
                    }
                }
                if(!existed){
                    getinfo->addRestaurant(ui->id->text(), ui->password->text(), ui->name->text(), ui->location->text(), ui->picture->text());
                    QMessageBox::about(this,"注册成功","请前往登录！");
                    this->close();
                }
                delete getinfo;
            }
            else if(!ui->location->text().isEmpty()){
                QMessageBox::warning(this,"注册失败","请输入地址！",QMessageBox::Ok);
            }
            else{
                QMessageBox::warning(this,"注册失败","请输入图片的文件地址！",QMessageBox::Ok);
            }
        }
        else{
            server* getinfo = new server();
            vector<QString> all_deliveryman_id = getinfo->getAll("deliveryman");
            for(auto p = all_deliveryman_id.begin(); p != all_deliveryman_id.end();p++){
                if(getinfo->exists(ui->id->text(), "deliveryman")){
                    QMessageBox::warning(this,"注册失败","该账号已存在！",QMessageBox::Ok);
                    existed = 1;
                    break;
                }
            }
            if(!existed){
                getinfo->addDelivery(ui->id->text(), ui->password->text(), ui->name->text());
                QMessageBox::about(this,"注册成功","请前往登录！");
                this->close();
            }
            delete getinfo;
        }
    }
    else if(!ui->id->text().isEmpty()){
        QMessageBox::warning(this,"注册失败","请输入账号！",QMessageBox::Ok);
    }
    else if(!ui->password->text().isEmpty()){
        QMessageBox::warning(this,"注册失败","请输入密码！",QMessageBox::Ok);
    }
    else{
        QMessageBox::warning(this,"注册失败","请输入姓名或名称！",QMessageBox::Ok);
    }
}

void sign_up::on_return_2_clicked()
{
    this->close();
}
