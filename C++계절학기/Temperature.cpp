#include <sstream>
#include <iomanip>
#include "Temperature.h"
using namespace std;
std::string Temperature::print() const {
    stringstream ss;
    ss << fixed;
    ss << setprecision(1);
    if(scale == C){
        ss<< temperature << " C"<< endl;
    }
    else{
        ss<<temperature <<" F" << endl;
    }
    return ss.str();

}
Temperature::Temperature(double temp, SCALE scale) {
    this->temperature = temp;
    this->scale = scale;
}
void Temperature::convertToCelsius(){
    double frac = 5.0f/9.0f;
    this->temperature = (this->temperature-32)*frac;
}
void Temperature::convertToFahrenheit(){
    double frac = 9.0f/5.0f;
    this->temperature = this->temperature*frac + 32;
}

Temperature Temperature::add(Temperature other) {
    Temperature temp(0);
    if(this->scale == F && other.scale == F){
        temp.scale = F;
        temp.temperature = this->temperature + other.temperature;
    }
    else if(this->scale == C && other.scale ==C){
        temp.scale = C;
        temp.temperature = this->temperature + other.temperature;
    }

    else{
        if(this->scale == C){
            other.convertToCelsius();
            temp.scale = C;
            temp.temperature = this->temperature + other.temperature;
        }
        else if (this->scale == F){
            other.convertToFahrenheit();
            temp.scale = F;
            temp.temperature = this->temperature + other.temperature;
        }
    }
    return temp;
}

