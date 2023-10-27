#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end(),greater<int>());

    for(int i=citations.size();i>=0;i--){
        int idx = citations.size();
        for(int j=0;j<citations.size();j++){
            if(citations[j]<i){
                idx = j;
                break;
            }
        }
        //7
        if(idx >= i && citations.size()-(idx) <= i){
            answer = i;
            break;
        }
    }


    return answer;
}