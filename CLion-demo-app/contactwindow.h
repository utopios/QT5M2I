//
// Created by ihab on 16/05/2023.
//

#ifndef CLION_DEMO_APP_CONTACTWINDOW_H
#define CLION_DEMO_APP_CONTACTWINDOW_H

#include <QMainWindow>
#include <QFormLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>


QT_BEGIN_NAMESPACE
namespace Ui { class ContactWindow; }
QT_END_NAMESPACE

class ContactWindow : public QMainWindow {
Q_OBJECT

public:
    explicit ContactWindow(QWidget *parent = nullptr);
    ~ContactWindow() override;

private:
    Ui::ContactWindow *ui;
    QWidget* mainWidget;
    QFormLayout* formLayout;
    QPushButton* validButton;
    QLineEdit* firstNameEdit;
    QLineEdit* lastNameEdit;
    QLineEdit* phoneEdit;
    QSpinBox* ageEdit;
    void createContent();

private slots:
    void handleValidButton();
};


#endif //CLION_DEMO_APP_CONTACTWINDOW_H
