//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_CONTACTWINDOW_H
#define ANNUAIREDAO_CONTACTWINDOW_H

#include <QMainWindow>
#include "../widget/formwidget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class ContactWindow; }
QT_END_NAMESPACE

class ContactWindow : public QMainWindow {
Q_OBJECT

public:
    explicit ContactWindow(QWidget *parent = nullptr);

    ~ContactWindow() override;

private:
    Ui::ContactWindow *ui;
    QWidget* mainWidget;
    FormWidget* formWidget;
};


#endif //ANNUAIREDAO_CONTACTWINDOW_H
