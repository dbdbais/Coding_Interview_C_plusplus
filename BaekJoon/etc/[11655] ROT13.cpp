//
// Created by newbi on 2023-08-22.
//
#include <iostream>
#include<string>
using namespace std;

int main(){
    string input;
    getline(cin,input);

    for(int i=0;i<input.size();i++){
        if(input[i]-'a'>=0 && input[i]-'a'<26){
            if(input[i]+13-'z'>0 )
                cout << char(input[i]+13-26);
            else
                cout << char((input[i]+13));
        }
        else if((input[i]-'A' >= 0) && (input[i]-'A' < 26)){
            if(input[i]+13-'Z'>0 )
                cout << char(input[i]+13-26);
            else
                cout << char((input[i]+13));
        }
        else{
            cout << input[i];
        }
    }


    return 0;
}