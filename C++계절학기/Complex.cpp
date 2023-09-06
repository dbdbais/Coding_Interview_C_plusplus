#include "Complex.h"
using namespace std;

Complex Complex::operator+(const Complex rhs) {
    Complex temp;
    temp.r = r + rhs.r;
    temp.i = i + rhs.i;
    return temp;
}
Complex Complex::operator-(const Complex rhs){
    Complex temp;
    temp.r = r - rhs.r;
    temp.i = i - rhs.i;
    return temp;
}
std::ostream& operator << (std::ostream& os, const Complex& c){
    os<< c.r<<"+"<<c.i<<"i"<<endl;
    return os;
}