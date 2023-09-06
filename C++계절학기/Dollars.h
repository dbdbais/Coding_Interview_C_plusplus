//
// Created by newbi on 2023-07-12.
//
#include"Cents.h"
#ifndef SUMMER_DOLLARS_H
#define SUMMER_DOLLARS_H
class Dollars{
    long amount =0;
public:
    Dollars() = default;
    Dollars(long amount) : amount(amount){}
    explicit operator Cents(){
        return amount *100;
    }
};
#endif //SUMMER_DOLLARS_H
