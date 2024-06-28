#ifndef DELIVERY_MAIN_H
#define DELIVERY_MAIN_H

#include <QMainWindow>

namespace Ui {
class delivery_main;
}

class delivery_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit delivery_main(QString name, QWidget *parent = nullptr);
    ~delivery_main();

private:
    Ui::delivery_main *ui;
};

#endif // DELIVERY_MAIN_H
