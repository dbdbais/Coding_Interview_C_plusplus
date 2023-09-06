#include "Cart.h"
#include<algorithm>
#include <iostream>
using namespace std;

int Cart::checkout() {
    return checkout_->calculateTotalPrice(cbegin(),cend());
}

void Cart::addItem(const Item &item) {
    items.push_back(item);
}

void Cart::deleteItem(int id) {
    auto found = find_if(items.begin(),items.end(),[=](Item i){
       return i.getId() == id;
    });
    if(found!= items.end()) {
        items.erase(remove_if(items.begin(), items.end(), [=](Item item) {
            return item.getId() == id;
        }));
    }
}

void Cart::viewItemDetails(int id, std::ostream &out) const {
    auto found = find_if(cbegin(),cend(),[=](Item i){
        return i.getId() == id;
    });
    if(found != items.end()) {
        out << "Item " << found->getId() << ":" << endl;
        out << "Name: " << found->getName() << endl;
        out << "Quantity: " << found->getQuantity() << endl;
        out << "Price: " << found->getPrice() << endl;
    }
    else{
        out << "Item not found."<<endl;
    }
}

const_iterator Cart::cbegin() const {
    return items.cbegin();
}

const_iterator Cart::cend() const {
    return items.cend();
}