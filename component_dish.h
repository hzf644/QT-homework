#ifndef COMPONENT_DISH_H
#define COMPONENT_DISH_H

#include <QMainWindow>

namespace Ui {
class component_dish;
}

class component_dish : public QMainWindow
{
    Q_OBJECT

public:
    //构建一个供顾客和餐馆使用的，显示菜品信息的组件。
    explicit component_dish(QString name, QString pciture_file_path, double price, QWidget *parent = nullptr);
    ~component_dish();

signals:
    void ordered();//顾客点击选中一个菜时，发送此信号

private:
    Ui::component_dish *ui;
};

#endif // COMPONENT_DISH_H
