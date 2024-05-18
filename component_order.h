#ifndef COMPONENT_ORDER_H
#define COMPONENT_ORDER_H

#include <QMainWindow>

namespace Ui {
class component_order;
}

class component_order : public QMainWindow
{
    Q_OBJECT

public:
    explicit component_order(QWidget *parent = nullptr);
    ~component_order();

private:
    Ui::component_order *ui;
};

#endif // COMPONENT_ORDER_H
