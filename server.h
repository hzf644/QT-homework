#ifndef SERVER_H
#define SERVER_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QString>
#include<QPixmap>
#include<vector>
#include<Qtime>
using namespace std;

//调用server类时有时需要输入要获取信息的对象的类型（餐馆/顾客/骑手/菜品/订单）
//程序会打开存有对应类型的信息的表
//有"restaurant"""customer""order""deliveryman""dish"五类:-1: error: debug/customer_choose_dishes.o:D:\Qtproject\takeaway-project\build\Desktop_Qt_6_7_0_MinGW_64_bit-Debug/../../customer_choose_dishes.cpp:41: undefined reference to `QString server::getLocation_customer<QString>(QString, QString)'
class server
{
public:
    server();
    bool exists(QString id, QString type);//判断账号是否存在
    bool match(QString id, QString password, QString type);//判断账号和密码是否对应；



    //返回一个存有表中所有id的vector
    //顾客/骑手/商家的id是注册时候填的
    //菜品和订单的id是随机生成的
    //通过这个vector利用下面给的单个查询的函数查询整个表的信息
    vector<QString> getAll(QString type);

    //返回一个存有表中一部分id的vector
    //这些id都满足“column”这一栏是"value"

    vector<QString>getPart(QString column, QString value, QString type);

    //以下函数，调用时均需要的参数是column和value，用以查询单个对象的信息
    //因此所查询的column,value只能对应一行（也就是只能查询一个对象的信息）
    //column是指您想以哪一栏为查找信息的依据
    //value是指要查找的那一行的作为查找依据的那一column的值
    //如：您想要查询餐馆名为“a”的订单的各种信息，就应该在订单相关的函数中
    //传递"restaurant_name"作为column的值，“a”作为value的值
    //再如：您想要查询id为“654”的顾客的各种信息，就应该在顾客相关的函数中
    //传递"id"为column的值，“654”作为value的值

    //注册一个餐馆
    void addRestaurant(QString id, QString password, QString name, QString Location, QString picture_file_path, double rank=5.0, double profit = 0.0, int people = 1);
    //获得餐馆的信息

    QString getName_restaurant(QString column, QString value);

    QString getLocation_restaurant(QString column, QString value);

    double getRank_restaurant(QString column, QString value);

    QString getPicture_restaurant(QString column, QString value);//返回图片的文件路径

    double getProfits_restaurant(QString column, QString value);

    int getPeopleNumber_restaurant(QString column, QString value);

    //修改餐馆的信息
    void editRank_restaurant(QString column, QString value, double new_rank);//输入新的评分，会对其进行加权平均

    void editProfits_restaurant(QString column, QString value, double new_profits);

    //注册一个顾客
    void addCustomer(QString id, QString password, QString name, QString location);
    //获得顾客的信息

    QString getName_customer(QString column, QString value);

    QString getLocation_customer(QString column, QString value);

    //添加菜品
    void addDish(QString restaurant_id, QString name, QString picture_file_path, double price);
    //删除菜品

    void deleteDish(QString column, QString value);

    //获得菜品的信息

    double getPrice_dish(QString column,QString value);

    QString getName_dish(QString column,QString value);

    QString getPicture_dish(QString column,QString value);//返回图片路径

    //修改菜品的信息

    void editPrice_dish(QString column,QString value, double new_price);

    void editName_dish(QString column,QString value, QString new_name);

    void editPicture_dish(QString column,QString value, QString new_file_path);

    //添加一个订单,订单产生时没有骑手的名字，需要在骑手接单后调用后面的函数修改订单信息添加骑手名字
    void addOrder(QString start_location, QString restaurant_id, QString Destination, bool is_taken = false, bool is_finished = false, QString delivery_man_name="");
    //删除一个订单

    void deleteOrder(QString column, QString value);

    //获得订单的信息

    bool is_taken(QString column, QString value);//是否被骑手接单

    bool is_finished(QString column, QString value);//是否已完成

    QString getStartLocation(QString column, QString value);

    QString getDestination(QString column, QString value);

    QString getRestaurantID_order(QString column, QString value);

    QString getDeliveryManID_order(QString column, QString value);

    //修改订单信息

    void taken(QString column, QString value);//骑手接单

    void finished(QString column, QString value);//骑手完成

    void addDeliveryID_order(QString column, QString value, QString delivery_name);

    //注册骑手
    void addDelivery(QString id, QString password, QString name);
    //获得骑手信息

    QString getName_delivery(QString column, QString value);
};

#endif // SERVER_H
