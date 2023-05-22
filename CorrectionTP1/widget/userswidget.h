//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_USERSWIDGET_H
#define CORRECTIONTP1_USERSWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class UsersWidget; }
QT_END_NAMESPACE

class UsersWidget : public QWidget {
Q_OBJECT

public:
    explicit UsersWidget(QWidget *parent = nullptr);

    ~UsersWidget() override;

private:
    Ui::UsersWidget *ui;
};


#endif //CORRECTIONTP1_USERSWIDGET_H
