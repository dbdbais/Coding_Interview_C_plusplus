#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec;
long long solution(long long n) {
    long long answer = 0;
    while(n){
        int temp = n%10;
        vec.push_back(temp);
        n /= 10;
    }
    sort(vec.begin(),vec.end(),less<int>());
    int mul =1;
    for(auto elem: vec){
        answer += elem*mul;
        mul *=10;
    }

    return answer;
}