#include <iostream>
#include <map>

using namespace std;

int main(){

    map <string, string> phonebook;
    int n;
    string name,number;

    cin >> n;
    for(int i=0;i<n;i++){
        cin>>name >> number;
        phonebook.insert(make_pair(name,number));
    }
    while(true){
        string name_index;
        cin >> name_index;
        if(name_index =="QUIT") break;

        auto foundPerson = phonebook.find(name_index);
        if(foundPerson != phonebook.end()) {
            cout << foundPerson->second << endl;
        }
        else{
            cout<<"NOT FOUND"<<endl;
        }
    }

    return 0;
}