/********************************************************************************
** Form generated from reading UI file 'LoansWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANSWIDGET_H
#define UI_LOANSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoansWidget
{
public:

    void setupUi(QWidget *LoansWidget)
    {
        if (LoansWidget->objectName().isEmpty())
            LoansWidget->setObjectName(QString::fromUtf8("LoansWidget"));
        LoansWidget->resize(400, 300);

        retranslateUi(LoansWidget);

        QMetaObject::connectSlotsByName(LoansWidget);
    } // setupUi

    void retranslateUi(QWidget *LoansWidget)
    {
        LoansWidget->setWindowTitle(QCoreApplication::translate("LoansWidget", "LoansWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoansWidget: public Ui_LoansWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANSWIDGET_H
