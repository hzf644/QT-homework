#include "server.h"

server::server()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
}

bool server::exits(QString id, QString type)
{
    bool ret = false;
    QString cmd = "select exists(select 1 from " + type + " where id = " + id;
    if(!query.exec(cmd)){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toBool();
    }
    return ret;
}

bool server::match(QString id, QString password, QString type)
{
    bool ret = false;
    QString cmd = "select password from " + type + " where id = " + id;
    if(!query.exec(cmd)){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        QString real_password = query.value(0).toString();
        ret = (password == real_password);
    }
    return ret;
}

vector<QString> server::getAll(QString type)
{
    vector<QString> ret;
    QString cmd = "select id from " + type;
    if(!query.exec(cmd)){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        while(query.next()){
            QString id = query.value(0).toString();
            ret.push_back(id);
        }
    }
    return ret;
}

template<class T>
vector<QString> server::getPart(QString column, T value, QString type)
{
    vector<QString> ret;
    QString cmd = "select id from :type where :column = :value";
    query.prepare(cmd);
    query.bindValue(":type", type);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec(cmd)){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        while(query.next()){
            QString id = query.value(0).toString();
            ret.push_back(id);
        }
    }
    return ret;
}



void server::addRestaurant(QString id, QString password, QString name, QString location, QString picture_file_path, double rank, double profits, int people)
{
    QString cmd = "insert into restaurant values(?, ?, ?, ?, ?, ?, ?, ?)";
    query.prepare(cmd);
    query.addBindValue(id);
    query.addBindValue(password);
    query.addBindValue(name);
    query.addBindValue(location);
    query.addBindValue(picture_file_path);
    query.addBindValue(rank);
    query.addBindValue(profits);
    query.addBindValue(people);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
QString server::getName_restaurant(QString column, T value)
{
    QString ret;
    QString cmd = "select name from restaurant where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getLocation_restaurant(QString column, T value)
{
    QString ret;
    QString cmd = "select location from restaurant where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
double server::getRank_restaurant(QString column, T value)
{
    double ret;
    QString cmd = "select rank from restaurant where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toDouble();
    }
    return ret;
}

template<class T>
QString server::getPicture_restaurant(QString column, T value)
{
    QString ret;
    QString cmd = "select picture_file_path from restaurant where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
double server::getProfits_restaurant(QString column, T value)
{
    double ret;
    QString cmd = "select profits from restaurant where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toDouble();
    }
    return ret;
}

template<class T>
void server::editName_restaurant(QString column, T value, QString new_name)
{
    QString cmd = "update restaurant set name = :name where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", new_name);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editLocation_restaurant(QString column, T value, QString new_location)
{
    QString cmd = "update restaurant set location = :name where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", new_location);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editRank_restaurant(QString column, T value, double new_rank)
{
    QString c = "select rank, people from restaurant wher :column = :value";
    double rank, people;
    query.prepare(c);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<c;
    }
    else{
        rank = query.value(0).toDouble();
        people = query.value(1).toInt();
    }
    rank = people * rank;
    people++;
    rank = (rank + new_rank) / people;

    QString cmd = "update restaurant set rank = :rank， set people = :people where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", rank);
    query.bindValue(":people", people);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editProfits_restaurant(QString column, T value, double new_profits)
{
    QString c = "select profits from restaurant where :column = :value";
    query.prepare(c);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<c;
    }
    new_profits += query.value(0).toDouble();

    QString cmd = "update restaurant set profits = :name where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", new_profits);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editPicture_restaurant(QString column, T value, QString new_file_path)
{
    QString cmd = "update restaurant set picture_path_file = :name where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", new_file_path);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addCustomer(QString id, QString password, QString name, QString location)
{
    QString cmd = "insert into customer values(?, ?, ?, ?)";
    query.prepare(cmd);
    query.addBindValue(id);
    query.addBindValue(password);
    query.addBindValue(name);
    query.addBindValue(location);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
QString server::getName_customer(QString column, T value)
{
    QString ret;
    QString cmd = "select name from customer where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getLocation_customer(QString column, T value)
{
    QString ret;
    QString cmd = "select name from customer where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
void server::editName_customer(QString column, T value, QString new_name)
{
    QString cmd = "update customer set name = :name where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", new_name);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editLocation_customer(QString column, T value, QString new_location)
{
    QString cmd = "update customer set location = :name where :column = :value";
    query.prepare(cmd);
    query.bindValue(":name", new_location);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addDish(QString restaurant_name, QString name, QString picture_file_path, double price)
{
    QString cmd = "insert into dish values(?, ?, ?, ?, ?)";
    query.prepare(cmd);
    QDateTime datetime = QDateTime::currentDateTime();
    QString id = datetime.toString("yyyyMMddhhmmss");
    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(restaurant_name);
    query.addBindValue(picture_file_path);
    query.addBindValue(price);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::deleteDish(QString column, T value)
{
    QString cmd = "delete from dish where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
double server::getPrice_dish(QString column, T value)
{
    double ret;
    QString cmd = "select price from dish where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toDouble();
    }
    return ret;
}

template<class T>
QString server::getName_dish(QString column, T value)
{
    QString ret;
    QString cmd = "select name from dish where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getPicture_dish(QString column, T value)
{
    QString ret;
    QString cmd = "select picture_file_path from dish where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
void server::editPrice_dish(QString column, T value, double new_price)
{
    QString cmd = "update from dish set price = :price where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":price", new_price);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editName_dish(QString column, T value, QString new_name)
{
    QString cmd = "update from dish set name = :name where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":name", new_name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::editPicture_dish(QString column, T value, QString new_file_path)
{
    QString cmd = "update from dish set picture_file_path = :path where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":path", new_file_path);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addOrder(QString start_location, QString restaurant_name, QString Destination, QString customer_name, bool is_taken, bool is_finished)
{
    QString cmd = "insert into order values(?, ?, ?, ?, ?, ?, ?)";
    query.prepare(cmd);
    QDateTime datetime = QDateTime::currentDateTime();
    QString id = datetime.toString("yyyyMMddhhmmss");
    query.addBindValue(id);
    query.addBindValue(start_location);
    query.addBindValue(restaurant_name);
    query.addBindValue(Destination);
    query.addBindValue(customer_name);
    query.addBindValue(is_taken);
    query.addBindValue(is_finished);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::deleteOrder(QString column, T value)
{
    QString cmd = "delete from order where :column = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
bool server::is_taken(QString column, T value)
{
    bool ret;
    QString cmd = "select is_taken from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toBool();
    }
    return ret;
}

template<class T>
bool server::is_finished(QString column, T value)
{
    bool ret;
    QString cmd = "select is_finished from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toBool();
    }
    return ret;
}

template<class T>
QString server::getStartLocation(QString column, T value)
{
    QString ret;
    QString cmd = "select start_location from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getDestination(QString column, T value)
{
    QString ret;
    QString cmd = "select name from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getCustomerName_order(QString column, T value)
{
    QString ret;
    QString cmd = "select customer_name from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getRestaurantName_order(QString column, T value)
{
    QString ret;
    QString cmd = "select restaurant_name from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
QString server::getDeliveryName_order(QString column, T value)
{
    QString ret;
    QString cmd = "select delivery_name from order where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
void server::taken(QString column, T value)
{
    QString cmd = "update from order set is_taken = :a where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":a", true);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::finished(QString column, T value)
{
    QString cmd = "update from order set is_finished = :a where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":a", true);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
void server::addDeliveryName_order(QString column, T value, QString delivery_name)
{
    QString cmd = "update from order set delivery_name = :path where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":path", delivery_name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addDelivery(QString id, QString password, QString name)
{
    QString cmd = "insert into delivery values(?, ?, ?)";
    query.prepare(cmd);
    query.addBindValue(id);
    query.addBindValue(password);
    query.addBindValue(name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}

template<class T>
QString server::getName_delivery(QString column, T value)
{
    QString ret;
    QString cmd = "select name from delivery where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        ret = query.value(0).toString();
    }
    return ret;
}

template<class T>
void server::editName_delivery(QString column, T value, QString new_name)
{
    QString cmd = "update from delivery set name = :name where :colum = :value";
    query.prepare(cmd);
    query.bindValue(":column", column);
    query.bindValue(":value", value);
    query.bindValue(":name", new_name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}
