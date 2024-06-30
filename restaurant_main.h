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
signals:
    void subClose();

private:
    QString restaurant_ID;
    Ui::restaurant_main *ui;
    void closeEvent(QCloseEvent* );
};

#endif // RESTAURANT_MAIN_H
