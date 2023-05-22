//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BooksWidget.h" resolved

#include "bookswidget.h"
#include "ui_BooksWidget.h"
#include "../dao/BookDAO.h"
#include "../util/DataBaseManager.h"


BooksWidget::BooksWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::BooksWidget) {
    ui->setupUi(this);
    createContent();
}

void BooksWidget::createContent() {
    db_ = DataBaseManager::get()->db();
    tableWidget = new QTableWidget(this);
    tableWidget->resize(450,500);
    QStringList headers;
    headers << "Id" << "Titre" << "ISBN" << "Auteur";
    tableWidget->setColumnCount(4);
    tableWidget->setHorizontalHeaderLabels(headers);
    BookDAO bookDao(db_);
    QList<Book> books = bookDao.getAll();
    tableWidget->setRowCount(books.count());
    count = 0;
    for(Book b:books) {
        tableWidget->setItem(count, 0, new QTableWidgetItem(b.id()));
        tableWidget->setItem(count, 1, new QTableWidgetItem(b.title()));
        tableWidget->setItem(count, 2, new QTableWidgetItem(b.isbn()));
        tableWidget->setItem(count, 3, new QTableWidgetItem(b.author()));
        count++;
    }
}

void BooksWidget::handleBookAdded(Book &book) {
    tableWidget->setRowCount(count+1);
    tableWidget->setItem(count, 0, new QTableWidgetItem(book.id()));
    tableWidget->setItem(count, 1, new QTableWidgetItem(book.title()));
    tableWidget->setItem(count, 2, new QTableWidgetItem(book.isbn()));
    tableWidget->setItem(count, 3, new QTableWidgetItem(book.author()));
    count++;
}

BooksWidget::~BooksWidget() {
    delete ui;
}

