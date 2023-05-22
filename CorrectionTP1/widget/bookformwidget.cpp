//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BookFormWidget.h" resolved

#include "bookformwidget.h"
#include "ui_BookFormWidget.h"
#include "../dao/BookDAO.h"


BookFormWidget::BookFormWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::BookFormWidget) {
    ui->setupUi(this);
    createContent();
}

void BookFormWidget::createContent() {
    formLayout = new QFormLayout(this);
    titleEdit = new QLineEdit(this);
    authorEdit = new QLineEdit(this);
    isbnEdit = new QLineEdit(this);
    QWidget qHWidget(this);
    QHBoxLayout boxLayout(&qHWidget);
    addButton = new QPushButton("add", &qHWidget);
    deleteButton = new QPushButton("delete", &qHWidget);
    boxLayout.addWidget(addButton);
    boxLayout.addWidget(deleteButton);
    //qHWidget.setLayout(&boxLayout);

    formLayout->addRow("Titre", titleEdit);
    formLayout->addRow("ISBN", isbnEdit);
    formLayout->addRow("Auteur", authorEdit);
    formLayout->addWidget(addButton);
    formLayout->addWidget(deleteButton);
    //qHWidget.show();
    QObject::connect(addButton, &QPushButton::clicked, this, &BookFormWidget::handleAddButton);
    QObject::connect(deleteButton, &QPushButton::clicked, this, &BookFormWidget::handleDeleteButton);
}


void BookFormWidget::getBookToDelete(Book &book) {
    selectedBook = &book;
    titleEdit->setText(selectedBook->title());
    isbnEdit->setText(selectedBook->isbn());
    authorEdit->setText(selectedBook->author());
}

void BookFormWidget::handleDeleteButton() {
    BookDAO bookDAO(db_);
    if(bookDAO.remove(selectedBook->id())) {
        //Ajouter un signal pour informer la table widget de la suppression du book
    }
}

void BookFormWidget::handleAddButton() {
    Book book(0, titleEdit->text(), isbnEdit->text(), authorEdit->text());
    BookDAO bookDAO(db_);
    bookDAO.init();
    if(bookDAO.add(book)) {
        emit bookAdded(book);
    }
}

BookFormWidget::~BookFormWidget() {
    delete ui;
    delete selectedBook;
}

