#include "point.h"
#include "person.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
    Person a("John", 12, 88393);
    Person b("Patty", 33, 88393);
    Person c("Ann", 17, 22343);
    cout << a.ToString() << endl;
    cout << b.ToString() << endl;
    cout << c.ToString() << endl;
    a.Birthday();
    cout << a.ToString() << endl;
    cout << a.Equals(b) << endl;
    cout << b.Equals(c) << endl;

    return 0;
}
