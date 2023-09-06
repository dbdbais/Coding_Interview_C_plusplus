//
// Created by newbi on 2023-07-18.
//

#ifndef SUMMER_MY_ACCUMULATE_H
#define SUMMER_MY_ACCUMULATE_H

template<typename T, typename U>
U my_accumulate(T _begin, T _end, U init){
    U sum = init;
    for(T i = _begin; i != _end; i++){
        sum += *i;
    }
    return sum;
}

#endif //SUMMER_MY_ACCUMULATE_H
