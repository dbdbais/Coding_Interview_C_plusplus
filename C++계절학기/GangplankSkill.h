//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_GANGPLANKSKILL_H
#define SUMMER_GANGPLANKSKILL_H
#include "Skill.h"
#include<iostream>
using namespace std;
class GangplankSkill : public Skill {
public:
    virtual void q(){
        cout<<"TRIAL BY FIRE (불의 심판)"<<endl;
    }
    virtual void w(){
        cout<<"PARRRLEY (혀어어어업상)"<<endl;
    }
    virtual void e(){
        cout<<"REMOVE SCURVY (괴혈병 치료)"<<endl;
    }
    virtual void r(){
        cout<<" POWDER KEG (화약통)"<<endl;
    }
};
#endif //SUMMER_GANGPLANKSKILL_H
