//
// Created by newbi on 2023-07-20.
//
#include<iostream>
#include<string>
#include<memory>
#include<map>
using namespace std;

// class Monster
class Monster{
protected:
    string name;
public:
    Monster() =default;
    virtual ~Monster() =default;

    virtual unique_ptr<Monster> clone() =0;

    Monster(const Monster& m) = delete;
    Monster& operator =(const Monster& m) = delete;
    void roar(){
        cout<<name<<" roars!"<<endl;
    }
};
class Dragon : public Monster{
public:
    Dragon(){
        name ="Dragon";
    }
    virtual ~Dragon() override = default;

    virtual unique_ptr<Monster> clone() override{
        return make_unique<Dragon>();
    }
};

class Goblin : public Monster{
public:
    Goblin(){
        name ="Goblin";
    }
    virtual ~Goblin() override = default;

    virtual unique_ptr<Monster> clone() override{
        return make_unique<Goblin>();
    }
};

std::map<std::string, std::unique_ptr<Monster>> monsterRegistry;



void loadMonsters() {

    // Read monster information from file (this is the costly operation)

    // Here, we just pretend to do it and create a Dragon and a Goblin


    monsterRegistry["Dragon"] = std::make_unique<Dragon>();

    monsterRegistry["Goblin"] = std::make_unique<Goblin>();

}

std::unique_ptr<Monster> spawnMonster(const std::string& type) {
    auto it = monsterRegistry.find(type);
    if(it!= monsterRegistry.end()){
        return it->second->clone();
    }

}



int main() {

    loadMonsters(); // load monster prototypes



    std::unique_ptr<Monster> dragon1 = spawnMonster("Dragon"); // clone from prototype

    dragon1->roar();



    std::unique_ptr<Monster> goblin1 = spawnMonster("Goblin"); // clone from prototype

    goblin1->roar();



    return 0;

}