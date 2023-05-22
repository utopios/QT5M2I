//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOK_H
#define CORRECTIONTP1_BOOK_H


#include <QString>

class Book {
public:
    Book() = default;
    Book(const int id, const QString& title, const QString& isbn, const QString& author);
    int id() const;
    QString title() const;
    QString isbn() const;
    QString author() const;
    void setId(const int id);
private:
    int id_;
    QString title_;
    QString isbn_;
    QString author_;
};


#endif //CORRECTIONTP1_BOOK_H
