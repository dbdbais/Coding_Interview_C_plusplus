//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_PRINTER_H
#define SUMMER_PRINTER_H
#include "OutputDevice.h"
class Printer : public OutputDevice{
public:
    Printer(){
        cout<<"Printer constructor"<<endl;
    }
    ~Printer(){
        cout<<"Printer destructor"<<endl;
    }

};
#endif //SUMMER_PRINTER_H
