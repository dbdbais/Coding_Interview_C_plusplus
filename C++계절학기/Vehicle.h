//
// Created by newbi on 2023-07-05.
//

#ifndef SUMMER_VEHICLE_H
#define SUMMER_VEHICLE_H
#include <string>
using namespace std;
class Vehicle {
public:
    Vehicle(string name,int range,float batteryCapacity);
    Vehicle();
    Vehicle(string name,int range,bool hasFds,float batteryCapacity);

    void autoPilot(bool onOff);
    void runFDS() const;
    void displayEfficiency() const;
private:
    std::string name = "Model Y LR";
    int range = 511;
    bool hasFDS = false;
    float batteryCapacity = 85;
};



#endif //SUMMER_VEHICLE_H
