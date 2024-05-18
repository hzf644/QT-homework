#ifndef RESTAURANT_VIEW_PROFITS_H
#define RESTAURANT_VIEW_PROFITS_H

#include <QMainWindow>

namespace Ui {
class restaurant_view_profits;
}

class restaurant_view_profits : public QMainWindow
{
    Q_OBJECT

public:
    explicit restaurant_view_profits(QWidget *parent = nullptr);
    ~restaurant_view_profits();

private:
    Ui::restaurant_view_profits *ui;
};

#endif // RESTAURANT_VIEW_PROFITS_H
