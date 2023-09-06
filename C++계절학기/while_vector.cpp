#include <iostream>
using namespace std;

int main(){
    int num;
    int cnt =0;
    int max =0;
    int min = 2147483647;
    while(cin>>num){
        cnt++;
        if(num> max){
            max = num;
        }
        if(num<min){
            min = num;
        }
    }
    cout<< cnt <<" "<< min <<" "<< max<<endl;

    return 0;
}
