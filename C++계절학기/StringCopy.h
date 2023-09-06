//
// Created by newbi on 2023-07-05.
//

#ifndef SUMMER_STRINGCOPY_H
#define SUMMER_STRINGCOPY_H
#include <cstring>
#include <stddef.h>
class StringCopy {
public:
    StringCopy();
    StringCopy(const char* str);
    StringCopy(const StringCopy& str);
    StringCopy& operator=(const StringCopy& str);
    ~StringCopy() noexcept;
    const char* data() const;
    char& at(size_t);
    size_t size() const;
    void print(const char* str="") const;
private:
    void swap(StringCopy& str);
    int len = 0;
    char* s = "\0";
};


#endif //SUMMER_STRINGCOPY_H
