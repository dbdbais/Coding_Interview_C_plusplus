#include<iostream>

using namespace std;

struct Item{
    int id;
    string name;
    int quantity;
    int price;
};
int main(){

    int item_count =0;
    Item *cart = nullptr;

    while(true){
        int choice;
        cin>> choice;
        if(choice == 1){
            Item* temp= new Item;
            temp->id = 1;
            cout<<"Enter item name: ";
            cin >>temp->name;
            cout<<"Enter item quantity: ";
            cin>>temp->quantity;
            cout<<"Enter item price: ";
            cin>>temp->price;
            cout<<"\tItem "<<item_count<<" added successfully."<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
            item_count+=1; //count 증가
            if(cart){
                Item* newCart = new Item[item_count]; //새로운 카트를 itemcount 의 크기만큼 생성
                for(int i=0;i<item_count-1;i++){ //itemcount -2 까지 카트꺼를 옮김
                    newCart[i]= cart[i];
                }
                newCart[item_count-1]= *temp;
                delete [] cart;
                cart = newCart;
            }
            else{
                cart = new Item[item_count];
                cart[item_count-1] = *temp;
            }
            delete temp;

        }
        else if(choice ==2){
            int itemNo;
            cout<<"Enter item ID: \t";
            cin>>itemNo;
            /*
            item_count-=1;
            Item *newCart = new Item[item_count];

            for (int i =0;i<itemNo;i++){
                newCart[i] = cart[i];
            }
            for (int i = itemNo; i < item_count; i++) {
                newCart[i] = cart[i+1];
            }
                delete[] cart;
                cart = newCart;
*/
            cart[itemNo].id = 0;
            cout<<"\tItem "<< " deleted successfully."<<endl;

        }
        else if(choice ==3){
            int itemNo;
            cout<<"Enter the item number:";
            cin >>itemNo;
            if((item_count<=itemNo) || (cart[itemNo].id ==0) ){
                cout<< "Item not found"<<endl;
            }
            else{
            cout<<"Item "<<itemNo<<": "<<endl;
            cout<<"\tName: "<<cart[itemNo].name<<endl;
            cout<<"\tQuantity: "<<cart[itemNo].quantity<<endl;
            cout<<"\tPrice: "<<cart[itemNo].price<<endl;
            }
        }
        else if(choice ==4){
            int total = 0;
            cout<<"\tTotal cost: ";
            for(int i=0;i<item_count;i++){
                if(cart[i].id==1) {
                    total += cart[i].price * cart[i].quantity;
                }
            }
            cout<<total<<endl;
        }
        else if (choice ==5){
            break;
        }
        cout<< "1. Add item"<< endl;
        cout<< "2. Delete item"<< endl;
        cout<< "3. View item details"<< endl;
        cout<< "4. View total cost"<< endl;
        cout<< "5. Quit"<< endl;
        cout<< "Enter your choice: ";
    }
    delete [] cart;
    return 0;
}