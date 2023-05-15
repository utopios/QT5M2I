//
// Created by ihab on 15/05/2023.
//

#ifndef CLION_DEMO_APP_LIGHT_H
#define CLION_DEMO_APP_LIGHT_H


#include <QObject>
#include <QDebug>
class Light: public QObject {
    Q_OBJECT
public slots:
    void detectLight() {
        isOn = !isOn;
        qDebug() << "The state of light is " << (isOn ? "On": "Off");
    }

private:
    bool isOn = false;
};


#endif //CLION_DEMO_APP_LIGHT_H
