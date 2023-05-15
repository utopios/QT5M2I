#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>

static QWidget* createLineWidget(QString content, int xPosition, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QLabel* label = new QLabel(content, widget);
    label->resize(100, 30);
    QLineEdit* nameLineEdit = new QLineEdit(widget);
    nameLineEdit->resize(100, 30);
    nameLineEdit->move(xPosition, 0);
    widget->move(0, xPosition);
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
    QWidget mainWidget;
    int position = 0;
    QWidget* firstNameWidget = createLineWidget("First Name", position, &mainWidget);
    //firstNameWidget->setParent(&mainWidget);
    position += 30;
    QWidget* lastNameWidget = createLineWidget("Last Name", position, &mainWidget);
    //lastNameWidget->setParent(&mainWidget);
    position += 60;
    QWidget* phoneWidget = createLineWidget("Phone ", position, &mainWidget);
    //phoneWidget->setParent(&mainWidget);
    mainWidget.show();
    return QApplication::exec();
}
