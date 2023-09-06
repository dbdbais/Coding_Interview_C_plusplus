//
// Created by newbi on 2023-07-19.
//
#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    Person(string name):name(name){
        cout<<"Person is constructed!"<<endl;
    }
    ~Person(){
        cout<<"Person is destructed!"<<endl;
    }
    virtual void print(){
        cout<<"Person Name: "<<name<<endl;
    }
    string getName(){
        return name;
    }
private:
    string name;
};

class Student : public Person{
public:
    Student(string name, string schoolName) : Person(name), schoolName(schoolName) {
        cout<<"Student is constructed!"<<endl;
    }
    ~Student(){
        cout<<"Student is destructed!"<<endl;
    }
    void print(){
        cout<<"Person Name: "<<this->getName()<<endl;
        cout<<"School Name: "<<schoolName<<endl;
    }

private:
    string schoolName;
};

int main() {
    Person p1{"Park"};
    p1.print();

    Student s1{"Kim", "PNU"};
    s1.print();

    return 0;
}