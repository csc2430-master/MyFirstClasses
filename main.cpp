#include "point.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
    Point p;
    p.SetX(1);
    p.SetY(3);
    cout << p.ToString() << endl;
    return 0;
}
