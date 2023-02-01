#include "point.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
    Point p, q;
    p.SetX(0);
    p.SetY(0);
    q.SetX(1);
    q.SetY(1);
    cout << p.ToString() << endl;
    cout << q.ToString() << endl;
    cout << p.Distance(q) << endl;
    cout << q.Distance(p) << endl;
    return 0;
}
