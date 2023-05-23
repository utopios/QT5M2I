#include "taskwindow.h"
#include "ui_taskwindow.h"
#include <QSqlQuery>
#include <QDir>
#include <QDebug>
#include <QSqlRecord>
#include "completeddelegate.h"
TaskWindow::TaskWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TaskWindow)
{
    ui->setupUi(this);

    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dataFolderPath + "/mydatabase.db");
    qDebug() << dataFolderPath + "/mydatabase.db";
    db.open();
    QSqlQuery query(db);
    bool result = query.exec("CREATE TABLE task (id INTEGER PRIMARY KEY, name varchar, date TEXT, completed BOOLEAN)");
    qDebug() << result;
    createContent(db);
}
void TaskWindow::createContent(QSqlDatabase& db) {

    widget = new QWidget(this);
    boxLayout = new QVBoxLayout(widget);

    tableView = new QTableView(this);
    model = new QSqlTableModel(tableView, db);
    model->setTable("task");
    model->select();
    tableView->setModel(model);
    tableView->setItemDelegateForColumn(3, new CompletedDelegate(tableView));

    nameLine = new QLineEdit(widget);
    dateLine = new QDateEdit(widget);

    addButton = new QPushButton("Add");
    submitButton = new QPushButton("submit");
    deleteButton = new QPushButton("delete");

    QObject::connect(addButton, &QPushButton::clicked, this, &TaskWindow::handleAdd);
    QObject::connect(submitButton, &QPushButton::clicked, this, &TaskWindow::handleSubmit);
    QObject::connect(deleteButton, &QPushButton::clicked, this, &TaskWindow::handleDelete);

    boxLayout->addWidget(tableView);
    boxLayout->addWidget(nameLine);
    boxLayout->addWidget(dateLine);

    boxLayout->addWidget(addButton);
    boxLayout->addWidget(submitButton);
    boxLayout->addWidget(deleteButton);

    setCentralWidget(widget);
}

void TaskWindow::handleAdd() {
    QSqlRecord record = model->record();
    record.setValue("name", nameLine->text());
    record.setValue("date", dateLine->date());
    record.setValue("completed", false);
    model->insertRecord(-1, record);
    handleSubmit();
}

void TaskWindow::handleSubmit() {
    model->submitAll();
    model->select();
}

void TaskWindow::handleDelete() {
    QItemSelectionModel *selection = tableView->selectionModel();
    model->removeRow(selection->currentIndex().row());
    handleSubmit();
}

TaskWindow::~TaskWindow()
{
    delete ui;
}
