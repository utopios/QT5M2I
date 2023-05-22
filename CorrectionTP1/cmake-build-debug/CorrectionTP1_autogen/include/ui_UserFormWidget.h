/********************************************************************************
** Form generated from reading UI file 'UserFormWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFORMWIDGET_H
#define UI_USERFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserFormWidget
{
public:

    void setupUi(QWidget *UserFormWidget)
    {
        if (UserFormWidget->objectName().isEmpty())
            UserFormWidget->setObjectName(QString::fromUtf8("UserFormWidget"));
        UserFormWidget->resize(400, 300);

        retranslateUi(UserFormWidget);

        QMetaObject::connectSlotsByName(UserFormWidget);
    } // setupUi

    void retranslateUi(QWidget *UserFormWidget)
    {
        UserFormWidget->setWindowTitle(QCoreApplication::translate("UserFormWidget", "UserFormWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserFormWidget: public Ui_UserFormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFORMWIDGET_H
