#include <dbus-c++-1/dbus-c++/dbus.h>
#include "/home/kpit/DBus_Code/client/api/sampleproxy.h"
#include <iostream>

int main() {
    try {
        // Explicitly connect to the D-Bus session bus
        DBus::Dispatcher* dispatcher = DBus::DefaultDispatcher::create();
        DBus::Connection* conn = DBus::Connection::create(dispatcher, "tcp:host=localhost,port=12345");

        // Create a proxy object
        com::example::DatabaseManager_proxy proxy;

        // Use the proxy to call D-Bus methods
        proxy.Create();
        proxy.Read();
        proxy.Update();
        proxy.Delete();

        // Your additional logic here

    } catch (DBus::Error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}