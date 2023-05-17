//
// Created by ihab on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ListContactsWidget.h" resolved

#include <QVBoxLayout>
#include "listcontactswidget.h"
#include "ui_ListContactsWidget.h"


ListContactsWidget::ListContactsWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::ListContactsWidget) {
    ui->setupUi(this);
    createContent();
}

void ListContactsWidget::createContent() {
    //qListWidget = new QListWidget(this);
    QVBoxLayout* boxLayout = new QVBoxLayout(this);
    tableWidget = new QTableWidget(this);
    QStringList headers;
    headers << "First Name" << "Last Name" << "Phone" << "Age";
    tableWidget->setHorizontalHeaderLabels(headers);
    deleteButton = new QPushButton("delete", this);
    boxLayout->addWidget(tableWidget);
    boxLayout->addWidget(deleteButton);
}

void ListContactsWidget::handleContactAdded(Contact &contact) {
    //qListWidget->addItem(new QListWidgetItem(*new QString( QString::number(contact.id()) +":"+contact.firstName() + " "+ contact.lastName() + " "+ contact.phone() + " "+ contact.age()), qListWidget, contact.id()));
    tableWidget->setRowCount(contact.id());
    tableWidget->setItem(contact.id()-1, 0, new QTableWidgetItem(contact.firstName()));
    tableWidget->setItem(contact.id()-1, 1, new QTableWidgetItem(contact.lastName()));
    tableWidget->setItem(contact.id()-1, 2, new QTableWidgetItem(contact.phone()));
    tableWidget->setItem(contact.id()-1, 3, new QTableWidgetItem(contact.age()));
}

ListContactsWidget::~ListContactsWidget() {
    delete ui;
}

