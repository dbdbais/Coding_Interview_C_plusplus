//
// Created by newbi on 2023-08-21.
//
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

auto solve(vector<int> & dwarf,int sum){
    pair<int,int> cord;
    for(int i=0;i<9;i++){
        for(int j=0;j<i;j++){
            if(sum - dwarf[i]-dwarf[j] == 100){
                cord = make_pair(i,j);
                break;
            }
        }
    }
    return cord;
}

int main(){
    vector<int> dwarf(9);
    for(int i=0;i<9;i++){
        cin >> dwarf[i];
    }
    int sum =accumulate(dwarf.begin(),dwarf.end(),0);
    sort(dwarf.begin(),dwarf.end());

    auto cord =solve(dwarf,sum);

    for(int i=0;i<dwarf.size();i++){
        if(i == cord.second || i== cord.first)
            continue;
        cout << dwarf[i]<<'\n';
    }

    return 0;
}