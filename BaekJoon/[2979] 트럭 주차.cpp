//
// Created by newbi on 2023-08-22.
//
#include <iostream>
#include <vector>
using namespace std;
vector<int> park (101,0);
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B ,C;
    cin >> A >> B >> C;
    for(int i=0;i<3;i++){
        int start,end;
        cin >> start >> end;
        for(int j= start;j<end;j++)
            park[j]= park[j]+1;
    }
    int sum =0;
    for(int i=1;i<park.size();i++){
        if(park[i]==1)
            sum += A;
        else if(park[i]==2)
            sum += B*2;
        else if(park[i]==3)
            sum += C*3;
        else
            continue;
    }
    cout <<sum <<'\n';

    return 0;
}