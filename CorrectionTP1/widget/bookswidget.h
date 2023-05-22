//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOKSWIDGET_H
#define CORRECTIONTP1_BOOKSWIDGET_H

#include <QWidget>


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
};


#endif //CORRECTIONTP1_BOOKSWIDGET_H
