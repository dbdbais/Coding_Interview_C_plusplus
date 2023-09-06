#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

int f(){
    static int a =0;
    a+=2;
    return a;
}
int main(){
    vector<int> vec;
    vector <int> temp={1,3,3,3,5};
    copy(temp.begin(),temp.end(), back_inserter(vec));
    //reverse(vec.begin(),vec.end());
    //partial_sort(vec.begin(),vec.begin()+3,vec.end());
    //generate(vec.begin(),vec.end(),f);

    //vec.erase(unique(vec.begin(),vec.end()),vec.end());
    vec.erase(remove(vec.begin(),vec.end(),3),vec.end());


    for(auto elem: vec){
        cout << elem<<" ";
    }




    return 0;
}

