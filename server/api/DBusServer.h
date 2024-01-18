#ifndef DBUSSERVER_H
#define DBUSSERVER_H

#include "samplestub.h"

class DBusService : public com::example::DatabaseManager_stub {
public:
    DBusService(DBus::Connection &connection, const char *path);

    void Create();
    void Read();
    void Update();
    void Delete();
};

#endif // DBUSSERVER_H
