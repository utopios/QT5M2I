#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QListView>
#include <QStringListModel>
#include <QPushButton>
#include <QInputDialog>
#include <QLineEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget* widget = new QWidget(this);
    QVBoxLayout* boxLayout = new QVBoxLayout(widget);

    //Bouton pour ajouter
    QPushButton* button = new QPushButton("ajouter", this);

    //View
    QListView* listView = new QListView();

    //Model
    QStringListModel* model = new QStringListModel();
    listView->setModel(model);
    model->insertRow(model->rowCount());
    model->setData(model->index(model->rowCount() -1 ), "toto");

    //Ouvrir une boite de dialogue pour modifier le model
    QObject::connect(button, &QPushButton::clicked, [&]() {
        bool ok;
        QString text = QInputDialog::getText(this, "Saisir un element", "Valider", QLineEdit::Normal, "", &ok);
        if(ok) {
            model->insertRow(model->rowCount());
            model->setData(model->index(model->rowCount() -1 ), text);
        }
    });


    boxLayout->addWidget(listView);
    setCentralWidget(widget);


}

MainWindow::~MainWindow()
{
    delete ui;
}

