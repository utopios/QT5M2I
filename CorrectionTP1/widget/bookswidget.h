//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOKSWIDGET_H
#define CORRECTIONTP1_BOOKSWIDGET_H

#include <QWidget>
#include <QTableWidget>
#include <QSqlDatabase>
#include "../entity/Book.h"


QT_BEGIN_NAMESPACE
namespace Ui { class BooksWidget; }
QT_END_NAMESPACE

class BooksWidget : public QWidget {
Q_OBJECT

public:
    explicit BooksWidget(QWidget *parent = nullptr);

    ~BooksWidget() override;

private:
    Ui::BooksWidget *ui;
    QSqlDatabase db_;
    QTableWidget* tableWidget;
    int count;
    void createContent();

public slots:
    void handleBookAdded(Book& book);
};


#endif //CORRECTIONTP1_BOOKSWIDGET_H
