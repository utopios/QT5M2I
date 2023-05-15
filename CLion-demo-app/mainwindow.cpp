//
// Created by ihab on 15/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include <QPushButton>
#include "mainwindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QWidget* widget = new QWidget(parent);
    QPushButton*  button = new QPushButton("B1", widget);
    setCentralWidget(widget);
}

MainWindow::~MainWindow() {
    delete ui;
}

