/********************************************************************************
** Form generated from reading UI file 'LoanPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANPAGE_H
#define UI_LOANPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanPage
{
public:

    void setupUi(QWidget *LoanPage)
    {
        if (LoanPage->objectName().isEmpty())
            LoanPage->setObjectName(QString::fromUtf8("LoanPage"));
        LoanPage->resize(400, 300);

        retranslateUi(LoanPage);

        QMetaObject::connectSlotsByName(LoanPage);
    } // setupUi

    void retranslateUi(QWidget *LoanPage)
    {
        LoanPage->setWindowTitle(QCoreApplication::translate("LoanPage", "LoanPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoanPage: public Ui_LoanPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANPAGE_H
