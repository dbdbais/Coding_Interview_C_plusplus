//
// Created by newbi on 2023-08-22.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> alpha(26,0);
    for(int i=0;i<N;i++){
        string input;
        cin >> input;
        alpha[input[0]-'a'] ++;
    }
    /*
    for(auto elem: alpha){
        cout << elem;
    }*/
    bool found = false;
    for(int i=0;i<alpha.size();i++){
        if(alpha[i] >=5){
            found = true;
            cout<< static_cast<char>('a'+i);
        }
    }
    if(!found){
        cout<<"PREDAJA";
    }
    return 0;
}