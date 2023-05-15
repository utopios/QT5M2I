//
// Created by ihab on 15/05/2023.
//

#ifndef CLION_DEMO_APP_BUTTON_H
#define CLION_DEMO_APP_BUTTON_H


#include <QObject>

class Button: public QObject{
    Q_OBJECT
public:
    void click() {emit clicked();}
    signals:
    void clicked();
};


#endif //CLION_DEMO_APP_BUTTON_H
