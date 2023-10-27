//
// Created by newbi on 2023-08-22.
//
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,temp;
    cin >> s;
    temp = s;
    reverse(temp.begin(),temp.end());

    if(temp == s){
        cout << "1";
    }
    else{
        cout << "0";
    }
    cout<<'\n';
    return 0;
}