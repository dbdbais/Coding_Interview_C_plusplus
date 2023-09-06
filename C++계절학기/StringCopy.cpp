#include "StringCopy.h"
#include "algorithm"
#include <iostream>

using namespace std;

StringCopy::StringCopy(){}
StringCopy::~StringCopy() noexcept {
    delete [] s;

}

StringCopy::StringCopy(const char *str) {
    len = char_traits<char>::length(str);
    s = new char[len];
    copy(str,str+len,s);
}


StringCopy::StringCopy(const StringCopy &str) {
    len = str.len;
    s = new char[len];
    copy(str.s,str.s+len+1,s);

}

StringCopy& StringCopy::operator=(StringCopy& str){
    this->swap(str);
    return *this;
}

void StringCopy::swap(StringCopy &str) {
    std::swap(len,str.len);
    std::swap(s, str.s);
}





