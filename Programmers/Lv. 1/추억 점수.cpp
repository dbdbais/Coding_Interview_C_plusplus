#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i =0; i< photo.size();i++){
        int sm =0;
        auto pic = photo[i];
        for(auto elem : pic){
            for(int j=0;j<name.size();j++){
                if(elem == name[j]){
                    sm += yearning[j];
                    break;
                }
            }
        }
        answer.push_back(sm);
    }
    return answer;
}