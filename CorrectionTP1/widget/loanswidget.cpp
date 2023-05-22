//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoansWidget.h" resolved

#include "loanswidget.h"
#include "ui_LoansWidget.h"


LoansWidget::LoansWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::LoansWidget) {
    ui->setupUi(this);
}

LoansWidget::~LoansWidget() {
    delete ui;
}

