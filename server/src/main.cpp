#include <dbus-c++-1/dbus-c++/dbus.h>
#include "/home/kpit/DBus_Code/server/api/samplestub.h"
#include <iostream>

int main() {
    try {
        // Explicitly connect to the D-Bus session bus
        DBus::Connection conn = DBus::Connection::SessionBus();

        // Create an object adaptor
        com::example::DatabaseManager_adaptor* adaptor = new com::example::DatabaseManager_adaptor();

        // Attach the object adaptor to the connection
        conn.addAdaptor("/com/example/DatabaseManager", adaptor);

        // Run the main loop
        conn.enterEventLoop();

    } catch (DBus::Error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
