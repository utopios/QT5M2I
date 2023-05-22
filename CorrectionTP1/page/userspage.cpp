//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UsersPage.h" resolved

#include "userspage.h"
#include "ui_UsersPage.h"


UsersPage::UsersPage(QWidget *parent) :
        QWidget(parent), ui(new Ui::UsersPage) {
    ui->setupUi(this);
}

UsersPage::~UsersPage() {
    delete ui;
}

