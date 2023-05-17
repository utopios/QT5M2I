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
    mainWidget = new QWidget();
    formLayout = new  QFormLayout(mainWidget);
    firstNameEdit = new QLineEdit(mainWidget);
    lastNameEdit = new QLineEdit(mainWidget);
    phoneEdit = new QLineEdit(mainWidget);
    ageEdit = new QSpinBox(mainWidget);
    validButton = new QPushButton("Valid", mainWidget);
    deleteButton = new QPushButton("delete", mainWidget);
    formLayout->addRow("First name", firstNameEdit);
    formLayout->addRow("last name", lastNameEdit);
    formLayout->addRow("phone", phoneEdit);
    formLayout->addRow("age", ageEdit);
    formLayout->addWidget(validButton);
    mainWidget->show();
}

FormWidget::~FormWidget() {
    delete ui;
}

