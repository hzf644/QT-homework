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

private:
    Ui::customer_main *ui;
};

#endif // CUSTOMER_MAIN_H
