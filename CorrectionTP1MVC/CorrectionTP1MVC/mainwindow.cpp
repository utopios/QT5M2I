#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlRecord>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createContent();
}

void MainWindow::createContent() {

    mainWidget = new QWidget(this);

    //Formulaire
    formLayout = new QFormLayout(mainWidget);

    titleEdit = new QLineEdit(mainWidget);
    authorEdit = new QLineEdit(mainWidget);
    isbnEdit = new QLineEdit(mainWidget);
    QWidget* qHWidget = new QWidget(mainWidget);
    QHBoxLayout* boxLayout = new QHBoxLayout(qHWidget);
    addButton = new QPushButton("add", qHWidget);
    deleteButton = new QPushButton("delete", qHWidget);
    submitButton = new QPushButton("submit", qHWidget);
    boxLayout->addWidget(addButton);
    boxLayout->addWidget(deleteButton);
    boxLayout->addWidget(submitButton);
    formLayout->addRow("Titre", titleEdit);
    formLayout->addRow("ISBN", isbnEdit);
    formLayout->addRow("Auteur", authorEdit);
    formLayout->addWidget(qHWidget);
    QObject::connect(addButton, &QPushButton::clicked, this, &MainWindow::handleAdd);
    QObject::connect(deleteButton, &QPushButton::clicked, this, &MainWindow::handleDelete);
    QObject::connect(submitButton, &QPushButton::clicked, this, &MainWindow::handleSubmit);

    //TAbleView
    booksView = new QTableView(mainWidget);
    booksView->resize(400,400);
    booksModel = new BooksModel(booksView);
    booksModel->select();
    booksView->setModel(booksModel);
    formLayout->addWidget(booksView);
    setCentralWidget(mainWidget);
}

void MainWindow::handleAdd() {
    QSqlRecord record = booksModel->record();
    record.setValue("title", titleEdit->text());
    record.setValue("isbn", isbnEdit->text());
    record.setValue("author", authorEdit->text());
    booksModel->insertRecord(-1, record);
    handleSubmit();
}

void MainWindow::handleDelete() {
    QItemSelectionModel* selection = booksView->selectionModel();
    booksModel->removeRow(selection->currentIndex().row());
    handleSubmit();
}
void MainWindow::handleSubmit() {
    booksModel->submitAll();
    booksModel->select();
}

MainWindow::~MainWindow()
{
    delete ui;
}

