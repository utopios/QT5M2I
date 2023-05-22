//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_DATABASEMANAGER_H
#define CORRECTIONTP1_DATABASEMANAGER_H


#include <QSqlDatabase>

class DataBaseManager {
    static DataBaseManager* instance;
private:
    DataBaseManager();
    QSqlDatabase db_;
public:
    DataBaseManager(const DataBaseManager&) = delete;
    DataBaseManager& operator= (const DataBaseManager&) = delete;
    static DataBaseManager* get() {
        if(!instance)
            instance = new DataBaseManager();
        return instance;
    }
    QSqlDatabase db();
};


#endif //CORRECTIONTP1_DATABASEMANAGER_H
