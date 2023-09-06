//
// Created by newbi on 2023-07-12.
//
#ifndef SUMMER_PERSON_H
#define SUMMER_PERSON_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

class Person {
    std::string name;
    size_t age;
    int id;
public:
   Person(std::string name, size_t age):name(name),age(age){
       static int stID =0;
       id = ++stID;
   }
   class ComparatorByAge{
   public:
       bool operator()(const Person p1, const Person p2){
           return p1.age < p2.age;
       }
   };
   class ComparatorByName{
   public:
       bool operator()(const Person p1, const Person p2){
           return p1.name < p2.name;
       }
   };

   bool operator <(const Person &p) const{
       return id < p.id;
   }

   friend std::ostream& operator<<(std::ostream &os, const Person p){
       os<< p.id <<" "<< p.name << p.age <<std::endl;
       return os;
   }
};


#endif //SUMMER_PERSON_H
