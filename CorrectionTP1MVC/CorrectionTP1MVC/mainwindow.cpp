#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QObject::connect(deleteButton, &QPushButton::clicked, this, &MainWindow::handleSubmit);

    //TAbleView
    booksView = new QTableView(mainWidget);
    booksModel = new BooksModel(booksView);
    booksView->setModel(booksModel);
    formLayout->addWidget(booksView);
    setCentralWidget(mainWidget);
}

void MainWindow::handleAdd() {

}

void MainWindow::handleDelete() {

}
void MainWindow::handleSubmit() {

}

MainWindow::~MainWindow()
{
    delete ui;
}

