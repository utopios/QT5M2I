/********************************************************************************
** Form generated from reading UI file 'FormWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWIDGET_H
#define UI_FORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormWidget
{
public:

    void setupUi(QWidget *FormWidget)
    {
        if (FormWidget->objectName().isEmpty())
            FormWidget->setObjectName(QString::fromUtf8("FormWidget"));
        FormWidget->resize(400, 300);

        retranslateUi(FormWidget);

        QMetaObject::connectSlotsByName(FormWidget);
    } // setupUi

    void retranslateUi(QWidget *FormWidget)
    {
        FormWidget->setWindowTitle(QCoreApplication::translate("FormWidget", "FormWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormWidget: public Ui_FormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWIDGET_H
