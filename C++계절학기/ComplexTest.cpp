#include "ComplexShift.h"

int main() {
    Complex c1(3, 2), c2(1, 1);
    Complex c3(c1);
    Complex c4 = c1+c3;
    Complex c5 = c4- c2;
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c4 << std::endl;
    std::cout << c5 << std::endl;
}
