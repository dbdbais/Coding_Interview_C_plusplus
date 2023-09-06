#ifndef SUMMER_STRINGMOVE_H
#define SUMMER_STRINGMOVE_H

#include <stddef.h>
#include <memory>
#include <iostream>
#include <vector>
using namespace std;
class StringMove {
public:
    StringMove();
    StringMove(const char* str);
    StringMove(const StringMove& str);
    StringMove& operator=(const StringMove& str);
    StringMove(StringMove&& str) noexcept;
    StringMove& operator=(StringMove&& str) noexcept;
    ~StringMove() noexcept;
    const char* data() const;
    char& at(size_t);
    size_t size() const;
    void print(const char* str="") const;
private:
    void swap(StringMove& str);
    int len;
    char* s;
};


#endif //SUMMER_STRINGMOVE_H
