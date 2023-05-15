#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QFormLayout>
#include "mainwindow.h"
#include "demosignal/Button.h"
#include "demosignal/Light.h"

//Fonction de l'exercice 1
static QWidget* createLineWidget(QString content, int yPosition, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QLabel* label = new QLabel(content, widget);
    label->resize(100, 30);
    QLineEdit* nameLineEdit = new QLineEdit(widget);
    nameLineEdit->resize(100, 30);
    nameLineEdit->move(100, 0);
    widget->move(0, yPosition);
    return widget;
}

static QWidget* createSpinBoxWidget(QString content, int yPosition, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QLabel* label = new QLabel(content, widget);
    label->resize(100, 30);
    QSpinBox* spinBox = new QSpinBox(widget);
    spinBox->resize(100, 30);
    spinBox->move(100, 0);
    widget->move(0, yPosition);
    return widget;
}

static QWidget* createButtonWidget(QString content, int yPosition, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QPushButton* button = new QPushButton(content, widget);
    button->resize(200, 30);
    widget->move(0, yPosition);
    return widget;
}


//Fonction de l'exercice 2

static QWidget* createLineWidget(QString content, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QHBoxLayout* qhBoxLayout = new QHBoxLayout(widget);
    QLabel* label = new QLabel(content, widget);
    QLineEdit* nameLineEdit = new QLineEdit(widget);
    qhBoxLayout->addWidget(label);
    qhBoxLayout->addWidget(nameLineEdit);
    return widget;
}

static QWidget* createSpinBoxWidget(QString content,QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QHBoxLayout* qhBoxLayout = new QHBoxLayout(widget);
    QLabel* label = new QLabel(content, widget);
    QSpinBox* spinBox = new QSpinBox(widget);
    qhBoxLayout->addWidget(label);
    qhBoxLayout->addWidget(spinBox);
    return widget;
}

static QWidget* createButtonWidget(QString content, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QHBoxLayout* qhBoxLayout = new QHBoxLayout(widget);
    QPushButton* button = new QPushButton(content, widget);
    qhBoxLayout->addWidget(button);
    return widget;
}



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //QWidget widget;
    // Création des premiers Widgets
//    //widget de type label
//    QLabel label("Content of label", &widget);
//    label.move(300,400);
//    //Widget de type button
//    QPushButton button("Hello world!", &widget);
//    button.resize(200, 100);

////    button.show();

//    QLabel label("Name", &widget);
//    label.resize(100, 30);
//    QLineEdit nameLineEdit(&widget);
//    nameLineEdit.resize(100, 30);
//    nameLineEdit.move(120, 0);
//    QPushButton button("Ok", &widget);
//    button.resize(200,30);
//    button.move(0, 40);
//    widget.show();


//Correction EX1
    /*QWidget mainWidget;
    mainWidget.resize(600,600);
    int position = 0;
    QWidget* firstNameWidget = createLineWidget("First Name", position, &mainWidget);
    //firstNameWidget->setParent(&mainWidget);
    position += 30;
    QWidget* lastNameWidget = createLineWidget("Last Name", position, &mainWidget);
    //lastNameWidget->setParent(&mainWidget);
    position += 30;
    QWidget* phoneWidget = createLineWidget("Phone ", position, &mainWidget);
    //phoneWidget->setParent(&mainWidget);
    position += 30;
    QWidget* ageWidget = createSpinBoxWidget("Age", position, &mainWidget);
    position += 30;
    QWidget* buttonWidget = createButtonWidget("Confirm", position, &mainWidget);
    mainWidget.show();*/

    //Utilisation des QLayouts
    //QWidget mainWidget;

    //QHBoxLayout
//    QHBoxLayout qhBoxLayout(&mainWidget);
//    QPushButton firstButton("First Button", &mainWidget);
//    QPushButton secondButton("Second Button", &mainWidget);
//    QPushButton thirdButton("Third Button", &mainWidget);
//    qhBoxLayout.addWidget(&firstButton);
//    qhBoxLayout.addWidget(&secondButton);
//    qhBoxLayout.addWidget(&thirdButton);

    //QVBoxLayout
//    QVBoxLayout qvBoxLayout(&mainWidget);
//    QPushButton firstButton("First Button", &mainWidget);
//    QPushButton secondButton("Second Button", &mainWidget);
//    QPushButton thirdButton("Third Button", &mainWidget);
//    qvBoxLayout.addWidget(&firstButton);
//    qvBoxLayout.addWidget(&secondButton);
//    qvBoxLayout.addWidget(&thirdButton);

    //QGridLayout
//    QGridLayout qGridLayout(&mainWidget);
//    QPushButton firstButton("First Button", &mainWidget);
//    QPushButton secondButton("Second Button", &mainWidget);
//    QPushButton thirdButton("Third Button", &mainWidget);
//    qGridLayout.addWidget(&firstButton, 0,0);
//    qGridLayout.addWidget(&secondButton, 1,0, 1, 2);
//    qGridLayout.addWidget(&thirdButton, 2,1);
//    qGridLayout.setVerticalSpacing(0);
//    qGridLayout.setHorizontalSpacing(0);

    //QFormLayout
//    QFormLayout formLayout(&mainWidget);
//    QLineEdit edit(&mainWidget);
//    formLayout.addRow("label", &edit);
//    QPushButton button("b", &mainWidget);
//    formLayout.addWidget(&button);
//    mainWidget.show();

    //Correction Exercice 2
    //Avec VBox et HBox
//    QVBoxLayout qvBoxLayout(&mainWidget);
//    QWidget* firstNameWidget = createLineWidget("First Name", &mainWidget);
//    QWidget* lastNameWidget = createLineWidget("Last Name", &mainWidget);
//    QWidget* phoneWidget = createLineWidget("Phone ", &mainWidget);
//    QWidget* ageWidget = createSpinBoxWidget("Age", &mainWidget);
//    QWidget* buttonWidget = createButtonWidget("Confirm", &mainWidget);
//    qvBoxLayout.addWidget(firstNameWidget);
//    qvBoxLayout.addWidget(lastNameWidget);
//    qvBoxLayout.addWidget(phoneWidget);
//    qvBoxLayout.addWidget(ageWidget);
//    qvBoxLayout.addWidget(buttonWidget);

//    QFormLayout formLayout(&mainWidget);
//    QLineEdit* firstNameLineEdit = new QLineEdit(&mainWidget);
//    QLineEdit* lastNameLineEdit = new QLineEdit(&mainWidget);
//    QLineEdit* phoneLineEdit = new QLineEdit(&mainWidget);
//    QSpinBox* ageSpinBox = new QSpinBox(&mainWidget);
//    QWidget* buttonWidget = createButtonWidget("Confirm", &mainWidget);
//    formLayout.addRow("First name", firstNameLineEdit);
//    formLayout.addRow("last name", lastNameLineEdit);
//    formLayout.addRow("phone", phoneLineEdit);
//    formLayout.addRow("age", ageSpinBox);
//    formLayout.addWidget(buttonWidget);
//    mainWidget.show();

//     Utilisation d'une mainWindow
    MainWindow mainWindow;
    mainWindow.show();

    //Démo signal et slot
//    Button button;
//    Light light;
//    QObject::connect(&button, &Button::clicked, &light, &Light::detectLight);
//    button.click();
//    button.click();
//    button.click();
    return QApplication::exec();
}
