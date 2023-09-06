//
// Created by newbi on 2023-07-12.
//

#ifndef SUMMER_CENTS_H
#define SUMMER_CENTS_H
class Cents{
    long amount =0;
public:
    Cents() = default;
    Cents(long amount) : amount(amount){}
    explicit operator int() const{
        return static_cast<int>(amount);
    }
};

#endif //SUMMER_CENTS_H
