//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_EMPLOYEE_H
#define SUMMER_EMPLOYEE_H
#include<iostream>
#include <string>
using namespace std;
class Employee {
public:
    Employee(string name, int salary) : name_(name), salary_(salary) {}
    virtual void print_report() const {
        cout << "Name: " << name_ << endl;
        cout << "Salary: " << salary_ << endl;
        cout << "Years of service: " << years_of_service_ << endl;
        cout << "Performance score: " << performance_score_ << endl;
    }
    string get_name() const {
        return name_;
    }
protected:
    string name_;
    int salary_;
    int years_of_service_ = 0;
    int performance_score_ = 0;
};

class Manager :public Employee{
string dept;
public:
    Manager(string name, int salary,string dept): Employee(name,salary),dept(dept){}
    void print_report() const{
        Employee::print_report();
        cout <<"Department: "<<dept<<endl;
    }
    void set_goals(){
        cout<<"Set goals for "<<dept<<endl;
    }
};
class Programmer : public Employee{
    string language;
public:
    Programmer(string name,int salary,string lang): Employee(name,salary),language(lang){
        performance_score_ =10;
    }
    void print_report() const{
        Employee::print_report();
        cout <<"Language: "<<language<<endl;
    }
    void write_code(){
        cout<<"Writing code in "<<language<<endl;
    }
};
class Salesperson :public Employee{
    int revenue;
public:
    Salesperson(string name,int salary, int revenue): Employee(name,salary),revenue(revenue){
        performance_score_ =20;
    }
    void print_report() const{
        Employee::print_report();
        cout <<"Sales: "<<revenue<<endl;
    }
    void sell(){
        cout<<"Selling products, generated "<<revenue<<" in revenue"<<endl;
    }
};
#endif //SUMMER_EMPLOYEE_H
