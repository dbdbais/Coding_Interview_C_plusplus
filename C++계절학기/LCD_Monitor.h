//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_LCD_MONITOR_H
#define SUMMER_LCD_MONITOR_H

#include "Monitor.h"

class LCD_Monitor: public Monitor{
public:
    LCD_Monitor(){
        cout<<"LCD_Monitor constructor"<<endl;
    }
    ~LCD_Monitor(){
        cout<<"LCD_Monitor destructor"<<endl;
    }
};
#endif //SUMMER_LCD_MONITOR_H
