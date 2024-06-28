#ifndef RESTAURANT_MAIN_H
#define RESTAURANT_MAIN_H

#include <QMainWindow>

namespace Ui {
class restaurant_main;
}

class restaurant_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit restaurant_main(QString userID, QWidget *parent = nullptr);
    ~restaurant_main();

private:
    Ui::restaurant_main *ui;
};

#endif // RESTAURANT_MAIN_H
