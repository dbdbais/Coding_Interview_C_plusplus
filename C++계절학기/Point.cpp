#include <iostream>
#include <cmath>
#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const {
    return this->x;
}
double Point::norm() const {
    return sqrt(pow(this->x,2) + pow(this->y,2));
}
double Point::getY() const {
    return this->y;
}

