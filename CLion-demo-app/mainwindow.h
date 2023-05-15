//
// Created by ihab on 15/05/2023.
//

#ifndef CLION_DEMO_APP_MAINWINDOW_H
#define CLION_DEMO_APP_MAINWINDOW_H

#include <QMainWindow>


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
};


#endif //CLION_DEMO_APP_MAINWINDOW_H
