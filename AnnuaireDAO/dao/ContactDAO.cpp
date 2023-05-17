//
// Created by ihab on 17/05/2023.
//

#include <QList>
#include <QSqlQuery>
#include <QVariant>
#include "ContactDAO.h"
#include <QDebug>
void ContactDAO::init() {
    db_.open();
    if(!db_.tables().contains("contact")) {
        query = new QSqlQuery(db_);
        bool result = query->exec("CREATE TABLE contact (id INTEGER PRIMARY KEY, first_name varchar, last_name varchar, phone varchar, age int)");
        if(!result) {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
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
    if(!result) {
        error = query->lastError();
        qDebug() << error.text();
    }
    db_.close();
    return result;
}

bool ContactDAO::remove(const int id) {
    db_.open();
    query = new QSqlQuery(db_);
    query->prepare("DELETE FROM contact where id = :id");
    query->bindValue(":id", id);
    bool result = query->exec();
    if(!result) {
        error = query->lastError();
        qDebug() << error.text();
    }
    return result;
}

QList<Contact> ContactDAO::getAll() {
    QList<Contact> contacts;
    db_.open();
    query = new QSqlQuery(db_);
    query->exec("SELECT * FROM contact");
    while(query->next()) {
        contacts.append(Contact(query->value("id").toInt(),query->value("first_name").toString(), query->value("last_name").toString(), query->value("phone").toString(), query->value("age").toInt()));
    }
    db_.close();
    return contacts;
}

Contact ContactDAO::get(const int id) {
    db_.open();
    query = new QSqlQuery(db_);
    query->prepare("SELECT * FROM contact where id = :id");
    query->bindValue(":id", id);
    if(query->next()) {
        return  Contact(query->value("id").toInt(),query->value("first_name").toString(), query->value("last_name").toString(), query->value("phone").toString(), query->value("age").toInt()));
    }
    db_.close();
}
