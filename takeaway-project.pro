QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    component_dish.cpp \
    component_order.cpp \
    component_restaurant_information.cpp \
    customer_choose_dishes.cpp \
    customer_main.cpp \
    customer_rank.cpp \
    delivery_main.cpp \
    main.cpp \
    log_in.cpp \
    restaurant_deal_with_orders.cpp \
    restaurant_distribute_orders.cpp \
    restaurant_edit_dish.cpp \
    restaurant_main.cpp \
    restaurant_view_profits.cpp \
    server.cpp \
    sign_up.cpp

HEADERS += \
    component_dish.h \
    component_order.h \
    component_restaurant_information.h \
    customer_choose_dishes.h \
    customer_main.h \
    customer_rank.h \
    delivery_main.h \
    log_in.h \
    restaurant_deal_with_orders.h \
    restaurant_distribute_orders.h \
    restaurant_edit_dish.h \
    restaurant_main.h \
    restaurant_view_profits.h \
    server.h \
    sign_up.h

FORMS += \
    component_dish.ui \
    component_order.ui \
    component_restaurant_information.ui \
    customer_choose_dishes.ui \
    customer_main.ui \
    customer_rank.ui \
    delivery_main.ui \
    log_in.ui \
    restaurant_deal_with_orders.ui \
    restaurant_distribute_orders.ui \
    restaurant_edit_dish.ui \
    restaurant_main.ui \
    restaurant_view_profits.ui \
    sign_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
