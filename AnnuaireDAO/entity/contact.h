//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_CONTACT_H
#define ANNUAIREDAO_CONTACT_H


#include <QString>

class Contact {
public:
    Contact(const QString& firstName, const QString& lastName, const QString& phone, const int age);
    QString firstName() const;
    QString lastName() const;
    QString phone() const;
    int age() const;

private:
    QString firstName_;
    QString lastName_;
    QString phone_;
    int age_;
};


#endif //ANNUAIREDAO_CONTACT_H
