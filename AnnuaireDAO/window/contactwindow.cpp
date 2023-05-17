//
// Created by ihab on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ContactWindow.h" resolved

#include "contactwindow.h"
#include "ui_ContactWindow.h"


ContactWindow::ContactWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::ContactWindow) {
    ui->setupUi(this);
    mainWidget = new QWidget();
    qvBoxLayout = new QVBoxLayout(mainWidget);
    formWidget = new FormWidget(mainWidget);
    listContactsWidget = new ListContactsWidget(mainWidget);
    QObject::connect(formWidget, &FormWidget::contactAdded, listContactsWidget, &ListContactsWidget::handleContactAdded);
    qvBoxLayout->addWidget(formWidget);
    qvBoxLayout->addWidget(listContactsWidget);
    setCentralWidget(mainWidget);
}

ContactWindow::~ContactWindow() {
    delete ui;
}

