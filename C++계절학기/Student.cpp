//
// Created by newbi on 2023-07-10.
//

#include "Student.h"


int Student::getGrade() const {
    return grade;
}

Student &Student::operator=(tuple<int, string, int> tup) {
    id = get<0>(tup);
    name = get<1>(tup);
    grade = get<2>(tup);
    return *this;
}
bool Student::operator<(const Student &other) const {
    return this->name < other.name;
}

ostream& operator << (ostream & os, const Student s){
    os << "Id: "<<s.id<<" Name: "<<s.name<<" Grade: "<<s.grade<<endl;
    return os;
}


bool compareByGrade(const Student& a, const Student& b){
     return a.getGrade() > b.getGrade();
}
