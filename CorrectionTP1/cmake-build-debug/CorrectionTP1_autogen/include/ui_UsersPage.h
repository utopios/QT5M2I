/********************************************************************************
** Form generated from reading UI file 'UsersPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSPAGE_H
#define UI_USERSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsersPage
{
public:

    void setupUi(QWidget *UsersPage)
    {
        if (UsersPage->objectName().isEmpty())
            UsersPage->setObjectName(QString::fromUtf8("UsersPage"));
        UsersPage->resize(400, 300);

        retranslateUi(UsersPage);

        QMetaObject::connectSlotsByName(UsersPage);
    } // setupUi

    void retranslateUi(QWidget *UsersPage)
    {
        UsersPage->setWindowTitle(QCoreApplication::translate("UsersPage", "UsersPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsersPage: public Ui_UsersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSPAGE_H
