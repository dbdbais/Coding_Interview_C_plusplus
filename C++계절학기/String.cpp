//
// Created by newbi on 2023-07-08.
//
#include <iostream>
#include "String.h"
#include <string>
using namespace std;
int String::count_=0;

String::String() {
    cout<<"Default Constructor:"<<endl;
    count_++;
    cout<<"# of String object: "<<count_<<endl;
    data_ = new char[1];
    data_[0]='\0';
    len_ = 0;
}
String::String(const char *s) {
    cout<<"Constructor:"<<endl;
    count_++;
    cout<<"# of String object: "<<count_<<endl;
    len_ = char_traits<char>::length(s);
    data_ = new char[len_];
    copy(s,s+len_+1,data_);
}

String &String::append(const char *str) {
    len_ = len_ + char_traits<char>::length(str);
    string result = string(data_)+ str;
    data_ = new char [len_];
    copy(result.data(),result.data()+len_+1,data_);
    return *this;
}

String &String::append(const String &str) {
    len_ = len_+ str.len_;
    string result = string(data_)+str.data_;
    data_ = new char [len_];
    copy(result.data(),result.data()+len_+1,data_);
    return *this;

}
String::String(const String &s) noexcept {
    cout<<"Copy Constructor:"<<endl;
    count_++;
    cout<<"# of String object: "<<count_<<endl;

    len_ = s.len_;
    data_ = new char [len_];
    copy(s.data_,s.data_+len_+1,data_);
}

const char *String::data() const {
    return data_;
}

bool String::empty() const {
    if(data_[0]=='\0'){
        return true;
    }
    else
        return false;
}
String::~String() noexcept {
    if(data_) delete [] data_;
    cout<<"Destructor"<<endl;
    count_--;
    cout<<"# of String object: "<<count_<<endl;
}

size_t String::size() const {
    return len_;
}

