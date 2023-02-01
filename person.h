//
// Created by Carlos R. Arias on 2/1/23.
//

#ifndef MYFIRSTCLASSES_PERSON_H
#define MYFIRSTCLASSES_PERSON_H

#include <string>
using std::string;

class Person {
private:
    string _name;
    unsigned int _age;
    unsigned int _id;
public:
    Person(const string& name, unsigned int age, unsigned int id);
    string ToString()const;
    bool Equals(const Person& p)const;
    void Birthday();
};


#endif //MYFIRSTCLASSES_PERSON_H
