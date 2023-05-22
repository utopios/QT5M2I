#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QListView>
#include <QStringListModel>
#include <QPushButton>
#include <QInputDialog>
#include <QLineEdit>
#include <QSqlTableModel>
#include <QDir>
#include <QSqlQuery>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Information base de données sqlite
    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dataFolderPath + "/mydatabase.db");
    //Création d'une table exemple
    QSqlQuery query;
    query.exec("CREATE TABLE items(name TEXT)");

    //Widget pour demo
    QWidget* widget = new QWidget(this);
    QVBoxLayout* boxLayout = new QVBoxLayout(widget);

    //Bouton pour ajouter
    QPushButton* button = new QPushButton("ajouter", widget);

    //View
    QLineEdit* line = new QLineEdit(widget);
    QListView* listView = new QListView(widget);

    //Model
//    QStringListModel* model = new QStringListModel();
//    listView->setModel(model);
//    model->insertRow(model->rowCount());
//    model->setData(model->index(model->rowCount() -1 ), "toto");

//    //Ouvrir une boite de dialogue pour modifier le model
//    QObject::connect(button, &QPushButton::clicked, [&]() {
//        model->insertRow(model->rowCount());
//        model->setData(model->index(model->rowCount() -1 ), line->text());
//    });

    //Model QSqlTableModel
    QSqlTableModel* model = new QSqlTableModel(listView,db);
    model->setTable("items");
    model->select();
    //Bind du mode lavec la vue
    listView->setModel(model);

    boxLayout->addWidget(listView);
    boxLayout->addWidget(line);
    boxLayout->addWidget(button);
    setCentralWidget(widget);


}

MainWindow::~MainWindow()
{
    delete ui;
}

