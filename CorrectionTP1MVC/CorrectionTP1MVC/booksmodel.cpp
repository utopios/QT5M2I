#include "booksmodel.h"


BooksModel::~BooksModel() {
    if(db_.isOpen()){
        db_.close();
    }
}
