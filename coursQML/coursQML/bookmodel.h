#ifndef BOOKMODEL_H
#define BOOKMODEL_H
#include <QSqlTableModel>
#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QSqlQuery>
class BookModel: public QSqlTableModel
{
    Q_OBJECT

private:
    QSqlDatabase db_;

public:
    BookModel(QObject* parent = nullptr, QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE")) : QSqlTableModel(parent, db) {
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
        select();
    }
    Q_INVOKABLE void addRecord(const QString& title, const QString& isbn, const QString& author);
    Q_INVOKABLE QVariant getField(int row, const QString& fieldName);
    ~BookModel();
};

#endif // CONTACTMODEL_H
