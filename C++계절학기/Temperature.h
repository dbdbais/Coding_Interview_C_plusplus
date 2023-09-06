#include <iostream>
enum SCALE {
  C,F
};

class Temperature {
public:
    Temperature(double temp, SCALE scale=C);
    Temperature add(Temperature other);
    std::string print() const;
private:
    // Conversion Function
    void convertToCelsius();
    void convertToFahrenheit();
private:
    double temperature;
    SCALE scale;
};