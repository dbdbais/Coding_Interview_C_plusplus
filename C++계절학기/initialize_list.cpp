#include <iostream>
#include <string>
#include <map>
#include <initializer_list>
#include <utility>
using namespace std;

class Phonebook {
    map<string, int> contacts;
public:
    Phonebook(initializer_list <pair<string, int>> lst) {
        contacts.insert(lst.begin(),lst.end());
    }
    void print() const {
        for(auto elem : this->contacts){
            cout<<elem.first<<" "<<elem.second<<endl;
        }
    }
};

int main() {
    Phonebook p = {{"Kim", 24}, {"Lee", 21}};
    p.print();
    return 0;
}