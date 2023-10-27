#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> par;
    unordered_map<string, int> com;

    for(auto st : participant){
        if(par[st] != 0){
            par[st] = par[st]+1;
        }
        else{
            par[st] = 1;
        }
    }

    for(auto st : completion){
        if(com[st] != 0){
            com[st] = com[st]+1;
        }
        else{
            com[st] = 1;
        }
    }
    for(auto elem : com){
        while(elem.second >0){
            if(par[elem.first] != 0){
                par[elem.first] = par[elem.first]-1;
            }
            elem.second -=1;
        }
    }
    for(auto last : par){
        if(last.second != 0) {
            answer = last.first;
            break;
        }
    }

    return answer;
}