//
// Created by ihab on 16/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ContactWindow.h" resolved

#include <QMessageBox>
#include <QDir>
#include "contactwindow.h"
#include "ui_ContactWindow.h"
#include <QDebug>


ContactWindow::ContactWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::ContactWindow) {
    ui->setupUi(this);
    initContactTable();
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

void ContactWindow::initContactTable() {
    QString dataFolderPath = QCoreApplication::applicationDirPath() + "/data";
    QDir().mkpath(dataFolderPath);

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(dataFolderPath + "/demo.db");
    database.open();
    if(!database.tables().contains("contact")) {
        query = new QSqlQuery(database);
        bool result = query->exec("CREATE TABLE contact (id INTEGER PRIMARY KEY, first_name varchar, last_name varchar, phone varchar, age int)");
        if(!result) {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    database.close();
}

void ContactWindow::handleselectedItem(QListWidgetItem *item) {
    selectedItem = item;
}

bool ContactWindow::addContact() {
    database.open();
    query = new QSqlQuery(database);
    query->prepare("INSERT INTO contact (first_name, last_name, phone, age) values (:first_name, :last_name, :phone, :age)");
    query->bindValue(":first_name", firstNameEdit->text());
    query->bindValue(":last_name", lastNameEdit->text());
    query->bindValue(":age", ageEdit->text());
    query->bindValue(":phone", phoneEdit->text());
    bool result = query->exec();
    if(!result) {
        error = query->lastError();
        qDebug() << error.text();
    }
    return result;
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
    if(addContact()) {
        qListWidget->addItem(*new QString(firstNameEdit->text() + " "+ lastNameEdit->text() + " "+ phoneEdit->text() + " "+ ageEdit->text()));

        firstNameEdit->setText("");
        lastNameEdit->setText("");
        phoneEdit->setText(nullptr);
        ageEdit->setValue(0);
    }

    //messageBox.exec();
}


ContactWindow::~ContactWindow() {
    delete ui;
    //delete selectedItem;
}

