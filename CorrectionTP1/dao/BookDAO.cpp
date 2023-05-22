//
// Created by ihab on 22/05/2023.
//

#include "BookDAO.h"
#include <QSqlQuery>
#include <QList>
#include <QDebug>
void BookDAO::init() {
    db_.open();
    if(!db_.tables().contains("book")) {
        query = new QSqlQuery(db_);
        bool result = query->exec("CREATE TABLE book(id INTEGER PRIMARY KEY, title varchar, isbn varchar, author varchar)");
        //Pour les autres dao, on crée les autres tables
        //REQUEST user => CREATE TABLE user(id INTEGER PRIMARY KEY, name varchar, email varchar)
        //REQUEST loan => CREATE TALBE laon(id INTEGER PRIMARY KEY, user_id INTEGER REFERENCES user(id), book_id INTEGER REFERENCES book(id), loan_date date)
        if(!result) {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
}

bool BookDAO::add(Book& book) {
    db_.open();
    query = new QSqlQuery(db_);
        query->prepare("INSERT INTO book (title, isbn, author) values (:title, :isbn, :author)");
    query->bindValue(":title", book.title());
    query->bindValue(":isbn", book.isbn());
    query->bindValue(":author",book.author());
    bool result = query->exec();
    QVariant id = query->lastInsertId();
    if(id.isValid()) {
        book.setId(id.toInt());
    }
    if(!result) {
        error = query->lastError();
        qDebug() << error.text();
    }
    db_.close();
    return result;
}

bool BookDAO::remove(const int id) {
    db_.open();
    query = new QSqlQuery(db_);
    query->prepare("DELETE FROM book where id = :id");
    query->bindValue(":id", id);
    bool result = query->exec();
    if(!result) {
        error = query->lastError();
        qDebug() << error.text();
    }
    return result;
}

QList<Book> BookDAO::getAll() {
    QList<Book> books;
    db_.open();
    query = new QSqlQuery(db_);
    query->exec("SELECT * FROM book");
    while(query->next()) {
        books.append(Book(query->value("id").toInt(),query->value("title").toString(), query->value("isbn").toString(), query->value("author").toString()));
    }
    db_.close();
    return books;
}

Book BookDAO::get(const int id) {
    db_.open();
    query = new QSqlQuery(db_);
    query->prepare("SELECT * FROM book where id = :id");
    query->bindValue(":id", id);
    if(query->next()) {
        return  Book(query->value("id").toInt(),query->value("title").toString(), query->value("isbn").toString(), query->value("author").toString());
    }

    else {
        return Book();
    }
}