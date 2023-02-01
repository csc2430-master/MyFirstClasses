//
// Created by Carlos R. Arias on 2/1/23.
//

#include "point.h"
#include <sstream>
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