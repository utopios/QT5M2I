//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOKSPAGE_H
#define CORRECTIONTP1_BOOKSPAGE_H

#include <QWidget>
#include "../widget/bookformwidget.h"
#include "../widget/bookswidget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class BooksPage; }
QT_END_NAMESPACE

class BooksPage : public QWidget {
Q_OBJECT

public:
    explicit BooksPage(QWidget *parent = nullptr);

    ~BooksPage() override;

private:
    Ui::BooksPage *ui;
    QWidget* mainWidget;
    BookFormWidget* formWidget;
    BooksWidget* booksWidget;

    void createContent();
};


#endif //CORRECTIONTP1_BOOKSPAGE_H
