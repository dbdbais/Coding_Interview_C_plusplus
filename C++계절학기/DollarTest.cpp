//
// Created by newbi on 2023-07-12.
//

#include <iostream>
#include "Dollars.h"
#include "Cents.h"
int main() {
    Dollars dollar {1};
    Cents cent = (Cents) dollar;
    std::cout << (int) cent << std::endl;
}