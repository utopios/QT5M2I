//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_FORMWIDGET_H
#define ANNUAIREDAO_FORMWIDGET_H

#include <QWidget>
#include <QFormLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>
#include <QSqlDatabase>
#include "../entity/contact.h"


QT_BEGIN_NAMESPACE
namespace Ui { class FormWidget; }
QT_END_NAMESPACE

class FormWidget : public QWidget {
Q_OBJECT

public:
    explicit FormWidget(QSqlDatabase database, QWidget *parent = nullptr);

    ~FormWidget() override;

signals:
    void contactAdded(Contact& contact);
private:
    QSqlDatabase db_;
    Ui::FormWidget *ui;
    QFormLayout* formLayout;
    QPushButton* validButton;
    QLineEdit* firstNameEdit;
    QLineEdit* lastNameEdit;
    QLineEdit* phoneEdit;
    QSpinBox* ageEdit;
    void createContent();
private slots:
    void handleValidButton();
};


#endif //ANNUAIREDAO_FORMWIDGET_H
