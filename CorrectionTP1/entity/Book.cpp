//
// Created by ihab on 22/05/2023.
//

#include "Book.h"

Book::Book(const int id, const QString &title, const QString &isbn, const QString &author): id_(id), title_(title), isbn_(isbn), author_(author) {}

QString Book::author() const {return author_;}

QString Book::isbn() const {return  isbn_;}

QString Book::title() const {return title_;}

int Book::id() const {return id_;}

void Book::setId(const int id) { id_ = id;}