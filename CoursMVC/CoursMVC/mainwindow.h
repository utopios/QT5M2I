#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QLineEdit>
#include <QListView>
#include <QTableView>
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
    QSqlTableModel* model;
    QLineEdit* line;
    QListView* listView;
    QTableView* tableView;

private slots:
    void handleAdd();
    void handleDelete();
};
#endif // MAINWINDOW_H
