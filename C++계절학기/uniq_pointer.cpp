#include <iostream>
#include <memory>

using namespace std;

void update(unique_ptr<int> pa, unique_ptr<int> pb){

    int addSum = *pa + *pb;
    int minusSum = *pa - *pb;
    cout<< addSum<<endl;
    cout<< minusSum<<endl;
}
int main(){
    auto pa = make_unique<int>();
    auto pb = make_unique<int>();
    cin >> *pa ;
    cin >> *pb ;
    update(move(pa), move(pb));

    return 0;
}

