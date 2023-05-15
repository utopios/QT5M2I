#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QFormLayout>

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
    QWidget mainWidget;

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
    QFormLayout formLayout(&mainWidget);
    QLineEdit edit(&mainWidget);
    formLayout.addRow("label", &edit);
    QPushButton button("b", &mainWidget);
    formLayout.addWidget(&button);
    mainWidget.show();
    return QApplication::exec();
}
