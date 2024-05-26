#ifndef COMPONENT_RESTAURANT_INFORMATION_H
#define COMPONENT_RESTAURANT_INFORMATION_H

#include <QMainWindow>

namespace Ui {
class component_restaurant_information;
}

class component_restaurant_information : public QMainWindow
{
    Q_OBJECT

public:
    //输入餐馆的名字，地址，评分，图片，构建一个在顾客主页面显示餐馆信息的小组件，size宽400长200.
    explicit component_restaurant_information(QString name, QString location, QString picture_file_path, double rank, QWidget *parent = nullptr);
    ~component_restaurant_information();

signals:
    //点击此组件的“进入店铺”按钮时发送此信号，发送店铺名字给点餐界面，打开点餐界面
    //信号函数无需实现
    void enter(QString name);

private:
    Ui::component_restaurant_information *ui;
    QString name;
    QString location;
    QString picture_file_path;
    double rank;
};

#endif // COMPONENT_RESTAURANT_INFORMATION_H
