//
// Created by newbi on 2023-07-13.
//
#include<cstring>
#include <iostream>
using namespace std;
class MyString{
    char * str {nullptr};
    int size{0};
public:
    MyString(const char* const s){
        size = strlen(s);
        str = new char[size+1];
        for(int i=0; i< size;i++)
            str[i] = s[i];
        str[size] = '\0';
    }
    MyString(const MyString& another){
        size = another.size;
        str = new char[size+1];
        for(int i=0;i<size;i++)
            str[i] = another.str[i];
        str[size] = '\0';
    }
    MyString& operator=(const MyString& another){
        delete [] str;
        size = another.size;
        str = new char[size+1];
        for(int i=0;i<size;i++)
            str[i] = another.str[i];
        str[size] = '\0';
        return *this;
    }
    ~MyString(){
        delete [] str;
    }
    int length(){
        return size;
    }
    char& operator[] (int i){
        return str[i];
    }
    bool operator==(const MyString & st){
        return stricmp(str,st.str);
    }
    friend ostream& operator<<(ostream& os,const MyString & s){
        os<< s.str;
        return os;
    }
};