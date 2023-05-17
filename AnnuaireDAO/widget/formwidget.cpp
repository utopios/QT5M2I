//
// Created by ihab on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_FormWidget.h" resolved

#include "formwidget.h"
#include "ui_FormWidget.h"
#include "../dao/ContactDAO.h"


FormWidget::FormWidget(QSqlDatabase database, QWidget *parent) :
        QWidget(parent), ui(new Ui::FormWidget), db_(database) {
    ui->setupUi(this);
    createContent();
}

void FormWidget::createContent() {
    formLayout = new  QFormLayout(this);
    firstNameEdit = new QLineEdit(this);
    lastNameEdit = new QLineEdit(this);
    phoneEdit = new QLineEdit(this);
    ageEdit = new QSpinBox(this);
    //ageEdit.setParent(this);
    validButton = new QPushButton("Valid", this);
    QObject::connect(validButton, &QPushButton::clicked, this, &FormWidget::handleValidButton);
    formLayout->addRow("First name", firstNameEdit);
    formLayout->addRow("last name", lastNameEdit);
    formLayout->addRow("phone", phoneEdit);
    formLayout->addRow("age", ageEdit);
    formLayout->addWidget(validButton);
}

void FormWidget::handleValidButton() {
    //Appel à la dao
    Contact contact(0, firstNameEdit->text(), lastNameEdit->text(), phoneEdit->text(), ageEdit->value());
    ContactDAO contactDao(db_);
    contactDao.init();
    if(contactDao.add(contact)) {
        emit contactAdded(contact);
    }
}

FormWidget::~FormWidget() {
    delete ui;
}

