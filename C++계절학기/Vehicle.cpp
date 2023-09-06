//
// Created by newbi on 2023-07-05.
//

#include "Vehicle.h"
#include <iostream>
#include <iomanip>
Vehicle::Vehicle() {
}
Vehicle::Vehicle(std::string name, int range, float batteryCapacity):name(name),range(range),batteryCapacity(batteryCapacity)
{}

Vehicle::Vehicle(std::string name, int range, bool hasFds, float batteryCapacity):name(name),range(range),hasFDS(hasFds),batteryCapacity(batteryCapacity)
{
}

void Vehicle::autoPilot(bool onOff){
cout<<"Auto-Pilot is"<< (onOff ? "On" : "Off")<<endl;
}

void Vehicle::runFDS() const {
    if(hasFDS){
        cout<<"Full Self-Driving!"<<endl;
    }
}

void Vehicle::displayEfficiency() const {
    cout << name << ": " << range << "km, Efficiency: " << setprecision(3) << range / batteryCapacity << "kWh/100km"
         << endl;
}