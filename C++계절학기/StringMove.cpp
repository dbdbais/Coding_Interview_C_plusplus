#include "StringMove.h"
#include <algorithm>
#include <stdexcept>
#include<iostream>
using namespace std;
void StringMove::swap(StringMove& str){
    using std::swap;
    swap(s, str.s);
    swap(len, str.len);
}
StringMove::StringMove(): len(0) {
    s= new char[1];
    s[0] = '\0';
}
StringMove::StringMove(const StringMove &str) {
    len = str.len;
    s = new char[len];
    copy(str.s,str.s +len+1,this->s);
}
StringMove::StringMove(StringMove &&str) noexcept {
    len = str.len;
    s = move(str.s);
    str.s=new char[1];
    str.s[0] = '\0';
    str.len =0;
}

StringMove &StringMove::operator=(const StringMove &str) {
    if(this == &str) return *this;
    len = str.len;
    s = new char[len];
    copy(str.s,str.s +len+1,this->s);
    return *this;
}

StringMove &StringMove::operator=(StringMove &&str) noexcept {
    if(this == &str) return *this;
    len = str.len;
    s = move(str.s);
    str.s=new char[1];
    str.s[0] = '\0';
    str.len =0;
    return *this;
}

StringMove::StringMove(const char *str) {
    len = char_traits<char>::length(str);
    s = new char[len];
    copy(str,str + len+1,this->s);
}

StringMove::~StringMove() noexcept {
    if(s) delete[] s;
    cout<<"Destructor"<<endl;
}

const char* StringMove::data() const {
    return s;
}

char& StringMove::at(size_t pos){
    if(len!=0 && 0 <= pos && pos < len)
        return s[pos];
    throw std::out_of_range("out of range at index: " + std::to_string(pos) + ", but the length of StringMove is " + std::to_string(len));
}

size_t StringMove::size() const {
    return len;
}

void StringMove::print(const char* str) const {
    // for debugging
     //std::cout << str << ": " << s << ", size: " << len << " address: " << (void *) s << std::endl;
    std::cout << str << ": " << s << ", size: " << len << std::endl;
}