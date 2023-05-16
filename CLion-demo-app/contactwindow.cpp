//
// Created by ihab on 16/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ContactWindow.h" resolved

#include <QMessageBox>
#include "contactwindow.h"
#include "ui_ContactWindow.h"


ContactWindow::ContactWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::ContactWindow) {
    ui->setupUi(this);
    createContent();
}

void ContactWindow::createContent() {
    mainWidget = new QWidget();
    formLayout = new  QFormLayout(mainWidget);
    firstNameEdit = new QLineEdit(mainWidget);
    lastNameEdit = new QLineEdit(mainWidget);
    phoneEdit = new QLineEdit(mainWidget);
    ageEdit = new QSpinBox(mainWidget);
    validButton = new QPushButton("Valid", mainWidget);
    formLayout->addRow("First name", firstNameEdit);
    formLayout->addRow("last name", lastNameEdit);
    formLayout->addRow("phone", phoneEdit);
    formLayout->addRow("age", ageEdit);
    formLayout->addWidget(validButton);
    QObject::connect(validButton,&QPushButton::clicked, this, &ContactWindow::handleValidButton);
    setCentralWidget(mainWidget);
}

void ContactWindow::handleValidButton() {
    QMessageBox messageBox;
    messageBox.setText(firstNameEdit->text() + " "+ lastNameEdit->text() + " "+ phoneEdit->text() + " "+ ageEdit->text());
    messageBox.exec();
}

ContactWindow::~ContactWindow() {
    delete ui;
}

