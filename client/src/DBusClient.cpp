#include <iostream>
#include <string>
#include "api/DBusClient.h"

DBusClient::DBusClient() : dispatcherPtr(new DBus::DefaultDispatcher()), conn(dispatcherPtr) {
    // Additional initialization if needed
}

DBusClient::~DBusClient() {
    // Clean up resources
    delete dispatcherPtr;
}

bool DBusClient::connectToDBus() {
    try {
        // Assuming you want to connect to the session bus
        conn->open(DBus::Connection::Session);
        return true;
    } catch (DBus::Error& e) {
        std::cerr << "Failed to connect to D-Bus: " << e.what() << std::endl;
        return false;
    }
}

std::string DBusClient::createData(const std::string& data) {
    return invokeMethod("Create", 0, data);
}

std::string DBusClient::readData(int id) {
    return invokeMethod("Read", id, "");
}

bool DBusClient::updateData(int id, const std::string& newData) {
    try {
        invokeMethod("Update", id, newData);
        return true;
    } catch (DBus::Error& e) {
        std::cerr << "Error updating data: " << e.what() << std::endl;
        return false;
    }
}

bool DBusClient::deleteData(int id) {
    try {
        invokeMethod("Delete", id, "");
        return true;
    } catch (DBus::Error& e) {
        std::cerr << "Error deleting data: " << e.what() << std::endl;
        return false;
    }
}

std::string DBusClient::invokeMethod(const char* methodName, int id, const std::string& data) {
    try {
        DBus::Message msg = conn->call_method("com.example.DatabaseManager", "/" /* object path */, "com.example.DatabaseManager", methodName, id, data);
        std::string result;
        msg >> result;
        return result;
    } catch (DBus::Error& e) {
        std::cerr << "D-Bus method invocation error: " << e.what() << std::endl;
        return ""; // You may handle errors more appropriately
    }
}
