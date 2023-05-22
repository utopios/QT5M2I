//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BookFormWidget.h" resolved

#include "bookformwidget.h"
#include "ui_BookFormWidget.h"


BookFormWidget::BookFormWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::BookFormWidget) {
    ui->setupUi(this);
}

BookFormWidget::~BookFormWidget() {
    delete ui;
}

