//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_LED_MONITOR_H
#define SUMMER_LED_MONITOR_H

#include "Monitor.h"

class LED_Monitor: public Monitor{
public:
    LED_Monitor(){
        cout<<"LED_Monitor constructor"<<endl;
    }
    ~LED_Monitor(){
        cout<<"LED_Monitor destructor"<<endl;
    }
};
#endif //SUMMER_LED_MONITOR_H
