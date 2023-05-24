#ifndef CONTACTMODEL_H
#define CONTACTMODEL_H
#include <QSqlTableModel>
#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QSqlQuery>
class ContactModel: public QSqlTableModel
{
    Q_OBJECT

private:
    QSqlDatabase db_;

public:
    ContactModel(QObject* parent = nullptr, QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE")) : QSqlTableModel(parent, db) {
        db_ = db;
        QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
        QDir().mkpath(dataFolderPath);
        db_.setDatabaseName(dataFolderPath + "/mydatabase.db");
        qDebug() << dataFolderPath + "/mydatabase.db";
        db_.open();
        QSqlQuery query(db_);
        if(!db_.tables().contains("contact")){
            bool result = query.exec("CREATE TABLE contact(id INTEGER PRIMARY KEY, firstName varchar, lastName varchar, phone varchar)");
            qDebug() << result;
        }
        setTable("contact");
        select();
    }
    Q_INVOKABLE void addRecord(const QString& firstName, const QString& lastName, const QString& phone);
    ~ContactModel();
};

#endif // CONTACTMODEL_H
