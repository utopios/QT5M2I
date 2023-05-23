#ifndef TASKWINDOW_H
#define TASKWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QLineEdit>
#include <QTableView>
#include <QDateEdit>
#include <QSqlDatabase>
#include <QVBoxLayout>
#include <QPushButton>
namespace Ui {
class TaskWindow;
}

class TaskWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TaskWindow(QWidget *parent = nullptr);
    ~TaskWindow();

private:
    Ui::TaskWindow *ui;
    QWidget* widget;
    QVBoxLayout* boxLayout;
    QSqlTableModel* model;
    QLineEdit* nameLine;
    QDateEdit* dateLine;
    QTableView* tableView;
    QPushButton* addButton;
    QPushButton* submitButton;
    QPushButton* deleteButton;
    void createContent(QSqlDatabase& db);
private slots:
    void handleAdd();
    void handleSubmit();
    void handleDelete();
};

#endif // TASKWINDOW_H
