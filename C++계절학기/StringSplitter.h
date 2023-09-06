#ifndef SUMMER_STRINGSPLITTER_H
#define SUMMER_STRINGSPLITTER_H
#include <string>
#include <vector>
using namespace std;

class StringSplitter {
public:
    StringSplitter(string statement);
    StringSplitter& trim();
    StringSplitter& removeNonAlnum();
    vector<string> split(char delimeter);
private:
    string my_statement;
    vector<string> tokens;
};


#endif //SUMMER_STRINGSPLITTER_H
