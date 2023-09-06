//
// Created by newbi on 2023-07-13.
//

#include<vector>
#include <iostream>
#include<initializer_list>

using namespace std;
class Matrix{
private:
    vector<vector<int>> mat;

public:
    Matrix(int n,int m) {
        mat.resize(n,vector<int>(m));
    }
    Matrix(initializer_list <vector<int>> lst ){
        int row = lst.size();
        int col=lst.begin()->size();
        mat.resize(row,vector<int>(col));
        int i=0;
        int j=0;
        for(auto line: lst){
            for(auto elem: line){
                mat[i][j++] = elem;
            }
            i++;
            j=0;
        }
    }
    Matrix& operator=(const Matrix &m){
        int row = m.mat.size();
        int col = m.mat[0].size();
        mat.resize(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                mat[i][j]=m.mat[i][j];
            }
        }
        return *this;
    }

    Matrix operator*(const Matrix &m){
        int row1 = mat.size();
        int col1 = mat[0].size();
        int col2 = m.mat[0].size();
        Matrix res(row1,col2);

        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                for(int k=0;k<col1;k++){
                    res.mat[i][j] += mat[i][k] * m.mat[k][j];
                }
            }
        }
        return res;
    }

    Matrix operator+(const Matrix &m){
        int row = mat.size();
        int col= mat[0].size();
        Matrix res(row,col);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res.mat[i][j] = mat[i][j]+ m.mat[i][j];
            }
        }
        return res;
    }
    Matrix operator-(const Matrix &m){
        int row = mat.size();
        int col= mat[0].size();
        Matrix res(row,col);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res.mat[i][j] = mat[i][j]- m.mat[i][j];
            }
        }
        return res;
    }
    Matrix transpose(){
        int row = mat.size();
        int col = mat[0].size();
        Matrix transpose(col,row);

        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                transpose.mat[i][j] = mat[j][i];
            }
        }
        return transpose;
    }

    friend ostream& operator<<(ostream &os, const Matrix& m){
        for(auto row: m.mat){
            os<<"| ";
            for(auto elem: row){
                os<< elem <<" ";
            }
            os<<"|"<<endl;
        }
        return os;
    }
};

int main(){
    Matrix m1 = {{1,2,3},{4,5,6}};
    Matrix m2 = {{1,2},{3,4},{5,6}};
    Matrix m3 = m1*m2;

    //cout << m1+m2<<endl;
    //cout << m1 -m2<<endl;
    cout<< m3 <<endl;
    cout<< m3.transpose()<<endl;
}