//
// Created by newbi on 2023-07-11.
//
#include<memory>
#include <string>
#include <iostream>
using namespace std;

class Printer{
private:
public:
    void start(){
        cout<<"start"<<endl;
    }
    void end(){
        cout<<"end"<<endl;
    }

};

class Job{
    Printer * head;
};

class Paper{
    string name;
    int id;
public:
    Paper(string name, int id){
        this->name = name;
        this->id = id;
    }
    void add(Printer p){

    }
};

int main(){
    auto p = make_shared<Printer>();
    p->start();
    Paper p1("p1",1);
    Paper p2("p2",2);
    Paper p3("p3",3);

    p1.add(p);

    p->end();
}