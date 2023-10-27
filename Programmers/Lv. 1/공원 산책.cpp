#include <string>
#include <vector>
using namespace std;
vector<vector<bool>> vec(51,vector<bool>(51,true));

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;

    int horizon = park[0].size();
    int vertical = park.size();
    pair<int,int> start;
    for(int i=0;i<horizon;i++){
        for(int j=0;j<vertical;j++){
            if(park[i][j]=='S'){
                start = {i,j};
            }
            if(park[i][j]=='X'){
                vec[i][j] = false;
            }
        }
    }


    for(int i=0;i< routes.size();i++){  //라우트 사이즈만큼
        auto cmd = routes[i];
        char alpha = cmd[0];
        int val = cmd[cmd.size()-1]-'0';
        auto elem = start;
        bool suc = true;
        for(int j =1;j<= val;j++){  //value만큼
            if(alpha == 'E'){
                elem.second += 1;
            }
            else if(alpha == 'W'){
                elem.second -= 1;
            }
            else if(alpha == 'S'){
                elem.first += 1;
            }
            else if(alpha == 'N'){
                elem.first -= 1;
            }
            if(elem.first < 0 || elem.first >= vertical || elem.second <0 || elem.second >= horizon){
                suc =false;
                break;
            }
            if(vec[elem.first][elem.second] == false){
                suc =false;
                break;
            }
        }
        if(suc){
            start = elem;
        }
    }
    answer.push_back(start.first);
    answer.push_back(start.second);

    return answer;
}