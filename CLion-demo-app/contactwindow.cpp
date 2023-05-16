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
    qListWidget = new QListWidget(mainWidget);
    validButton = new QPushButton("Valid", mainWidget);
    deleteButton = new QPushButton("delete", mainWidget);
    formLayout->addRow("First name", firstNameEdit);
    formLayout->addRow("last name", lastNameEdit);
    formLayout->addRow("phone", phoneEdit);
    formLayout->addRow("age", ageEdit);
    formLayout->addWidget(validButton);
    formLayout->addWidget(qListWidget);
    formLayout->addWidget(deleteButton);
    QObject::connect(validButton,&QPushButton::clicked, this, &ContactWindow::handleValidButton);
    QObject::connect(deleteButton, &QPushButton::clicked, this, &ContactWindow::handleDeleteSelectedItem);
    QObject::connect(qListWidget, &QListWidget::itemClicked, this, &ContactWindow::handleselectedItem);
    setCentralWidget(mainWidget);
}

void ContactWindow::handleselectedItem(QListWidgetItem *item) {
    selectedItem = item;
}

void ContactWindow::handleDeleteSelectedItem() {
    QMessageBox messageBox;
    messageBox.setText(selectedItem->text());
    messageBox.exec();
    delete selectedItem;
}

void ContactWindow::handleValidButton() {
//    QMessageBox messageBox;
//    messageBox.setText(firstNameEdit->text() + " "+ lastNameEdit->text() + " "+ phoneEdit->text() + " "+ ageEdit->text());
//
    qListWidget->addItem(*new QString(firstNameEdit->text() + " "+ lastNameEdit->text() + " "+ phoneEdit->text() + " "+ ageEdit->text()));
    firstNameEdit->setText("");
    lastNameEdit->setText("");
    phoneEdit->setText(nullptr);
    ageEdit->setValue(0);
    //messageBox.exec();
}


ContactWindow::~ContactWindow() {
    delete ui;
    //delete selectedItem;
}

