//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_BASEDAO_H
#define ANNUAIREDAO_BASEDAO_H

#include <QSqlDatabase>
#include <QSqlError>

template <typename T>
class BaseDAO {

public:
    BaseDAO(QSqlDatabase &db);
    virtual void init()  = 0;
    virtual bool add(const T& contact) = 0;
    virtual bool remove(const int id) = 0;
    virtual QList<T> getAll() = 0;
    virtual T get(const int id) = 0;

protected:
    QSqlDatabase& db_;
    QSqlQuery* query;
    QSqlError error;
};


#endif //ANNUAIREDAO_BASEDAO_H
