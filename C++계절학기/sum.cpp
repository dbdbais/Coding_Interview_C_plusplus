#include <iostream>
#include <vector>

using namespace std;
extern vector<int> vec;
extern int total;

void sum(){
    for(vector<int>::iterator it = vec.begin();it!= vec.end();it++){
        total += *it;
    }
}
