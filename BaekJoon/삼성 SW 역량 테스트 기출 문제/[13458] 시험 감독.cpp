//
// Created by newbi on 2023-10-10.
//
#include <iostream>
#include <vector>

using namespace std;
int N,B,C;
long long cnt;
vector<int> A(1000004,0);

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    fastIO();

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    cin >> B >> C;

    for(int i=0;i<N;i++){
        int leftOver = max(A[i] - B,0);
        cnt++;
        if(leftOver) {
            int val = leftOver / C;
            int mod = leftOver % C;
            if (mod) {
                cnt += (val + 1);
            } else {
                cnt += val;
            }
        }
    }

    cout << cnt <<'\n';
    return 0;
}