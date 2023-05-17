//
// Created by ihab on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_FormWidget.h" resolved

#include "formwidget.h"
#include "ui_FormWidget.h"


FormWidget::FormWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::FormWidget) {
    ui->setupUi(this);
    createContent();
}

void FormWidget::createContent() {
    formLayout = new  QFormLayout(this);
    firstNameEdit = new QLineEdit(this);
    lastNameEdit = new QLineEdit(this);
    phoneEdit = new QLineEdit(this);
    ageEdit = new QSpinBox(this);
    validButton = new QPushButton("Valid", this);
    formLayout->addRow("First name", firstNameEdit);
    formLayout->addRow("last name", lastNameEdit);
    formLayout->addRow("phone", phoneEdit);
    formLayout->addRow("age", ageEdit);
    formLayout->addWidget(validButton);
}

FormWidget::~FormWidget() {
    delete ui;
}

