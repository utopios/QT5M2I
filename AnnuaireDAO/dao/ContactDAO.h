//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_CONTACTDAO_H
#define ANNUAIREDAO_CONTACTDAO_H


#include <QSqlDatabase>
#include "../entity/contact.h"
#include "BaseDAO.h"

class ContactDAO : public BaseDAO<Contact> {
public:
    ContactDAO(QSqlDatabase& db): BaseDAO<Contact>(db) {
        db_ = db;
    }

    void init() override;
    bool add(Contact& contact) override;
    bool remove(const int id) override;
    QList<Contact> getAll() override;
    Contact get(const int id) override;
};


#endif //ANNUAIREDAO_CONTACTDAO_H
