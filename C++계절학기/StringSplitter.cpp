#include "StringSplitter.h"
#include <iostream>
#include <algorithm>
#include <sstream>
StringSplitter::StringSplitter(std::string statement) {
    this->my_statement = statement;
}


StringSplitter &StringSplitter::trim() {
    const char* delim = " \t\n";
    this->my_statement.erase(0, this->my_statement.find_first_not_of(delim));
    this->my_statement.erase(this->my_statement.find_last_not_of(delim)+1);
    return *this;
}


StringSplitter &StringSplitter::removeNonAlnum() {
    this->my_statement.erase(remove_if(this->my_statement.begin(),this->my_statement.end(),
                                       [](char c) {
                                           if(isalnum(c) || isspace(c)){
                                               return false;
                                           }
                                           else{
                                               return true;
                                           }
                                       }
    ),this->my_statement.end());
    return *this;

}

vector<string> StringSplitter::split(char delimeter) {
    stringstream  sstream (this->my_statement);
    string temp;
    while (getline(sstream,temp,delimeter)){
        this->tokens.push_back(temp);
    }
    return this->tokens;
}



