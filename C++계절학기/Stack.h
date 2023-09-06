//
// Created by newbi on 2023-07-20.
//

#ifndef SUMMER_STACK_H
#define SUMMER_STACK_H
#ifndef EXCEPTION_STACK_H
#define EXCEPTION_STACK_H

#include "StackException.h"

#include <iostream>

using namespace std;
template<typename T>
class Stack {
public:
    Stack(int sz);
    ~Stack() noexcept;

    void push(T c);
    T pop();
    void print()const;
private:
    int size=0;
    int top=0;
    T* s = nullptr;
};
template<typename T>
Stack<T>::Stack(int sz) {
    size = sz;
    s= new T[size];
}
template<typename T>
Stack<T>::~Stack() noexcept {
    delete [] s;
}

template<typename T>
void Stack<T>::push(T c) {
    if(top == size){
        throw StackException("Stack is full!",__FILE__,__LINE__);
    }
    s[top++] = c;
}

template<typename T>
T Stack<T>::pop(){
    if(top == 0){
        throw StackException("Stack is empty!",__FILE__, __LINE__);
    }
    return s[--top];
}

template<typename T>
void Stack<T>::print() const {
    for(int i=0;i<top;++i){
        cout<<s[i]<<endl;
    }
}



#endif //EXCEPTION_STACK_H
#endif //SUMMER_STACK_H
