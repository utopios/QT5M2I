//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoanFormWidget.h" resolved

#include "loanformwidget.h"
#include "ui_LoanFormWidget.h"


LoanFormWidget::LoanFormWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::LoanFormWidget) {
    ui->setupUi(this);
}

LoanFormWidget::~LoanFormWidget() {
    delete ui;
}

