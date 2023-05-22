//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_BOOKFORMWIDGET_H
#define CORRECTIONTP1_BOOKFORMWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class BookFormWidget; }
QT_END_NAMESPACE

class BookFormWidget : public QWidget {
Q_OBJECT

public:
    explicit BookFormWidget(QWidget *parent = nullptr);

    ~BookFormWidget() override;

private:
    Ui::BookFormWidget *ui;
};


#endif //CORRECTIONTP1_BOOKFORMWIDGET_H
