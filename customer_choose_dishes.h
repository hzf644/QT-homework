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
    explicit customer_choose_dishes(QWidget *parent = nullptr);
    ~customer_choose_dishes();

private:
    Ui::customer_choose_dishes *ui;
};

#endif // CUSTOMER_CHOOSE_DISHES_H
