//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_MAINWINDOW_H
#define CORRECTIONTP1_MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "page/bookspage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QStackedWidget* mainWidget;
    BooksPage* booksPage;
    void createContent();
};


#endif //CORRECTIONTP1_MAINWINDOW_H
