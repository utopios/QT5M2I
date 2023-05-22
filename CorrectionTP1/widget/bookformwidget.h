//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOKFORMWIDGET_H
#define CORRECTIONTP1_BOOKFORMWIDGET_H

#include <QWidget>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include "../entity/Book.h"


QT_BEGIN_NAMESPACE
namespace Ui { class BookFormWidget; }
QT_END_NAMESPACE

class BookFormWidget : public QWidget {
Q_OBJECT

public:
    explicit BookFormWidget(QWidget *parent = nullptr);

    ~BookFormWidget() override;

signals:
    void bookAdded(Book& book);

private:
    Ui::BookFormWidget *ui;
    QFormLayout* formLayout;
    QLineEdit* titleEdit;
    QLineEdit* isbnEdit;
    QLineEdit* authorEdit;
    QPushButton* addButton;
    QPushButton* deleteButton;
    Book* selectedBook;
public slots:
    void getBookToDelete(Book& book);
private slots:
    void handleAddButton();
    void handleDeleteButton();

};


#endif //CORRECTIONTP1_BOOKFORMWIDGET_H
