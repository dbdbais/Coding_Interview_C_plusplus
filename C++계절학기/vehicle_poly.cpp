//
// Created by newbi on 2023-07-19.
//

#include<vector>
#include <memory>
#include<iostream>
#include<string>
using namespace std;

class vehicle{
protected:
    string name;
    int speed=0;
public:
    vehicle(){}
    virtual void accelerate(){
        cout<<"The speed of the "<<name<<" has increased by "<<speed<<" km/h."<<endl;
    }
};
class GV70 :public vehicle{
public:
    GV70(){
        name ="gv70";
        speed =30;
    }
    void accelerate(){
        vehicle::accelerate();
    }
};
class Grandeur :public vehicle{
public:
    Grandeur(){
        name ="grandeur";
        speed =20;
    }
    void accelerate(){
        vehicle::accelerate();
    }
};
class Carnibal :public vehicle{
public:
    Carnibal(){
        name ="carnibal";
        speed =10;
    }
    void accelerate(){
        vehicle::accelerate();
    }
};

unique_ptr<vehicle> make_vehicle() {
    std::string choice;
    cin >> choice;
    if (choice == "gv70") return make_unique<GV70>();
    else if (choice == "grandeur") return make_unique<Grandeur>();
    else if (choice == "carnibal") return make_unique<Carnibal>();
    else make_unique<GV70>();
}
int main() {

    std::vector<unique_ptr<vehicle>> test_vehicles;

    test_vehicles.push_back(make_vehicle()); //gv70

    test_vehicles.push_back(make_vehicle()); //grandeur

    test_vehicles.push_back(make_vehicle()); //carnibal

    for (auto& v : test_vehicles)

        (*v).accelerate();

}