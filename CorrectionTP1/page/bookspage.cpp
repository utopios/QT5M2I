//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BooksPage.h" resolved

#include "bookspage.h"
#include "ui_BooksPage.h"


BooksPage::BooksPage(QWidget *parent) :
        QWidget(parent), ui(new Ui::BooksPage) {
    ui->setupUi(this);
}

BooksPage::~BooksPage() {
    delete ui;
}

