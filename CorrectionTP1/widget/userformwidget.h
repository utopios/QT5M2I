//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_USERFORMWIDGET_H
#define CORRECTIONTP1_USERFORMWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class UserFormWidget; }
QT_END_NAMESPACE

class UserFormWidget : public QWidget {
Q_OBJECT

public:
    explicit UserFormWidget(QWidget *parent = nullptr);

    ~UserFormWidget() override;

private:
    Ui::UserFormWidget *ui;
};


#endif //CORRECTIONTP1_USERFORMWIDGET_H
