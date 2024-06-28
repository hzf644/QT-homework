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
    explicit component_order(QString id, QString start_location, QString destination, bool is_taken , QWidget *parent = nullptr);
    ~component_order();
    void change_status();

signals:
    void change(bool is_taken);

private:
    Ui::component_order *ui;
};

#endif // COMPONENT_ORDER_H
