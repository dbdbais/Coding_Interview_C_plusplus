//
// Created by newbi on 2023-07-17.
//
#include <iostream>
using namespace std;

enum TYPE {INT, LONG, FLOAT, DOUBLE};

TYPE getType(std::string type) {
    TYPE res;
    if(type == "int"){
        res= TYPE::INT;
    }
    else if(type == "long"){
        res = TYPE::LONG;
    }
    else if(type=="float"){
        res = TYPE::FLOAT;
    }
    else if(type =="double"){
        res= TYPE::DOUBLE;
    }
    return res;

}

int main() {
    std::string str;
    std::cin >> str;
    TYPE type = getType(str);
    switch (type) {
        case INT:
            std::cout << "INT(" << type << ")" << std::endl;
            break;
        case LONG:
            std::cout << "LONG(" << type << ")" << std::endl;
            break;
        case FLOAT:
            std::cout << "FLOAT(" << type << ")" << std::endl;
            break;
        case DOUBLE:
            std::cout << "DOUBLE(" << type << ")" << std::endl;
            break;
    }
    return 0;
}