#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
using namespace std;

struct Champion {
    std::string name;
    int health;
    int attack;
};

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) result.push_back(temp);

    return result;
}

std::function<bool(Champion)> condition1 = [ ] (Champion c) { return c.health > 700; } ;

std::function<bool(Champion)> condition2 = [ ] (Champion c) { return c.attack > 70; } ;

std::function<bool(Champion)> condition3 = [ ] (Champion c) { return c.health > 600; } ;

auto findChampionWithCondition(std::vector<Champion> champions, std::function<bool(Champion)> condition) {
    std::vector<Champion> result;
    for (auto& c : champions)
        if(condition(c))
            result.push_back(c);
    return result;
}

void printChampion(const std::vector<Champion> champions){
    for(auto selected:champions){
        cout<<selected.name<<" "<<selected.health<<" "<<selected.attack<<endl;
    }
}
std::vector<Champion> createChampion() {
    std::vector<Champion> champions;
    Champion tryndamere {"Tryndamere", 625, 72};
    Champion kled {"Kled", 740, 35};
    Champion garen {"Garen", 620, 66};
    champions.push_back(tryndamere);
    champions.push_back(kled);
    champions.push_back(garen);
    return champions;
}

int main(){
    vector<Champion> champions = createChampion();
    vector<Champion> final;
    string str;
    cin>> str;
    vector<string> result = split(str,':');
    if(result[0]=="health"){
        if(result[1]=="700"){
            final = findChampionWithCondition(champions,condition1);
        }
        else if(result[1]=="600"){
            final = findChampionWithCondition(champions,condition3);
        }
    }
    else{
        final = findChampionWithCondition(champions,condition2);
    }
    printChampion(final);
    return 0;
}