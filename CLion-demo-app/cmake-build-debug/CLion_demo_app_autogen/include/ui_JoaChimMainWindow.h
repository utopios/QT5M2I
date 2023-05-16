/********************************************************************************
** Form generated from reading UI file 'JoaChimMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOACHIMMAINWINDOW_H
#define UI_JOACHIMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE

class Ui_JoaChimMainWindow
{
public:

    void setupUi(QMainWindow *JoaChimMainWindow)
    {
        if (JoaChimMainWindow->objectName().isEmpty())
            JoaChimMainWindow->setObjectName(QString::fromUtf8("JoaChimMainWindow"));
        JoaChimMainWindow->resize(400, 300);

        retranslateUi(JoaChimMainWindow);

        QMetaObject::connectSlotsByName(JoaChimMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *JoaChimMainWindow)
    {
        JoaChimMainWindow->setWindowTitle(QCoreApplication::translate("JoaChimMainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoaChimMainWindow: public Ui_JoaChimMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOACHIMMAINWINDOW_H
