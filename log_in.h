#ifndef LOG_IN_H
#define LOG_IN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class log_in;
}
QT_END_NAMESPACE

class log_in : public QMainWindow
{
    Q_OBJECT

public:
    log_in(QWidget *parent = nullptr);
    ~log_in();

private slots:
    void on_login_clicked();
    void on_signup_clicked();

private:
    Ui::log_in *ui;
};
#endif // LOG_IN_H
