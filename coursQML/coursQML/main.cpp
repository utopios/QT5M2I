#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QDir>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //Utilisation du db Sqlite
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);
    db.setDatabaseName(dataFolderPath + "/mydatabase.db");
    qDebug() << dataFolderPath + "/mydatabase.db";
    db.open();
    QSqlQuery query(db);
    if(!db.tables().contains("book")){
        bool result = query.exec("CREATE TABLE contact(id INTEGER PRIMARY KEY, firstName varchar, lastName varchar, phone varchar)");
        qDebug() << result;
    }

    QSqlTableModel* model = new QSqlTableModel(&app, db);
    model->setTable("contact");
    model->select();

    engine.rootContext()->setContextProperty("contactModel", model);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
