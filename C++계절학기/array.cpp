//
// Created by newbi on 2023-07-17.
//
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
int main(){
    array<int,10> arr;
    for(auto &iter : arr)
        cin >>iter;
    auto min = min_element(arr.begin(),arr.end());
    auto max = max_element(arr.begin(),arr.end());
    cout <<*max<<" "<<*min<<endl;
}