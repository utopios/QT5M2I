#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include <QTableView>
#include "booksmodel.h";
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWidget* mainWidget;
    QFormLayout* formLayout;
    QLineEdit* titleEdit;
    QLineEdit* isbnEdit;
    QLineEdit* authorEdit;
    QPushButton* addButton;
    QPushButton* submitButton;
    QPushButton* deleteButton;
    QTableView* booksView;
    BooksModel* booksModel;
    void createContent();
private slots:
    void handleSubmit();
    void handleDelete();
    void handleAdd();
};
#endif // MAINWINDOW_H
