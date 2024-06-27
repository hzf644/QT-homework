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
    explicit component_order(QString id, QString restaurant, QString start_location, QString destination, double profits,QString delivery_man_name, QWidget *parent = nullptr);
    ~component_order();

signals:
    void finished(QString id);

private slots:
    void on_have_finished_clicked();

private:
    Ui::component_order *ui;
    QString order_id;
    QString start_location;
    QString destination_location;
    QString restaurant_name;
    double order_profits;
};

#endif // COMPONENT_ORDER_H
