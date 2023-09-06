//
// Created by newbi on 2023-07-10.
//

#ifndef SUMMER_COMPLEX_H
#define SUMMER_COMPLEX_H
#include <ostream>
#include<algorithm>
#include<iostream>
#include <array>
using namespace std;

template<typename T, size_t N>
auto myFind(array<T,N> & arr,T target){
    auto found = find(arr.begin(),arr.end(),target);
    return found;
}

class Complex {
public:
    Complex(double real=0, double imaginary=0) : r(real), i(imaginary) {};

    Complex operator+(const Complex rhs) {
        Complex temp;
        temp.r = r + rhs.r;
        temp.i = i + rhs.i;
        return temp;
    }
    Complex operator-(const Complex rhs){
        Complex temp;
        temp.r = r - rhs.r;
        temp.i = i - rhs.i;
        return temp;
    }
    bool operator==(const Complex c){
        if(r == c.r && i == c.i){
            return true;
        }
        else
            return false;
    }
    bool operator!=(const Complex c){
        return !(this->operator==(c));
    }

    friend std::ostream& operator << (std::ostream& os, const Complex& c);
private:
    double r{0}, i{0};
};

std::ostream& operator << (std::ostream& os, const Complex& c){
    os<< c.r<<" + "<<c.i<<"i"<<endl;
    return os;
}

#endif //SUMMER_COMPLEX_H
