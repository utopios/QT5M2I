#include "bookmodel.h"
#include <QSqlRecord>

BookModel::~BookModel() {
    if(db_.isOpen()){
        db_.close();
    }
}
void BookModel::addRecord(const QString& title, const QString& isbn, const QString& author) {
    QSqlRecord record = this->record();
    record.setValue("title", title);
    record.setValue("isbn", isbn);
    record.setValue("author", author);
    insertRecord(-1, record);
    submitAll();
    select();
}


QVariant BookModel::getField(int row, const QString& fieldName) {
    int col = fieldIndex(fieldName);
    if(col == -1 || row == -1) {
        return QVariant(QString());
    }
    return QSqlTableModel::data(index(row, col));
}
