//
// Created by newbi on 2023-07-18.
//
#include <iostream>

template<typename T>
T sum(T arg){
    return arg;
}

template<typename T, typename... Args>
T sum(T arg0, Args...args){
    return arg0 + sum(args...);
}

int main() {
    std::cout<<sum(1,2,3,4)<<std::endl;
    return 0;
}