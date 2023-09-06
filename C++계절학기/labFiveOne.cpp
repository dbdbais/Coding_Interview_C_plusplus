//
// Created by newbi on 2023-07-10.
//

#include<iostream>
using namespace std;
enum class Grade{FRESH =1, SOPHOMORE, JUNIOR, SENIOR};
Grade& operator++(Grade & grade){
    return grade = (grade != Grade::SENIOR) ? Grade(static_cast<int>(grade)+1): Grade::SENIOR;
}
class Complex{
    double re,im;
    double getMagnitude() const{
        return (re*re + im*im);
    }
public:

    Complex(double re = 0.0 , double im = 0.0):re(re),im(im){}
    Complex operator+(const Complex &c) const {
        return Complex(re+c.re,im+c.im);
    }
    Complex& operator++(){
        re++;
        return *this;
    }
    Complex operator++(int){
        return Complex(re++,im);
    }
    bool operator ==(const Complex &c) {
        return (re == c.re && im == c.im);
    }
    bool operator !=(const Complex &c){
        return !operator==(c);
    }
    operator double() const {
        return getMagnitude();
    }

    friend ostream& operator << (ostream& os, const Complex& c);
    friend istream& operator >> (istream& is , Complex& c);
};
ostream& operator<< (ostream & os, const Complex& c){
    os << c.re <<" + "<< c.im<< "i";
    return os;
}
istream& operator>> (istream& is, Complex& c){
    is >> c.re>> c.im;
    return is;
}
int main(){
    Complex c1(2,0);
    Complex c2(0,1);
    double re1 (8+c1);
    cout<< (double)c1 << endl;

}