
#include "Person.h"
#include<algorithm>
Person::Person(std::string name, std::string number) {
    this->name =name;
    this->number = number;
}
void Person::modifyNumber(string number) {
    this->number = number;
}
void Person::print() const {
        cout<< this->name <<" "<<this->number<<endl;
}
