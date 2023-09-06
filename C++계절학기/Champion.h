//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_CHAMPION_H
#define SUMMER_CHAMPION_H
#include<iostream>
#include<string>
#include<memory>
#include "Skill.h"
#include "GangplankSkill.h"
#include "EzrealSkill.h"

using namespace std;
enum class CHAMPION {GANGPLANK, EZREAL};
class Champion {
public:
    void select_champion(CHAMPION champion){
        switch(champion){
            case CHAMPION::GANGPLANK:
                skill = std::make_unique<GangplankSkill>();
                break;
            case CHAMPION::EZREAL:
                skill = std::make_unique<EzrealSkill>();
        }
    }
    void q() { skill->q(); }
    void w() { skill->w(); }
    void e() { skill->e(); }
    void r() { skill->r(); }
private:
    std::unique_ptr<Skill> skill;
};
#endif //SUMMER_CHAMPION_H
