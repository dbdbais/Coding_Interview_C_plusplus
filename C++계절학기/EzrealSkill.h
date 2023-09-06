//
// Created by newbi on 2023-07-19.
//

#ifndef SUMMER_EZREALSKILL_H
#define SUMMER_EZREALSKILL_H
#include "Skill.h"
#include<iostream>
using namespace std;
class EzrealSkill :public Skill{
public:
    virtual void q(){
        cout<<"RISING SPELL FORCE (끓어오르는 주문의 힘)"<<endl;
    }
    virtual void w(){
        cout<<"MYSTIC SHOT (신비한 화살)"<<endl;
    }
    virtual void e(){
        cout<<"ESSENCE FLUX (정수의 흐름)"<<endl;
    }
    virtual void r(){
        cout<<"ARCANE SHIFT (비전 이동)"<<endl;
    }
};
#endif //SUMMER_EZREALSKILL_H
