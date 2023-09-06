#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for (vector<int>::iterator it = vec.begin();it!=vec.end();it++){
        cin >> *it;
    }
    int sum =0;
    for(auto elem : vec){
        sum += elem;
    }
    cout<<sum<<endl;
    return 0;
}

