#include <iostream>
#include <dbus-c++-1/dbus-c++/dbus.h>
#include "/home/kpit/DBus_Code/client/api/sampleproxy.h"

int main() {
    try {
        // Explicitly connect to the D-Bus session bus
        DBus::Connection conn = DBus::Connection::SessionBus();

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