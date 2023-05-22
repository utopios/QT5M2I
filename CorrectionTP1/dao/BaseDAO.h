//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BASEDAO_H
#define CORRECTIONTP1_BASEDAO_H


#include <QSqlDatabase>
#include <QSqlError>

template <typename T>
class BaseDAO {

public:
    BaseDAO(QSqlDatabase& db):db_(db) {

    }
    virtual void init()  = 0;
    virtual bool add(T& contact) = 0;
    virtual bool remove(const int id) = 0;
    virtual QList<T> getAll() = 0;
    virtual T get(const int id) = 0;

    virtual ~BaseDAO() = default;

protected:
    QSqlDatabase& db_;
    QSqlQuery* query;
    QSqlError error;
};


#endif //CORRECTIONTP1_BASEDAO_H
