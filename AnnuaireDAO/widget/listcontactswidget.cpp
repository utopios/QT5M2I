//
// Created by ihab on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ListContactsWidget.h" resolved

#include "listcontactswidget.h"
#include "ui_ListContactsWidget.h"


ListContactsWidget::ListContactsWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::ListContactsWidget) {
    ui->setupUi(this);
    createContent();
}

void ListContactsWidget::createContent() {
    qListWidget = new QListWidget(this);

    deleteButton = new QPushButton("delete", this);
}

ListContactsWidget::~ListContactsWidget() {
    delete ui;
}

