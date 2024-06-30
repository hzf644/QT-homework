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
    explicit customer_main(QString userID, QWidget *parent = nullptr);
    ~customer_main();
signals:
    void subClose();

private:
    QString id_of_restaurant;
    Ui::customer_main *ui;
    QString userID;
    void closeEvent(QCloseEvent* );

};

#endif // CUSTOMER_MAIN_H
