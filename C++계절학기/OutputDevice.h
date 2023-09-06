//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_OUTPUTDEVICE_H
#define SUMMER_OUTPUTDEVICE_H
#include<iostream>
using namespace std;
class OutputDevice{
public:
    OutputDevice(){
        cout<<"OutputDevice constructor"<<endl;
    }
    virtual ~OutputDevice(){
        cout<<"OutputDevice destructor"<<endl;
    }

};
#endif //SUMMER_OUTPUTDEVICE_H
