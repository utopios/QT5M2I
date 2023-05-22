//
// Created by ihab on 22/05/2023.
//

#include <QCoreApplication>
#include <QDir>
#include "DataBaseManager.h"

DataBaseManager::DataBaseManager() {
    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);

    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(dataFolderPath + "/demo.db");
}

QSqlDatabase DataBaseManager::db() {
    return db_;
}

DataBaseManager* DataBaseManager::instance= nullptr;