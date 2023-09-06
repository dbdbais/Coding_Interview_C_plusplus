#include "Checkout.h"
#include <numeric>

int
Checkout::calculateTotalPrice(std::vector<Item>::const_iterator begin, std::vector<Item>::const_iterator end) const {
    return accumulate(begin,end,0,[](int cur,Item item){
        return cur + item.getPrice()*item.getQuantity();
    });
}

void Checkout::setDiscountCode(DiscountCode discountCode) {
    DiscountCode twe = DISCOUNT_20;
    DiscountCode fifty = DISCOUNT_50;
    if(discountCode == twe)
        this->discountCode = twe;
    else
        this->discountCode =fifty;
}

void Checkout::setShippingAddress(const std::string &shippingAddress) {
    this->shippingAddress = shippingAddress;
}