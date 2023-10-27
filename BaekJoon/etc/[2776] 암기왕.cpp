//
// Created by newbi on 2023-09-17.
//
#include <iostream>
#include <unordered_map>    //map 라이브러리에 정렬 기능이 있어, 시간초과 날 수 있으니 시간이 중요한 사안에서는 unordered_map 사용
using namespace std;
int T,N,M;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >>T;
    for(int j = 0; j < T;j++) {
        unordered_map<int,int> note1;
        int tmp;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> tmp;
            note1[tmp] = 1;
        }
        cin >> M;
        for (int i = 0; i < M; i++) {
            cin >> tmp;
            if (note1[tmp] == 1)
                cout << 1 << '\n';
            else {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}