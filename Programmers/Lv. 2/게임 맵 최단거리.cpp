#include<vector>
#include<queue>
#include<iostream>
using namespace std;

int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
vector<vector<int>> visited(104,vector<int>(104,1e8));
int N,M;
queue<pair<int,int>> q;
void BFS(int x, int y,vector<vector<int>>maps){
    q.push({x,y});
    visited[x][y] = 1;
    while(q.size()){
        auto cord = q.front(); q.pop();
        x = cord.first;
        y = cord.second;
        for(int i=0;i<4;i++){
            int qx = x +dx[i];
            int qy = y +dy[i];
            if(qx <0 || qx >= N || qy < 0 || qy >= M) continue;
            if(maps[qx][qy]==0) continue;
            if(visited[qx][qy] >=visited[x][y]){
                maps[qx][qy] = 0;
                visited[qx][qy] = visited[x][y]+1;
                q.push({qx,qy});
            }

        }
    }
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout <<visited[i][j]<< " ";
        }
        cout<<endl;
    }
    */

}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    N = (int)maps.size();
    M = (int)maps[0].size();

    BFS(0,0,maps);
    answer = visited[N-1][M-1];

    if(answer == 1e8) answer = -1;
    return answer;
}