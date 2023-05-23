#ifndef CUSTOMDATAMODEL_H
#define CUSTOMDATAMODEL_H

#include <QSqlTableModel>

class CustomDataModel: public QSqlTableModel
{
private:
    QSqlDatabase db_;
public:
    CustomDataModel(QObject *parent=nullptr, QSqlDatabase db = QSqlDatabase()): QSqlTableModel(parent, db){
        db_ = db;
    }
    ~CustomDataModel();
};

#endif // CUSTOMDATAMODEL_H
