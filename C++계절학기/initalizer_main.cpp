#include <iostream>
#include <initializer_list>
#include<vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
class Phonebook{
    static int id;
    map<int,pair<string,int>> contacts;
public:

    Phonebook(initializer_list <pair<string,int>> lst){
        static int id = 0;
        for (auto elem : lst){
            contacts.insert({id, make_pair(elem.first,elem.second)});
            id++;
        }
    }

    auto getId(string name){
        vector <int> vec;
        for(auto elem : contacts){
            if(elem.second.first == name){
                vec.push_back(elem.first);
            }
        }
        return vec;
    }
    auto getNumber(string name){
        vector <int> vec;
        for(auto elem : contacts){
            if(elem.second.first == name){
                vec.push_back(elem.second.second);
            }
        }
        return vec;
    }

    void add(string name, int num){
        contacts.insert({Phonebook::id, make_pair(name,num)});
        Phonebook::id++;
    }
    void update(string name, int number){
        for(auto & elem : contacts){
            if(elem.second.first == name){
                elem.second.second = number;
            }
        }
    }
    void del(string name) {
        for(auto it = contacts.begin(); it != contacts.end();){
            if(it->second.first == name){
                contacts.erase(it++);
            }
            else{
                ++it;
            }
        }
    }
    void print(){
        for (auto elem : contacts){
            cout<< "ID: "<<elem.first << " Name: "<<elem.second.first<< " Phone: "<<elem.second.second <<endl;
        }
    }
};

int Phonebook::id = 0;


int main(){
    Phonebook p = {{"Kim",24},{"Lee",21}};
    p.add("Asd",20);
    p.add("Kim", 1234);
    p.add("Kim", 5678);
    auto res = p.getId("Kim");
    for(auto temp : res){
        cout<< temp << endl;
    }
    res = p.getNumber("Kim");
    for(auto temp : res){
        cout<< temp << endl;
    }
    p.print();
    p.update("Kim",7777);
    p.print();
    p.del("Kim");
    p.print();

    return 0;
}

