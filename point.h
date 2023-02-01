//
// Created by Carlos R. Arias on 2/1/23.
//

#ifndef MYFIRSTCLASSES_POINT_H
#define MYFIRSTCLASSES_POINT_H

#include <string>
using std::string;

class Point {
private:
    double _x;
    double _y;
public:
//    Point();
    Point(double x, double y);
    double GetX()const;
    double GetY()const;
    void SetX(double x);
    void SetY(double y);
    string ToString()const;
    double Distance(const Point& p)const;
};


#endif //MYFIRSTCLASSES_POINT_H
