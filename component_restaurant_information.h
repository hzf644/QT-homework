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
    //输入餐馆的名字，地址，评分，图片，构建一个在顾客主页面显示餐馆信息的小组件，size宽400高300.
    explicit component_restaurant_information(QString name, QString location, QString picture_file_path, double rank, QWidget *parent = nullptr);
    ~component_restaurant_information();

signals:
    void enter();

private:
    Ui::component_restaurant_information *ui;
    QString name;
    QString location;
    QString picture_file_path;
    double rank;
};

#endif // COMPONENT_RESTAURANT_INFORMATION_H
