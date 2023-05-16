//
// Created by ihab on 15/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include "mainwindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    createContent();
}

void MainWindow::createContent() {
    widget = new QWidget();
    QVBoxLayout* qvBoxLayout = new QVBoxLayout(widget);
    qListView = new QListWidget(widget);
    qPushButton = new QPushButton("B1", widget);
    nameLineEdit = new QLineEdit(widget);
    qvBoxLayout->addWidget(nameLineEdit);
    qvBoxLayout->addWidget(qPushButton);
    qvBoxLayout->addWidget(qListView);
    QObject::connect(qPushButton, &QPushButton::clicked, this, &MainWindow::handleClickButton);
    QObject::connect(qListView, &QListWidget::itemClicked, this, &MainWindow::selectedItem);
    setCentralWidget(widget);
}


void MainWindow::handleClickButton() {
    QMessageBox messageBox;
    messageBox.setText(nameLineEdit->text());
    messageBox.exec();
    qListView->addItem(*new QString(nameLineEdit->text()));

}

void MainWindow::selectedItem(QListWidgetItem *item) {
    QMessageBox messageBox;
    messageBox.setText(item->text());
    messageBox.exec();
}

MainWindow::~MainWindow() {
    delete ui;
    delete widget;
}

