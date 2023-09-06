//
// Created by newbi on 2023-07-15.
//

#ifndef SUMMER_MATRIX_H
#define SUMMER_MATRIX_H
#include <cstddef>
#include<initializer_list>
#include <iostream>
#include<vector>
#include<sstream>
#include <algorithm>
using namespace std;
class matrix {
public:
    // 생성자, 복사생성자
    matrix();
    matrix(initializer_list<vector<int>>);
    matrix (const matrix& m);
    friend ostream& operator <<(ostream &os, const matrix &m);
    matrix operator=(const matrix m);
    matrix& operator+(const matrix& m);
    matrix inverse();
    // 멤버 함수들
private:
    int* data = nullptr;
    size_t row = 0;
    size_t col = 0;
};




#endif //SUMMER_MATRIX_H
