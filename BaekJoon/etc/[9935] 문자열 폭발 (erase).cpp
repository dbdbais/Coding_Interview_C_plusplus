//
// Created by newbi on 2023-09-10.
//
#include <iostream>
#include <string>
using namespace std;

string input,bomb,res="";
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input >> bomb;
    for(int i=0; i<input.size();i++){
        res += input[i];    //결과 문자열에 계속 더해나간다.
        if(res.size() >= bomb.size()){  // 폭발 문자열 보다 크거나 같을 경우에 비교해본다.
            if(res.substr(res.size()- bomb.size(),bomb.size()) == bomb ){   //뒤에서 부터 비교해서 같다면
                res.erase(res.size()-bomb.size(),bomb.size());  //폭발 문자열을 삭제한다
            }
        }
    }
    if(res.empty()){    //전부 폭발했다면
        cout << "FRULA"<<'\n';
    }
    else{
        cout << res << '\n';
    }


    return 0;
}