#ifndef CUSTOMER_RANK_H
#define CUSTOMER_RANK_H

#include <QMainWindow>

namespace Ui {
class customer_rank;
}

class customer_rank : public QMainWindow
{
    Q_OBJECT

public:
    explicit customer_rank(QWidget *parent = nullptr);
    ~customer_rank();

private:
    Ui::customer_rank *ui;
};

#endif // CUSTOMER_RANK_H
