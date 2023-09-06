//
// Created by newbi on 2023-07-18.
//

#ifndef SUMMER_MY_VECTOR_H
#define SUMMER_MY_VECTOR_H

#ifndef TEMPLATE_MY_VECTOR_H
#define TEMPLATE_MY_VECTOR_H
#include "my_vector_iterator.h"

#include <algorithm>
#include <initializer_list>
#include <memory>
using namespace std;


template<typename T>
class my_vector {
public:
    explicit my_vector(size_t N=0) noexcept{
        _size = N;
        _data - make_unique<T[]>(_size);
    }

    my_vector_iterator<T> begin(){
        return my_vector_iterator<T>(_data.get());
    }
    my_vector_iterator<T> end(){
        return my_vector_iterator<T>(_data.get()+_size);
    }

    my_vector(std::initializer_list<int> lst) noexcept{
        _size = lst.size();
        _data = make_unique<T[]>(_size);
        copy(lst.begin(),lst.end(),_data.get());
    }

    my_vector (const my_vector<T>& other) noexcept{
        _size = other.size();
        _data = make_unique<T[]>(_size);
        copy(other._data.get(),other._data.get()+_size,_data.get());
    }

    T& operator[](int i){
        return _data[i];
    }

    size_t size() const{
        return _size;
    }

private:
    size_t _size;
    std::unique_ptr<T[]> _data;
};

#endif //TEMPLATE_MY_VECTOR_H

#endif //SUMMER_MY_VECTOR_H
