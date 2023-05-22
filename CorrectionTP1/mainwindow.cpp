//
// Created by ihab on 22/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_MainWindow.h"
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    createContent();
}

void MainWindow::createContent() {
    QMenu* menuLivre = menuBar()->addMenu("Livre");
    QAction* actionLivre = new QAction("Gestion livres", this);
    menuLivre->addAction(actionLivre);

    mainWidget = new QStackedWidget(this);
    booksPage = new BooksPage(mainWidget);
    mainWidget->addWidget(booksPage);
    QObject::connect(actionLivre, &QAction::triggered, [&]() {mainWidget->setCurrentIndex(0);});
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow() {
    delete ui;
}

