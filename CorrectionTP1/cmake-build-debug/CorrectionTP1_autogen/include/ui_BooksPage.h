/********************************************************************************
** Form generated from reading UI file 'BooksPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSPAGE_H
#define UI_BOOKSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooksPage
{
public:

    void setupUi(QWidget *BooksPage)
    {
        if (BooksPage->objectName().isEmpty())
            BooksPage->setObjectName(QString::fromUtf8("BooksPage"));
        BooksPage->resize(400, 300);

        retranslateUi(BooksPage);

        QMetaObject::connectSlotsByName(BooksPage);
    } // setupUi

    void retranslateUi(QWidget *BooksPage)
    {
        BooksPage->setWindowTitle(QCoreApplication::translate("BooksPage", "BooksPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksPage: public Ui_BooksPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSPAGE_H
