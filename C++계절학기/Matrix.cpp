//
// Created by newbi on 2023-07-15.
//

#include "Matrix.h"

matrix::matrix() {}
matrix::matrix(initializer_list<vector<int>> lst) {
    row = lst.size();
    col = lst.begin()->size();
    data = new int [row * col];
    int i=0;
    for(auto it = lst.begin();it!= lst.end();it++){
        for(auto elem : *it){
            data[i++] = elem;
        }
    }
}

matrix matrix::inverse() {
    matrix res;
    res.row = row;
    res.col = col;
    res.data = new int[row *col];
    double det = static_cast<double>(data[0]*data[3] - data[1]*data[2]);
    int tmp = data[0];
    res.data[0] = data[3];
    res.data[3] = tmp;
    res.data[1] = -data[1];
    res.data[2] = -data[2];

    int inv = 1/det;

   for_each(res.data,res.data+(row*col),[inv](int & value){
       value *= inv;
   });

    return res;
}

matrix matrix::operator=(const matrix m) {
    matrix res;
    res.col = m.col;
    res.row = m.row;
    res.data = new int [col*row];

    copy(m.data,m.data+(row*col),res.data);

    return res;
}

matrix& matrix::operator+(const matrix &m) {
    transform(data, data + (row * col), m.data, data, plus<int>());
    return *this;
}
matrix::matrix (const matrix& m){
    row = m.row;
    col = m.col;
    data = new int[row * col];
    copy(m.data,m.data+(row*col),data);
}
ostream & operator<<(ostream &os, const matrix &m){
    stringstream ss;
    for(int i=0;i<m.row;i++){
        ss<<"| ";
        for(int j=0;j<m.col;j++){
            ss<<m.data[m.col*i+j]<<" ";
        }
        ss<<"|"<<endl;
    }
    os << ss.str();
    return os;
}