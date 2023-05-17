#include <QApplication>
#include <QPushButton>
#include <QDir>
#include <QSqlDatabase>
#include "dao/ContactDAO.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();

    //Test de notre dao

    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(dataFolderPath + "/demo.db");
    ContactDAO* contactDao = new ContactDAO(database);
    QList<Contact> contacts = contactDao->getAll();
    return QApplication::exec();
}
