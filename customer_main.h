#ifndef CUSTOMER_MAIN_H
#define CUSTOMER_MAIN_H

#include <QMainWindow>

namespace Ui {
class customer_main;
}

class customer_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit customer_main(QWidget *parent = nullptr);
    ~customer_main();

public slots:
    void setId(QString id);//登录界面输入id后,打开顾客主页面时，触发此槽函数，获得用户Id;

signals:
    void sendID(QString id);//关闭顾客主页面，打开点餐页面时触发此槽函数，发送用户Id到下一个页面；

private:
    QString userID;
    QString id_of_restaurant;
    Ui::customer_main *ui;
};

#endif // CUSTOMER_MAIN_H
