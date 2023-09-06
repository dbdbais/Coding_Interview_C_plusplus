#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

struct Item{
    string name;
    double price;
    int quantity;
};
auto find_item(vector<Item> inventory){
    auto item = find_if(inventory.begin(),inventory.end(),[](const Item& item){
        return item.name == "Grape";
    });
    return item;
}
int count_item(vector<Item> inventory){
    int cnt =count_if(inventory.begin(),inventory.end(),[](const Item& item){
        if(item.price>2)
            return true;
        else
            return false;
    });
    return cnt;
}
auto erase_zero(vector<Item> inventory){
    vector<Item> *temp = new vector<Item>();
    inventory.erase(remove_if(inventory.begin(),inventory.end(),[](const Item& item){
        return (item.quantity == 0);
    }),inventory.end());
    *temp = inventory;
    return *temp;
}

int main(){
    vector<Item> inventory = {
            {"Apple", 0.99, 10},

            {"Banana", 0.59, 20},

            {"Cherry", 1.49, 5},

            {"Dates", 2.99, 2},

            {"Elderberry", 3.99, 0},

            {"Fig", 2.49, 15},

            {"Grape", 0.79, 25},

            {"Honeydew", 1.29, 8},

            {"Indian Gooseberry", 2.99, 0},

            {"Jackfruit", 4.99, 1}
    };
    sort(inventory.begin(),inventory.end(),[](const Item& item1, const Item& item2){
        return item1.price < item2.price;});

    for_each(inventory.begin(),inventory.end(),[](const Item& item){
        cout<<item.name<<" "<<item.price<<" "<<item.quantity<<endl;
    });

    auto found = find_item(inventory);

    cout<<"Item found: "<<found->name<<" "<<found->price<<" "<<found->quantity<<endl;
    int cnt = count_item(inventory);
    cout<< "Number of expensive items: "<<cnt<<endl;
    inventory = erase_zero(inventory);

    for_each(inventory.begin(),inventory.end(),[](const Item& item){
        cout<<item.name<<" "<<item.price<<" "<<item.quantity<<endl;
    });

    return 0;
}
