//
// Created by newbi on 2023-07-10.
//

#ifndef SUMMER_FACULTY_H
#define SUMMER_FACULTY_H

#include <string>

using namespace std;

class Faculty{

private:
    string name="";
    int member=0;

public:
    Faculty(){}
    Faculty(string name,int num):name(name),member(num){}
    string getName(){
        return name;
    }
    int getMembers(){
        return member;
    }



};

#endif //SUMMER_FACULTY_H
