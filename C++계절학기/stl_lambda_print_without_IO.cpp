#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;

int main(){
    int n,C;
    cin >> n >> C;
    vector<double> vec;
    generate_n(back_inserter(vec), n, [] (){return *(istream_iterator<double>{cin}); });
    //double sum = accumulate(vec.begin(), vec.end(), 0.0);

    copy_if (vec.begin(), vec.end(), ostream_iterator<int>(cout, " "), [=](int x){return C > x;});

    return 0;
}

