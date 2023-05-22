/********************************************************************************
** Form generated from reading UI file 'BookFormWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKFORMWIDGET_H
#define UI_BOOKFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookFormWidget
{
public:

    void setupUi(QWidget *BookFormWidget)
    {
        if (BookFormWidget->objectName().isEmpty())
            BookFormWidget->setObjectName(QString::fromUtf8("BookFormWidget"));
        BookFormWidget->resize(400, 300);

        retranslateUi(BookFormWidget);

        QMetaObject::connectSlotsByName(BookFormWidget);
    } // setupUi

    void retranslateUi(QWidget *BookFormWidget)
    {
        BookFormWidget->setWindowTitle(QCoreApplication::translate("BookFormWidget", "BookFormWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookFormWidget: public Ui_BookFormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKFORMWIDGET_H
