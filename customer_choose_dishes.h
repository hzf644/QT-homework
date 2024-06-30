#ifndef CUSTOMER_CHOOSE_DISHES_H
#define CUSTOMER_CHOOSE_DISHES_H

#include <QMainWindow>
#include "server.h"
#include "component_dish.h"
#include"customer_rank.h"
#include"customer_main.h"
#include<QVBoxLayout>
#include<QMessageBox>
#include<vector>
namespace Ui {
class customer_choose_dishes;
}

class customer_choose_dishes : public QMainWindow
{
    Q_OBJECT

public:
    explicit customer_choose_dishes(QString customer_id, QString restaurant_name, QWidget *parent = nullptr);
    ~customer_choose_dishes();
    void addAmount(double price);

signals:
    void subClose();
    void enter();//付款结束进入评分界面

private:
    double amount = 0;
    QString userID, restaurant_id;
    void closeEvent(QCloseEvent* );
    Ui::customer_choose_dishes *ui;
};

#endif // CUSTOMER_CHOOSE_DISHES_H
