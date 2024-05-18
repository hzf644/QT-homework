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
    explicit component_restaurant_information(QWidget *parent = nullptr);
    ~component_restaurant_information();

private:
    Ui::component_restaurant_information *ui;
};

#endif // COMPONENT_RESTAURANT_INFORMATION_H
