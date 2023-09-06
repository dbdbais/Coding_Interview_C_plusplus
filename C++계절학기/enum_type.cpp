#include <iostream>
using namespace std;

enum Choice {ROCK,PAPER, SCISSOR};

int main(){
    int n;
    Choice player_choice;
    cin >> n;
    if(n==0){
        player_choice = Choice::ROCK;
        cout<<"You chose rock."<<endl;
    }
    else if(n==1){
        player_choice = Choice::PAPER;
        cout<<"You chose paper."<<endl;
    }
    else if(n==2){
        player_choice = Choice::SCISSOR;
        cout<<"You chose scissors."<<endl;
    }

    switch (player_choice) {
        case ROCK:
            cout<<"The computer chose rock.\nYou tied!"<<endl;
            break;
        case SCISSOR:
            cout<<"The computer chose paper.\nYou won!"<<endl;
            break;
        case PAPER:
            cout<<"The computer chose scissors.\nThe computer won!"<<endl;
            break;
        default:
            break;
    }

    return 0;

}
