/********************************************************************************
** Form generated from reading UI file 'LoanFormWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANFORMWIDGET_H
#define UI_LOANFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanFormWidget
{
public:

    void setupUi(QWidget *LoanFormWidget)
    {
        if (LoanFormWidget->objectName().isEmpty())
            LoanFormWidget->setObjectName(QString::fromUtf8("LoanFormWidget"));
        LoanFormWidget->resize(400, 300);

        retranslateUi(LoanFormWidget);

        QMetaObject::connectSlotsByName(LoanFormWidget);
    } // setupUi

    void retranslateUi(QWidget *LoanFormWidget)
    {
        LoanFormWidget->setWindowTitle(QCoreApplication::translate("LoanFormWidget", "LoanFormWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoanFormWidget: public Ui_LoanFormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANFORMWIDGET_H
