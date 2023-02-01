//
// Created by Carlos R. Arias on 2/1/23.
//

#include "person.h"

#include <sstream>
using std::stringstream;

bool Person::Equals(const Person &p) const {
    return _id == p._id;
}

Person::Person(const string &name, unsigned int age, unsigned int id) {
    _name = name;
    _age = age;
    _id = id;
}

string Person::ToString() const {
    stringstream ss;
    ss << _name << ", " << _age << ", " << _id;
    return ss.str();
}

void Person::Birthday() {
    _age++;
}
