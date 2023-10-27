//
// Created by newbi on 2023-10-02.
//
#include<iostream>
using namespace std;
int N,S,R, team[12],cnt;

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    fastIO();

    int tmp;
    cin >> N >> S >> R;
    for(int i=0;i<S;i++){
        cin >> tmp;
        team[tmp]--;    //카약 감소
    }
    for(int i=0;i<R;i++){
        cin >> tmp;
        team[tmp]++;    //카약 증가
    }

    for(int i =1;i<=N;i++){
        if(team[i] >0){ //예비 카약이 있을 때
            if(team[i-1]<0){    //이전이 음수라면
                team[i]--;
                team[i-1]++;
                continue;
            }
            else if(team[i+1]<0){   //이후가 음수라면
                team[i]--;
                team[i+1]++;
                continue;
            }
        }
    }
    for(int i=1;i<=N;i++){
        if(team[i]<0) cnt++;    //카약이 없는 팀 카운팅
    }

    cout << cnt <<'\n';

    return 0;
}