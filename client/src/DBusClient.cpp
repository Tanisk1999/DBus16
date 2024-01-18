#include "DBusClient.h"

DBusClient::DBusClient(DBus::Connection &connection, const char *path)
    : proxy(new com::example::DatabaseManager_proxy(connection, path)) {}

void DBusClient::performOperations() {
    // Use the proxy to call D-Bus methods
    proxy->Create();
    proxy->Read();
    proxy->Update();
    proxy->Delete();
}

// Destructor to clean up the proxy object
DBusClient::~DBusClient() {
    delete proxy;
}

int main() {
    DBus::default_dispatcher_t::pointer_t dispatcher = DBus::DefaultDispatcher::create();
    DBus::Connection::pointer conn = DBus::Connection::create(dispatcher, "tcp:host=localhost,port=12345");

    DBusClient dbusClient(*conn, "/com/example/DatabaseManager");

    try {
        conn->enter();
        std::cout << "Connected to D-Bus server." << std::endl;

        dbusClient.performOperations();

    } catch (DBus::Error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
