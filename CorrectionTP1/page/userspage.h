//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_USERSPAGE_H
#define CORRECTIONTP1_USERSPAGE_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class UsersPage; }
QT_END_NAMESPACE

class UsersPage : public QWidget {
Q_OBJECT

public:
    explicit UsersPage(QWidget *parent = nullptr);

    ~UsersPage() override;

private:
    Ui::UsersPage *ui;
};


#endif //CORRECTIONTP1_USERSPAGE_H
