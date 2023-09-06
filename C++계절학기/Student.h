//
// Created by newbi on 2023-07-18.
//

#ifndef SUMMER_STUDENT_H
#define SUMMER_STUDENT_H
#include<iostream>
#include<memory>
#include<string>
using namespace std;

template<typename T, typename... Args>
unique_ptr<T> my_make_unique(Args &&... args){
    return make_unique<T>(std::forward<Args>(args)...);
}


class Student{
    string name;
    int grade;
public:
    Student(string name,int grade):name(name),grade(grade){}
    friend ostream& operator<<(ostream& os, const Student s){
        os<< s.name <<endl;
        return os;
    }
};

#endif //SUMMER_STUDENT_H
