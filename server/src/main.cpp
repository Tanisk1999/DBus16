#include <iostream>
#include <dbus-c++-1/dbus-c++/dbus.h>
#include "server/api/samplestub.h"

int main() {
    try {
        // Create a default dispatcher
        DBus::default_dispatcher_t::pointer_t dispatcher = DBus::DefaultDispatcher::create();

        // Create a D-Bus connection
        DBus::Connection::pointer conn = DBus::Connection::create(dispatcher, "tcp:host=localhost,port=12345");

        // Create an adaptor for the DatabaseManager interface
        com::example::DatabaseManager_adaptor* adaptor;

        // Register the adaptor on the connection
        conn->registerObject("/", adaptor);

        // Run the main loop
        dispatcher->enter();

    } catch (DBus::Error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}


