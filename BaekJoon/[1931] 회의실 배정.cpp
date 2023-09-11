//
// Created by newbi on 2023-09-11.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,arrival,_end;
vector<pair<int,int>> room;
vector<pair<int,int>> ans;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arrival >> _end;
        room.push_back(make_pair(_end,arrival));
    }
    sort(room.begin(),room.end());  //종료일 기준 정렬
    ans.push_back(room[0]); //종료일이 제일 먼저 끝나는 첫번째 회의 삽입

    for(int i=1;i<N;i++){
        if(ans[ans.size()-1].first <= room[i].second)   //종료일과 같거나 그 이후인 시작일중 종료일이 가장 빠른 게 있다면
            ans.push_back(room[i]); //삽입
    }
    cout << ans.size() <<'\n';

    return 0;
}