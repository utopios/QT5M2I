//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOKDAO_H
#define CORRECTIONTP1_BOOKDAO_H


#include "BaseDAO.h"
#include "../entity/Book.h"

class BookDAO: public BaseDAO<Book>{
public:
    BookDAO(QSqlDatabase& db): BaseDAO<Book>(db) {

    }
    void init() override;
    bool add(Book& book) override;
    QList<Book> getAll() override;
    Book get(const int id) override;
    bool remove(const int id) override;
};


#endif //CORRECTIONTP1_BOOKDAO_H
