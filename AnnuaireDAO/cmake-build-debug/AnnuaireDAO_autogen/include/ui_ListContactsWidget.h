/********************************************************************************
** Form generated from reading UI file 'ListContactsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTCONTACTSWIDGET_H
#define UI_LISTCONTACTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListContactsWidget
{
public:

    void setupUi(QWidget *ListContactsWidget)
    {
        if (ListContactsWidget->objectName().isEmpty())
            ListContactsWidget->setObjectName(QString::fromUtf8("ListContactsWidget"));
        ListContactsWidget->resize(400, 300);

        retranslateUi(ListContactsWidget);

        QMetaObject::connectSlotsByName(ListContactsWidget);
    } // setupUi

    void retranslateUi(QWidget *ListContactsWidget)
    {
        ListContactsWidget->setWindowTitle(QCoreApplication::translate("ListContactsWidget", "ListContactsWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListContactsWidget: public Ui_ListContactsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTCONTACTSWIDGET_H
