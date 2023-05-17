//
// Created by ihab on 17/05/2023.
//

#ifndef ANNUAIREDAO_CONTACT_H
#define ANNUAIREDAO_CONTACT_H


#include <QString>

class Contact {
public:
    Contact() = default;
    Contact(const int id,const QString& firstName, const QString& lastName, const QString& phone, const int age);
    QString firstName() const;
    QString lastName() const;
    QString phone() const;
    int age() const;
    int id() const;
    void setId(const int id);

private:
    QString firstName_;
    QString lastName_;
    QString phone_;
    int age_;
    int id_;
};


#endif //ANNUAIREDAO_CONTACT_H
