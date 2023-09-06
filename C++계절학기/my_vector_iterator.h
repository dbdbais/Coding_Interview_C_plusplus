#ifndef TEMPLATE_MY_VECTOR_ITERATOR_H
#define TEMPLATE_MY_VECTOR_ITERATOR_H

#include "my_vector.h"

template<typename T>
class my_vector;

template<typename T>
class my_vector_iterator {
public:
    my_vector_iterator(T* e = nullptr){
        _e = e;
    }
    T& operator*(){
        return *_e;
    };
    my_vector_iterator<T>& operator++(){
        _e++;
        return *this;
    }




    bool operator == (const my_vector_iterator<T>& e) const {
        if(e._e == e)
            return true;
        else
            return false;
    }

    bool operator != (const my_vector_iterator<T>& e) const {
        return !this->operator==(e);
    }

private:
    T* _e = nullptr;       //my_vector 의 원소를 가리킴
} ;

#endif //TEMPLATE_MY_VECTOR_ITERATOR_H