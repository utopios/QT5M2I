/********************************************************************************
** Form generated from reading UI file 'taskwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKWINDOW_H
#define UI_TASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TaskWindow)
    {
        if (TaskWindow->objectName().isEmpty())
            TaskWindow->setObjectName(QString::fromUtf8("TaskWindow"));
        TaskWindow->resize(800, 600);
        menubar = new QMenuBar(TaskWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        TaskWindow->setMenuBar(menubar);
        centralwidget = new QWidget(TaskWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TaskWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TaskWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TaskWindow->setStatusBar(statusbar);

        retranslateUi(TaskWindow);

        QMetaObject::connectSlotsByName(TaskWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TaskWindow)
    {
        TaskWindow->setWindowTitle(QCoreApplication::translate("TaskWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskWindow: public Ui_TaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWINDOW_H
