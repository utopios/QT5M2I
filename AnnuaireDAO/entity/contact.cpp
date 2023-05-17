//
// Created by ihab on 17/05/2023.
//

#include "contact.h"

Contact::Contact(const int id,const QString &firstName, const QString &lastName, const QString &phone, const int age): id_(id), firstName_(firstName), lastName_(lastName), phone_(phone), age_(age) {}

QString Contact::firstName() const {return firstName_;}

QString Contact::lastName() const {return lastName_;}

QString Contact::phone() const {return phone_;}

int Contact::age() const {return age_;}

int Contact::id() const {return id_;}