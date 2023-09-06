//
// Created by newbi on 2023-07-12.
//

#ifndef SUMMER_FUNCTORSTUDENT_H
#define SUMMER_FUNCTORSTUDENT_H

using namespace std;
#include <string>



#include <iostream>
#include <string>
#include <tuple>
#include<vector>
#include <algorithm>
enum GRADE {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class FunctorStudent {
public:
    FunctorStudent(std::string name, GRADE grade) : name(name), grade(grade) {}

    friend std::ostream& operator << (std::ostream& os, const FunctorStudent& s){
        os << s.grade << "학년, " << s.name;
        return os;
    }

  friend class Compare;
    class Compare{
    public:
        bool operator()(const FunctorStudent& t1, const FunctorStudent & t2){
            return t1.grade < t2.grade;
        }
    };

private:
    std::string name;
    GRADE grade;
};




#endif //SUMMER_FUNCTORSTUDENT_H
