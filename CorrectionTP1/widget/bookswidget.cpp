//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BooksWidget.h" resolved

#include "bookswidget.h"
#include "ui_BooksWidget.h"


BooksWidget::BooksWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::BooksWidget) {
    ui->setupUi(this);
}

BooksWidget::~BooksWidget() {
    delete ui;
}

