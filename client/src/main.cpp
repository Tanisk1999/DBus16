#include <dbus-c++-1/dbus-c++/dbus.h>
#include "client/api/sampleproxy.h"
#include <iostream>

int main() {
    try {
        // Explicitly connect to the D-Bus session bus
        DBus::Connection::pointer conn = DBus::Connection::create(DBus::Connection::SessionBus());

        // Create a proxy object
        com::example::DatabaseManager_proxy* proxy;

        // Use the proxy to call D-Bus methods
        proxy->Create();
        proxy->Read();
        proxy->Update();
        proxy->Delete();

    } catch (DBus::Error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}


