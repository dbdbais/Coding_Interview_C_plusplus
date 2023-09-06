//
// Created by newbi on 2023-07-10.
//
#include "Faculty.h"
using namespace std;

#ifndef SUMMER_DEPARTMENT_H
#define SUMMER_DEPARTMENT_H
class Department{
    string name;
    Faculty *faculty;
public:
    Department(string name,Faculty *faculty = nullptr):name{name},faculty(faculty){
        if(faculty == nullptr){
            faculty = new Faculty();
        }
    }
    void setFaculty(Faculty *fa){
        this->faculty = fa;
    }
    Faculty getFaculty(){
        return *faculty;
    }
    string getName(){
        return name;
    }

};

#endif //SUMMER_DEPARTMENT_H
