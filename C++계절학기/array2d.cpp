//
// Created by newbi on 2023-07-17.
//
#include<iostream>
#include <array>

using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int ** arr = new int*[n];
    for(int i=0;i<n;i++)
        arr[i] = new int[m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+= arr[j][i];
        }
        cout<< sum<<" ";
    }
    cout<<endl;
    return 0;

}
