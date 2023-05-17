//
// Created by ihab on 17/05/2023.
//

#include "contact.h"

Contact::Contact(const QString firstName, const QString lastName, const QString phone, const int age): firstName_(firstName), lastName_(lastName), phone_(phone), age_(age) {}

QString Contact::firstName() const {return firstName_;}

QString Contact::lastName() const {return lastName_;}

QString Contact::phone() const {return phone_;}

int Contact::age() const {return age_;}