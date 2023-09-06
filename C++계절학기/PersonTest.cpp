#include <iostream>
using namespace std;
#include<sstream>
#include "Person.h"

int main(){
    int n;
    map<string, Person> persons;
    cin>> n;
    for (int i=0;i<n;i++){
        string name,number;
        cin>> name >> number;
        Person temp(name,number);
        cout<<"already exists" <<persons.count(name)<<endl;
        persons.insert(make_pair(name,temp));
    }
    while(true){
        string cmd, name, phone;
        cin >>cmd;
        if(cmd == "ADD"){
            cin>>name>>phone;
            if(!persons.count(name)) {
                persons.insert(make_pair(name,Person(name,phone)));
            }
            else{
                cout<<name<<" already exists! "<<endl;
            }

        }
        else if(cmd == "DEL"){
            cin >>name;
            persons.erase(name);
        }
        else if(cmd == "MOD"){
            cin>>name>>phone;
            auto found = persons.find(name);
            if(found != persons.end()){
                found->second.modifyNumber(phone);
            }
        }
        else if(cmd=="FIN"){
            cin>>name;
            auto found = persons.find(name);
            if(found!= persons.end()){
                found->second.print();
            }
        }
        else{
            for(const auto elem : persons){
                elem.second.print();
            }
            break;
        }
    }


    return 0;
}