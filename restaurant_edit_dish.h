#ifndef RESTAURANT_EDIT_DISH_H
#define RESTAURANT_EDIT_DISH_H

#include <QMainWindow>

namespace Ui {
class restaurant_edit_dish;
}

class restaurant_edit_dish : public QMainWindow
{
    Q_OBJECT

public:
    explicit restaurant_edit_dish(QString dishID,bool mode,QString restaurant_id,  QWidget *parent = nullptr);
    ~restaurant_edit_dish();
signals:
    void aaaaa();

private:
    Ui::restaurant_edit_dish *ui;
    QString dishID;
    bool mode;
    QString restaurant_id;
};

#endif // RESTAURANT_EDIT_DISH_H
