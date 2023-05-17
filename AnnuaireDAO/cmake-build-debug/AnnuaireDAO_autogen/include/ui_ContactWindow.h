/********************************************************************************
** Form generated from reading UI file 'ContactWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTWINDOW_H
#define UI_CONTACTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE

class Ui_ContactWindow
{
public:

    void setupUi(QMainWindow *ContactWindow)
    {
        if (ContactWindow->objectName().isEmpty())
            ContactWindow->setObjectName(QString::fromUtf8("ContactWindow"));
        ContactWindow->resize(400, 300);

        retranslateUi(ContactWindow);

        QMetaObject::connectSlotsByName(ContactWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ContactWindow)
    {
        ContactWindow->setWindowTitle(QCoreApplication::translate("ContactWindow", "ContactWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactWindow: public Ui_ContactWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTWINDOW_H
