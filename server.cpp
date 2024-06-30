#include "server.h"

server::server()
{
}

bool server::exists(QString id, QString type)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    bool ret = false;
    QString cmd = "select exists(select 1 from "+type+" where id = :id)";
    query.prepare(cmd);
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toInt();
    }
    return ret;
}

bool server::match(QString id, QString password, QString type)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    bool ret = false;
    QString cmd = "select password from "+type+" where id == \'"+id+"\'";
    query.prepare(cmd);
    //query.bindValue(":id", id);
    if(!query.exec(cmd)){
        qDebug()<<"exec error: "<<cmd;
        qDebug()<<query.lastError();
    }
    else{
        query.next();
        QString real_password = query.value(0).toString();
        ret = (password == real_password);
    }
    return ret;
}

vector<QString> server::getAll(QString type)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
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


vector<QString> server::getPart(QString column, QString value, QString type)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    vector<QString> ret;
    QString cmd = "select id from "+type+" where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
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
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
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


QString server::getName_restaurant(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select name from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


QString server::getLocation_restaurant(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select location from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


double server::getRank_restaurant(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    double ret=0.0;
    QString cmd = "select rank from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toDouble();
    }
    return ret;
}


int server::getPeopleNumber_restaurant(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    int ret=0;
    QString cmd = "select people from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toInt();
    }
    return ret;
}


QString server::getPicture_restaurant(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select picture_file_path from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


double server::getProfits_restaurant(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    double ret=0.0;
    QString cmd = "select profit from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toDouble();
    }
    return ret;
}


void server::editRank_restaurant(QString column, QString value, double new_rank)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString c = "select rank, people from restaurant where "+column+" = "+"\'"+value+"\'";
    double rank=0.0;int people=0;
    query.prepare(c);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<c;
    }
    else{
        query.next();
        rank = query.value(0).toDouble();
        people = query.value(1).toInt();
    }

    rank = people * rank;
    people++;
    rank = (rank + new_rank) / people*1.0;

    QString cmd = "update restaurant set rank = :rank where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":name", rank);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    cmd = "update restaurant set people = :people where "+column+" = "+"\'"+value+"\'";
    query.bindValue(":people", people);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


void server::editProfits_restaurant(QString column, QString value, double new_profits)
{
    QSqlDatabase database;
    double profits;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString c = "select profit from restaurant where "+column+" = "+"\'"+value+"\'";
    query.prepare(c);
    if(!query.exec()){
        qDebug()<<"exec error: "<<c;
    }
    else{
        query.next();
        profits = query.value(0).toDouble();
    }
    new_profits += profits;
    QString cmd = "update restaurant set profit = :name where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":name", new_profits);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addCustomer(QString id, QString password, QString name, QString location)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
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


QString server::getName_customer(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select name from customer where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


QString server::getLocation_customer(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select name from customer where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}



void server::addDish(QString restaurant_id, QString name, QString picture_file_path, double price)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "insert into dish values(?, ?, ?, ?, ?)";
    query.prepare(cmd);
    QDateTime datetime = QDateTime::currentDateTime();
    QString id = datetime.toString("yyyyMMddhhmmss");
    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(restaurant_id);
    query.addBindValue(picture_file_path);
    query.addBindValue(price);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


void server::deleteDish(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "delete from dish where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


double server::getPrice_dish(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    double ret=0.0;
    QString cmd = "select price from dish where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toDouble();
    }
    return ret;
}


QString server::getName_dish(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select name from dish where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


QString server::getPicture_dish(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select picture_file_path from dish where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


void server::editPrice_dish(QString column, QString value, double new_price)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "update dish set price = :price where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    query.bindValue(":price", new_price);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


void server::editName_dish(QString column, QString value, QString new_name)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "update dish set name = :name where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    query.bindValue(":name", new_name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


void server::editPicture_dish(QString column, QString value, QString new_file_path)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "update dish set picture_file_path = :path where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    query.bindValue(":path", new_file_path);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addOrder(QString start_location, QString restaurant_id, QString Destination, bool is_taken, bool is_finished, QString delivery_man_name)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "insert into orderr values(?, ?, ?, ?, ?, ?, ?)";
    query.prepare(cmd);
    QDateTime datetime = QDateTime::currentDateTime();
    QString id = datetime.toString("yyyyMMddhhmmss");
    query.addBindValue(id);
    query.addBindValue(start_location);
    query.addBindValue(restaurant_id);
    query.addBindValue(Destination);
    query.addBindValue(is_taken);
    query.addBindValue(is_finished);
    query.addBindValue(delivery_man_name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


void server::deleteOrder(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "delete from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


bool server::is_taken(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    bool ret=0;
    QString cmd = "select is_taken from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toBool();
    }
    return ret;
}


bool server::is_finished(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    bool ret=0;
    QString cmd = "select is_finished from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toBool();
    }
    return ret;
}


QString server::getStartLocation(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select start_location from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


QString server::getDestination(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select destination from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


QString server::getRestaurantID_order(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select restaurant_id from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


QString server::getDeliveryManID_order(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select delivery_man_id from orderr where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}


void server::taken(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "update orderr set is_taken = 1 where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    query.bindValue(":a", true);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
        qDebug()<<query.lastError();
    }
}


void server::finished(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "update orderr set is_finished = 1 where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    query.bindValue(":a", true);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


void server::addDeliveryID_order(QString column, QString value, QString delivery_id)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "update orderr set delivery_man_id = :path where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    query.bindValue(":path", delivery_id);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}



void server::addDelivery(QString id, QString password, QString name)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString cmd = "insert into delivery values(?, ?, ?)";
    query.prepare(cmd);
    query.addBindValue(id);
    query.addBindValue(password);
    query.addBindValue(name);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
}


QString server::getName_delivery(QString column, QString value)
{
    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("waimai.db");
    if(!database.open()){
        qDebug()<<"open error! "<<database.lastError();
    }
    QSqlQuery query;
    QString ret;
    QString cmd = "select name from delivery where "+column+" = "+"\'"+value+"\'";
    query.prepare(cmd);
    query.bindValue(":value", value);
    if(!query.exec()){
        qDebug()<<"exec error: "<<cmd;
    }
    else{
        query.next();
        ret = query.value(0).toString();
    }
    return ret;
}
