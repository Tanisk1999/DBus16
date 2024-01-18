#ifndef DBUSCLIENT_H
#define DBUSCLIENT_H

#include <iostream>
#include <string>
#include "dbus-c++-1/dbus-c++/dbus.h"
#include "sampleproxy.h"

class DBusClient {
public:
    DBusClient(DBus::Connection &connection, const char *path);

    void performOperations();

private:
    com::example::DatabaseManager_proxy* proxy;
};

#endif // DBUSCLIENT_H
