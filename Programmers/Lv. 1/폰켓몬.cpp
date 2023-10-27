#include <vector>
#include <map>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int cnt = nums.size()/2;
    set<int> st;
    for(auto elem : nums){
        st.insert(elem);
    }
    if((int)st.size() > cnt) answer = cnt;
    else answer = (int)st.size();

    return answer;
}