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
#include <QDebug>
#include <QSqlRecord>
#include "sliderdelegate.h"
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
    db.open();
    QSqlQuery query(db);
    bool result = query.exec("CREATE TABLE itemsBis(name TEXT, status int )");
    qDebug() << result;
    //Widget pour demo
    QWidget* widget = new QWidget(this);
    QVBoxLayout* boxLayout = new QVBoxLayout(widget);

    //Bouton pour ajouter
    QPushButton* button = new QPushButton("ajouter", widget);
    QPushButton* buttonDelete = new QPushButton("suppprimer", widget);
    QObject::connect(button, &QPushButton::clicked, this, &MainWindow::handleAdd);
    QObject::connect(buttonDelete, &QPushButton::clicked, this, &MainWindow::handleDelete);

    line = new QLineEdit(widget);

    //View => listView
    listView = new QListView(widget);

    // View => TableView
    tableView = new QTableView(widget);
    tableView->setItemDelegateForColumn(2, new SliderDelegate(tableView));

    //Model
//    QStringListModel* model = new QStringListModel();
//    listView->setModel(model);
//    model->insertRow(model->rowCount());
//    model->setData(model->index(model->rowCount() -1 ), "toto");

//    //Ouvrir une boite de dialogue pour modifier le model


    //Model QSqlTableModel
    //model = new QSqlTableModel(listView,db);
    model = new QSqlTableModel(tableView,db);
    //model->setTable("items");
    model->setTable("itemsBis");
    model->select();
    //Bind du mode lavec la vue
    //listView->setModel(model);

    tableView->setModel(model);

    //boxLayout->addWidget(listView);
    boxLayout->addWidget(tableView);
    boxLayout->addWidget(line);
    boxLayout->addWidget(button);
    boxLayout->addWidget(buttonDelete);
    setCentralWidget(widget);


}

void MainWindow::handleAdd() {
//    model->insertRow(model->rowCount());
//    model->setData(model->index(model->rowCount() -1, 0), line->text());
    QSqlRecord record = model->record();
    record.setValue("name", line->text());
    record.setValue("status", 0);
    model->insertRecord(-1, record);
    model->submitAll();

}

void MainWindow::handleDelete() {
    //QModelIndex index = listView->currentIndex();
    QItemSelectionModel *selection = tableView->selectionModel();
    //model->removeRow(index.row());
    model->removeRow(selection->currentIndex().row());
    model->submitAll();
    model->select();

}

MainWindow::~MainWindow()
{
    delete ui;
}

