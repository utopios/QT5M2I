#include "contactmodel.h"
#include <QSqlRecord>

ContactModel::~ContactModel() {
    if(db_.isOpen()){
        db_.close();
    }
}
void ContactModel::addRecord(const QString& firstName, const QString& lastName, const QString& phone) {
    QSqlRecord record = this->record();
    record.setValue("firstName", firstName);
    record.setValue("lastName", lastName);
    record.setValue("phone", phone);
    insertRecord(-1, record);
    submitAll();
}


QVariant ContactModel::getField(int row, const QString& fieldName) {
    int col = fieldIndex(fieldName);
    if(col == -1) {
        return QVariant();
    }
    return QSqlTableModel::data(index(row, col));
}
