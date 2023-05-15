#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget widget;
    // Création des premiers Widgets
//    //widget de type label
//    QLabel label("Content of label", &widget);
//    label.move(300,400);
//    //Widget de type button
//    QPushButton button("Hello world!", &widget);
//    button.resize(200, 100);

////    button.show();

    QLabel label("Name", &widget);
    label.resize(100, 30);
    QLineEdit nameLineEdit(&widget);
    nameLineEdit.resize(100, 30);
    nameLineEdit.move(120, 0);
    QPushButton button("Ok", &widget);
    button.resize(200,30);
    button.move(0, 40);
    widget.show();
    return QApplication::exec();
}
