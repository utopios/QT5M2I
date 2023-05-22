//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BooksPage.h" resolved

#include "bookspage.h"
#include "ui_BooksPage.h"


BooksPage::BooksPage(QWidget *parent) :
        QWidget(parent), ui(new Ui::BooksPage) {
    ui->setupUi(this);
    createContent();
}

void BooksPage::createContent() {
    //mainWidget = new QWidget(this);
    QVBoxLayout boxLayout(this);
    formWidget = new BookFormWidget(mainWidget);
    booksWidget = new BooksWidget(mainWidget);
    boxLayout.addWidget(formWidget);
    boxLayout.addWidget(booksWidget);
    //mainWidget->setLayout(&boxLayout);
    QObject::connect(formWidget, &BookFormWidget::bookAdded, booksWidget, &BooksWidget::handleBookAdded);
}

BooksPage::~BooksPage() {
    delete ui;
}

