#include <iostream>
#include <map>

using namespace std;

void addItem(std::map<std::string, int>& inventory, std::string item, float money) {
    inventory[item] += 1;
    auto moneyIn = inventory.find("MONEY");
    if(moneyIn != inventory.end()) {
        inventory["MONEY"] += static_cast<int>(money);
    }
    else {
        inventory.insert(make_pair("MONEY", static_cast<int>(money)));
    }
}
void addItem(std::map<std::string, int>& inventory, std::string item, int count) {
    inventory[item] += count;
}
int main(){
    map<std::string, int> inventory;
    addItem(inventory, "sword", 1);
    addItem(inventory, "shield", 2);
    addItem(inventory, "shield", 5.0F);
    addItem(inventory, "armor", 3.0F);

    for (const auto &[key, value] : inventory)
        std::cout << key << " " << value << std::endl;
}
