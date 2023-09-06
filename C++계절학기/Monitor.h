//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_MONITOR_H
#define SUMMER_MONITOR_H

#include "OutputDevice.h"

class Monitor : public OutputDevice{
public:
    Monitor(){
        cout<<"Monitor constructor"<<endl;
    }
    virtual ~Monitor(){
        cout<<"Monitor destructor"<<endl;
    }
};

#endif //SUMMER_MONITOR_H
