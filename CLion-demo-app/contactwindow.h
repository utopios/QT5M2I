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
#include <QListWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


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
    QPushButton* deleteButton;
    QLineEdit* firstNameEdit;
    QLineEdit* lastNameEdit;
    QLineEdit* phoneEdit;
    QSpinBox* ageEdit;
    QListWidget* qListWidget;
    QListWidgetItem* selectedItem;
    QSqlDatabase database;
    QSqlQuery* query;
    QSqlError error;
    void createContent();
    void initContactTable();
    int addContact();
    void getContacts();
    bool deleteContact(int id);

private slots:
    void handleValidButton();
    void handleDeleteSelectedItem();
    void handleselectedItem(QListWidgetItem* item);
};


#endif //CLION_DEMO_APP_CONTACTWINDOW_H
