#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <regex>

using namespace std;

bool compare(const std::pair<std::string, size_t>& left, const std::pair<std::string, size_t>& right) {
    if(left.second != right.second) {
        return left.second > right.second;
    }
    else{
        return left.first <right.first;
    }
}

int main(){
    int count =0;
    string str;
    map <string,size_t> words;
    while(cin >>str && str !="^"){
        string filtered {regex_replace(str, regex("[.|,|:|;| ]"), "")};
        transform(filtered.begin(), filtered.end(), filtered.begin(), ::tolower);
        auto search = words.find(filtered);
        if(search!=words.end())
            words[filtered]++;
        else
            count++;
            words.insert(make_pair(filtered,1));
    }
    vector<pair<string, size_t>> vec;
    move(begin(words), end(words), back_inserter(vec));

    sort(vec.begin(),vec.end(), compare);
    cout<<"#Words: "<<count<<endl;
    cout<< "Top 5 Word Frequencies"<<endl;
    for (int i=0; i<5;i++){
        cout<<i+1<<" "<<vec[i].first <<": "<<vec[i].second<<endl;
    }
    cout<<"Find Word Frequencies"<<endl;
    while((cin >>str) && (str !="QUIT")){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        auto search = words.find(str);
        if(search!=words.end())
            cout<< search->first<<": "<<search->second<<endl;
        else
            cout<< str<<": "<<"0"<<endl;
    }
    cout<<"\nBye!"<<endl;

    return 0;
}