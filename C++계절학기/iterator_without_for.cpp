#include<iostream>
#include<map>
#include <vector>
#include <iterator>
#include<algorithm>
using namespace std;

int main(){
    vector <int> vec;
    istream_iterator<int> cin_iter(cin);
    istream_iterator<int> eos;
    copy(cin_iter,eos, back_inserter(vec));

    sort(vec.begin(),vec.end());

    ostream_iterator<int> cout_iter(cout," ");
    copy(vec.begin(),vec.end(),cout_iter);


    return 0;
}
