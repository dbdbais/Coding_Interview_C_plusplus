#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    float n,m;
    cin>> n >> m;

    cout<<fixed<< setprecision(2)<< n<<" + "<<m<<" = "<<n+m<<endl;
    cout<<fixed << setprecision(2)<< n<<" - "<<m<<" = "<<n-m<<endl;
    cout<<fixed << setprecision(2)<< n<<" * "<<m<<" = "<<n*m<<endl;
    cout<<fixed << setprecision(2)<< n<<" / "<<m<<" = "<<n/m<<endl;

    return 0;
}

