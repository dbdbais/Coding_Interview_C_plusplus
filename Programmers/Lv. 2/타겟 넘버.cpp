#include <string>
#include <vector>
using namespace std;
int cnt=0;

void DFS(vector<int> numbers,int idx, int target,int last,int val){
    if(idx == last){
        if(val == target) {cnt++;}
        return;
    }
    else{
        DFS(numbers,idx+1,target,last,val+numbers[idx]);
        DFS(numbers,idx+1,target,last,val-numbers[idx]);
    }
    return;
}



int solution(vector<int> numbers, int target) {

    DFS(numbers,0,target,numbers.size(),0);
    return cnt;
}