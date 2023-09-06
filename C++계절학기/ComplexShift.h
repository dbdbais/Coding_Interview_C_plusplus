//
// Created by newbi on 2023-07-10.
//
#include <iostream>
using namespace std;
class Complex {
public:
    Complex(double real, double img) {
        this->real = new double(real);
        this->imaginary = new double(img);
    }

    Complex(const Complex &c) {
        this->real = new double(*(c.real));
        this->imaginary = new double(*(c.imaginary));
    }
    Complex& operator=(const Complex &c) {
        this->real = new double(*(c.real));
        this->imaginary = new double(*(c.imaginary));
        return *this;
    }
    Complex operator+(const Complex c){
        return Complex(*(real)+*(c.real),*(imaginary)+*(c.imaginary));
    }
    Complex operator-(const Complex c){
        return Complex(*(real)-*(c.real),*(imaginary)-*(c.imaginary));
    }
    friend ostream& operator<<(ostream & os,const Complex c){
        os<< *c.real <<" + "<<*c.imaginary<<"i"<<endl;
        return os;
    }
private:
    double * real;
    double * imaginary;
};
