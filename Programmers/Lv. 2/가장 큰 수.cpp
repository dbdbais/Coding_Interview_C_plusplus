#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool oper(string s1, string s2){
    return s1 + s2 > s2 + s1;
}


string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    for(int i=0;i<numbers.size();i++){
        temp.push_back(to_string(numbers[i]));
    }
    sort(temp.begin(),temp.end(),oper);
    for(int j =0;j<temp.size();j++){
        answer += temp[j];
    }
    if(answer[0] == '0') return "0";
    return answer;
}