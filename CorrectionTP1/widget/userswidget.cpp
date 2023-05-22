//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UsersWidget.h" resolved

#include "userswidget.h"
#include "ui_UsersWidget.h"


UsersWidget::UsersWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::UsersWidget) {
    ui->setupUi(this);
}

UsersWidget::~UsersWidget() {
    delete ui;
}

