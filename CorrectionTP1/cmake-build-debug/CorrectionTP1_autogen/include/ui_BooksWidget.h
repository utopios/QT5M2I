/********************************************************************************
** Form generated from reading UI file 'BooksWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSWIDGET_H
#define UI_BOOKSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooksWidget
{
public:

    void setupUi(QWidget *BooksWidget)
    {
        if (BooksWidget->objectName().isEmpty())
            BooksWidget->setObjectName(QString::fromUtf8("BooksWidget"));
        BooksWidget->resize(400, 300);

        retranslateUi(BooksWidget);

        QMetaObject::connectSlotsByName(BooksWidget);
    } // setupUi

    void retranslateUi(QWidget *BooksWidget)
    {
        BooksWidget->setWindowTitle(QCoreApplication::translate("BooksWidget", "BooksWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksWidget: public Ui_BooksWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSWIDGET_H
