//
// Created by ihab on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ContactWindow.h" resolved

#include "contactwindow.h"
#include "ui_ContactWindow.h"
#include <QMenuBar>

ContactWindow::ContactWindow(QSqlDatabase database, QWidget *parent) :
        QMainWindow(parent), ui(new Ui::ContactWindow), db_(database) {
    ui->setupUi(this);

    //Ajout d'un menu dans une mainwindow
    QMenu* menu = menuBar()->addMenu("Contacts");
    QAction* action1 = new QAction("Formulaire", this);
    QAction* action2 = new QAction("Liste", this);
    menu->addAction(action1);
    menu->addAction(action2);



    mainWidget = new QStackedWidget();
    //qvBoxLayout = new QVBoxLayout(mainWidget);
    formWidget = new FormWidget(db_,mainWidget);
    listContactsWidget = new ListContactsWidget(mainWidget);
    mainWidget->addWidget(formWidget);
    mainWidget->addWidget(listContactsWidget);

    QObject::connect(action1, &QAction::triggered, [&]() {mainWidget->setCurrentIndex(0);});
    QObject::connect(action2, &QAction::triggered, [&]() {mainWidget->setCurrentIndex(1);});

//    qvBoxLayout->addWidget(formWidget);
//    qvBoxLayout->addWidget(listContactsWidget);

    QObject::connect(formWidget, &FormWidget::contactAdded, listContactsWidget, &ListContactsWidget::handleContactAdded);

    setCentralWidget(mainWidget);
}

ContactWindow::~ContactWindow() {
    delete ui;
}

