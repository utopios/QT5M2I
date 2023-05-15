//
// Created by ihab on 15/05/2023.
//

#ifndef CLION_DEMO_APP_MAINWINDOW_H
#define CLION_DEMO_APP_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void createContent();
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QWidget* widget;
    QPushButton* qPushButton;
    QLineEdit* nameLineEdit;

private slots:
        void handleClickButton();
};


#endif //CLION_DEMO_APP_MAINWINDOW_H
