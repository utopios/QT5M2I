#include <QApplication>
#include <QPushButton>
#include <QDir>
#include <QSqlDatabase>
#include "dao/ContactDAO.h"
#include "window/contactwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);


//    //Test de notre dao
//
    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
//    database.setDatabaseName(dataFolderPath + "/demo.db");
//    ContactDAO* contactDao = new ContactDAO(database);
//    QList<Contact> contacts = contactDao->getAll();
    ContactWindow contactWindow(database);
    contactWindow.show();
    return QApplication::exec();
}
