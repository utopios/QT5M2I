//
// Created by ihab on 17/05/2023.
//

#include <QList>
#include <QSqlQuery>
#include "ContactDAO.h"

void ContactDAO::init() {

}

bool ContactDAO::add(const Contact &contact) {
    db_.open();
    query = new QSqlQuery(db_);
    query->prepare("INSERT INTO contact (first_name, last_name, phone, age) values (:first_name, :last_name, :phone, :age)");
    query->bindValue(":first_name", contact.firstName());
    query->bindValue(":last_name", contact.lastName());
    query->bindValue(":age", contact.age());
    query->bindValue(":phone", contact.phone());
    bool result = query->exec();
    db_.close();
    return result;
}

bool ContactDAO::remove(const int id) { return false; }

QList<Contact> ContactDAO::getAll() {
    QList<Contact> contacts;
    return contacts;
}

Contact ContactDAO::get(const int id) {

}
