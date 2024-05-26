#ifndef CUSTOMER_CHOOSE_DISHES_H
#define CUSTOMER_CHOOSE_DISHES_H

#include <QMainWindow>

namespace Ui {
class customer_choose_dishes;
}

class customer_choose_dishes : public QMainWindow
{
    Q_OBJECT

public:
    explicit customer_choose_dishes(QString name, QWidget *parent = nullptr);
    ~customer_choose_dishes();
    void addAmount(double price);

signals:
    void subClose();
    void enter();//付款结束进入评分界面

private:
    double amount = 0;
    void closeEvent(QCloseEvent* );
    Ui::customer_choose_dishes *ui;
};

#endif // CUSTOMER_CHOOSE_DISHES_H
