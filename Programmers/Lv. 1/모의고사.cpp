#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int a[] ={1,2,3,4,5};
int b[] = {2,1,2,3,2,4,2,5};
int c[] = {3,3,1,1,2,2,4,4,5,5};
int acnt,bcnt,ccnt;


vector<int> solution(vector<int> answers) {
    vector<int> answer;
    for(int i=0;i<answers.size();i++){
        if(answers[i] == a[i%5]) acnt++;
        if(answers[i] == b[i%8]) bcnt++;
        if(answers[i] == c[i%10]) ccnt++;
    }
    vector<int>temp;
    temp.push_back(acnt);
    temp.push_back(bcnt);
    temp.push_back(ccnt);
    auto it = max_element(temp.begin(),temp.end());

    for(int i=1;i<=3;i++){
        if(temp[i-1]== *it) answer.push_back(i);
    }


    return answer;
}