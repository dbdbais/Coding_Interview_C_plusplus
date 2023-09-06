#include "Rectangle.h"
#include <cmath>
Rectangle::Rectangle(double x1, double y1, double x2, double y2): leftTop(x1,y1), rightBottom(x2,y2) {
}
double Rectangle::area() const{
    double width = abs(leftTop.getX() - rightBottom.getX());
    double height = abs(leftTop.getY() - rightBottom.getY());
    return width * height;
}
