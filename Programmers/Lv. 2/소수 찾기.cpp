#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int cnt;

bool isPrime(int val){
    if(val <2) return false;
    int sq = sqrt(val);
    for(int i=2;i<=sq;i++){
        if(val%i == 0) return false;
    }
    return true;
}


int solution(string numbers) {
    int answer = 0;
    vector<int>vec;
    for(int i=0;i<numbers.size();i++)
        vec.push_back(numbers[i]-'0');
    sort(vec.begin(),vec.end());
    set<int> s;
    do{
        string tmp="";
        for(int i=0;i<vec.size();i++){
            tmp+= to_string(vec[i]);
            s.insert(stoi(tmp));
        }
    }while(next_permutation(vec.begin(),vec.end()));

    for(auto elem : s){
        if(isPrime(elem)) cnt++;
    }
    answer =cnt;
    return answer;
}