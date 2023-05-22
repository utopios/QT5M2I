//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UserFormWidget.h" resolved

#include "userformwidget.h"
#include "ui_UserFormWidget.h"


UserFormWidget::UserFormWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::UserFormWidget) {
    ui->setupUi(this);
}

UserFormWidget::~UserFormWidget() {
    delete ui;
}

