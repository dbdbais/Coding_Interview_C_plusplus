#include <iostream>
#include <vector>

using namespace std;
extern vector<int> vec;

extern void read(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        vec.push_back(tmp);
    }
}