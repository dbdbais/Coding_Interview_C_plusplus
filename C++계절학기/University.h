//
// Created by newbi on 2023-07-10.
//

#ifndef SUMMER_UNIVERSITY_H
#define SUMMER_UNIVERSITY_H
#include "Department.h"
#include <iostream>
using namespace std;
class University{
public:
    University(string name,int numDept):name(name),numDept(numDept){}
    void setDepartments(Department * depts){
        this->depts = depts;
    }

    void printInfo() {
        cout << "University Name: " << name << endl;
        cout << "Number of Departments: " << numDept << endl;

        for (int i = 0; i < numDept; i++) {
            cout << "Department Name: " << depts[i].getName() << endl;
            if (depts[i].getFaculty().getName() == "") {
                cout << "Faculty Name: N/A" << endl;
            } else {
                cout << "Faculty Name: " << depts[i].getFaculty().getName() << endl;
            }
            if (depts[i].getFaculty().getMembers() == -1) {
                cout << "Number of Faculty Members: N/A" << endl;
            } else {
                cout << "Number of Faculty Members: " << depts[i].getFaculty().getMembers() << endl;
            }


        }
    }
private:
    string name;
    int numDept;
    Department* depts;
};
#endif //SUMMER_UNIVERSITY_H
