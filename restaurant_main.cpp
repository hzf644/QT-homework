#include "restaurant_main.h"
#include "ui_restaurant_main.h"
#include "server.h"
#include <QVBoxLayout>
#include "component_dish_for_restaurant.h"
#include "restaurant_edit_dish.h"
#include "restaurant_view_profits.h"
#include <vector>

restaurant_main::restaurant_main(QString qwer, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::restaurant_main)
{
    ui->setupUi(this);
    restaurant_ID = qwer;
    this->setAttribute(Qt::WA_DeleteOnClose);

    server* getinfo = new server();
    vector<QString>dish_id = getinfo->getPart("restaurant_id", restaurant_ID, "dish");
    qDebug()<<restaurant_ID;
    qDebug()<<dish_id.size();

    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents);

    for(auto p = dish_id.begin();p != dish_id.end();++p){
        QString id = *p;
        QString name = getinfo->getName_dish("id", id);
        QString picture_file_path = getinfo->getPicture_dish("id", id);
        double price = getinfo->getPrice_dish("id", id);
        component_dish_for_restaurant* dish = new component_dish_for_restaurant(name, picture_file_path, price);
        connect(dish, &component_dish_for_restaurant::edited, [=](){
            restaurant_edit_dish * editor = new restaurant_edit_dish(id, 1,restaurant_ID);
            editor->show();
            connect(editor, &restaurant_edit_dish::aaaaa, [=](){
                editor->close();
                this->repaint();
            });
        });
        connect(dish, &component_dish_for_restaurant::deleted, [=](){
            getinfo->deleteDish("id", id);
            this->repaint();
        });
        layout->addWidget(dish);
    }

    connect(ui->add, &QPushButton::clicked, [&](){
        restaurant_edit_dish * editor = new restaurant_edit_dish("", 0,restaurant_ID);
        editor->show();
        connect(editor, &restaurant_edit_dish::aaaaa, [=](){
            editor->close();
            this->repaint();
        });
    });

    connect(ui->pushButton, &QPushButton::clicked, [=](){
        double x = getinfo->getProfits_restaurant("id", restaurant_ID);
        restaurant_view_profits * view = new restaurant_view_profits(x);
        view->show();
    });

    delete getinfo;
}

restaurant_main::~restaurant_main()
{
    delete ui;
}

void restaurant_main::closeEvent(QCloseEvent *)
{
    emit subClose();
}
