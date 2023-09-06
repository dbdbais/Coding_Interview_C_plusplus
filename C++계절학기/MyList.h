//
// Created by newbi on 2023-07-18.
//

#ifndef SUMMER_MYLIST_H
#define SUMMER_MYLIST_H
#include <cstddef>
#include<complex>
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
//using namespace std;
template<typename T, size_t N>
class MyList {
public:
    MyList(){
        pos =0;
        _data = new T[pos];
    }
    MyList(const MyList& rhs) noexcept{
        pos = rhs.pos;
        _data = new T[N];
        copy(rhs._data,rhs._data+N,_data);
    }
    MyList& operator=(const MyList& rhs){
        pos = rhs.pos;
        _data = new T[N];
        copy(rhs._data,rhs._data+N,_data);
        return *this;
    }
    ~MyList() noexcept{
        delete [] _data;
    }

    void add(T& data){
        _data[pos++] = data;
    }
    void remove(T& data){
        auto it = find(_data,_data+pos,data);
        while(it!= _data+pos){
            T * new_data = new T[N];
            copy(_data,it,new_data);
            copy(it+1,_data+pos,new_data+(it -_data));
            delete [] _data;
            _data = new_data;
            pos--;
            it = find(_data,_data+pos,data);
        }
    }
    const T* begin() const {return _data;}
    const T* end() const {return _data+N;}

    T* begin() {return _data;}
    T* end() {return _data+N;}

private:
    T* _data= nullptr;
    int pos = 0;
};
#endif //SUMMER_MYLIST_H
