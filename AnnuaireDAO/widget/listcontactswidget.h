//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_LISTCONTACTSWIDGET_H
#define ANNUAIREDAO_LISTCONTACTSWIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include "../entity/contact.h"


QT_BEGIN_NAMESPACE
namespace Ui { class ListContactsWidget; }
QT_END_NAMESPACE

class ListContactsWidget : public QWidget {
Q_OBJECT

public:
    explicit ListContactsWidget(QWidget *parent = nullptr);

    ~ListContactsWidget() override;

private:
    Ui::ListContactsWidget *ui;
    QListWidget* qListWidget;
    QListWidgetItem* selectedItem;
    QPushButton* deleteButton;
    void createContent();

public slots:
    void handleContactAdded(Contact& contact);
};


#endif //ANNUAIREDAO_LISTCONTACTSWIDGET_H
