#ifndef BOOKSMODEL_H
#define BOOKSMODEL_H
#include <QSqlTableModel>
#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QSqlQuery>
class BooksModel: public QSqlTableModel
{
    Q_OBJECT

private:
    QSqlDatabase db_;

public:
    BooksModel(QObject* parent = nullptr, QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE")) : QSqlTableModel(parent, db) {
        db_ = db;
        QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
        QDir().mkpath(dataFolderPath);
        db_.setDatabaseName(dataFolderPath + "/mydatabase.db");
        qDebug() << dataFolderPath + "/mydatabase.db";
        db_.open();
        QSqlQuery query(db_);
        if(!db_.tables().contains("book")){
             bool result = query.exec("CREATE TABLE book(id INTEGER PRIMARY KEY, title varchar, isbn varchar, author varchar)");
            qDebug() << result;
        }
        setTable("book");
    }
    ~BooksModel();
};

#endif // BOOKSMODEL_H
