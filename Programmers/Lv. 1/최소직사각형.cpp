#include <string>
#include <vector>

using namespace std;
int width,height;
int solution(vector<vector<int>> sizes) {
    int answer = 0;

    for(int i=0;i<sizes.size();i++){
        if(sizes[i][0] < sizes[i][1]){
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        width = max(width,sizes[i][0]);
        height = max(height,sizes[i][1]);
    }

    answer = width * height;
    return answer;
}