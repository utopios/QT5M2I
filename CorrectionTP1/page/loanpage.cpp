//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoanPage.h" resolved

#include "loanpage.h"
#include "ui_LoanPage.h"


LoanPage::LoanPage(QWidget *parent) :
        QWidget(parent), ui(new Ui::LoanPage) {
    ui->setupUi(this);
}

LoanPage::~LoanPage() {
    delete ui;
}

