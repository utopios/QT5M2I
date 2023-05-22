/********************************************************************************
** Form generated from reading UI file 'UsersWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSWIDGET_H
#define UI_USERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsersWidget
{
public:

    void setupUi(QWidget *UsersWidget)
    {
        if (UsersWidget->objectName().isEmpty())
            UsersWidget->setObjectName(QString::fromUtf8("UsersWidget"));
        UsersWidget->resize(400, 300);

        retranslateUi(UsersWidget);

        QMetaObject::connectSlotsByName(UsersWidget);
    } // setupUi

    void retranslateUi(QWidget *UsersWidget)
    {
        UsersWidget->setWindowTitle(QCoreApplication::translate("UsersWidget", "UsersWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsersWidget: public Ui_UsersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSWIDGET_H
