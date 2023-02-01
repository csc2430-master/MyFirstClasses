//
// Created by Carlos R. Arias on 2/1/23.
//

#include "point.h"
#include <sstream>
#include <cmath>
using std::stringstream;

// Getters == Accessors
double Point::GetX()const{
    return _x;
}
double Point::GetY()const{
    return _y;
}
// Setters == mutators
void Point::SetX(double x){
    _x = x;
}
void Point::SetY(double y){
    _y = y;
}
string Point::ToString() const {
    stringstream ss;
    ss << "[" << _x << ", " << _y << "]";
    return ss.str();
}

double Point::Distance(const Point& p) const {
    return sqrt(
            pow(_x - p._x, 2.0) +
            pow(_y - p._y, 2.0)
            );
}
Point::Point(){
    _x = _y = 0.0;
}

Point::Point(double x, double y) {
    _x = x;
    _y = y;
}

