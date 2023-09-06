//
// Created by newbi on 2023-07-17.
//
#include<iostream>
#include<map>
using namespace std;

enum class Genre {    Action,    Comedy,    Drama,    Romance,    SciFi};
enum class Rating {    OneStar,    TwoStars,    ThreeStars,    FourStars,    FiveStars };
Genre getGenre(int n){
    Genre movieGenre;
    if(n==0){
        movieGenre = Genre::Action;
    }
    else if(n==1){
        movieGenre = Genre::Comedy;
    }
    else if(n==2){
        movieGenre = Genre::Drama;
    }
    else if(n==3){
        movieGenre = Genre::Romance;
    }
    else if(n==4){
        movieGenre = Genre::SciFi;
    }
    return movieGenre;
}

Rating getRate(int n){
    Rating rate;
    if(n==1){
        rate = Rating::OneStar;
    }
    else if(n==2){
        rate = Rating::TwoStars;
    }
    else if(n==3){
        rate = Rating::ThreeStars;
    }
    else if(n==4){
        rate = Rating::FourStars;
    }
    else if(n==5){
        rate = Rating::FiveStars;
    }
    return rate;
}
int main() {

    map<string,pair<int,int>> rtemp;
    map<string,int> gtemp;
    int genre, rate;
    while(true ){
        string name = "";
        getline(cin, name);
        if(name[0] == 'q' && name.size() ==1)
            break;
        cin >> genre >> rate;
        cin.ignore();
        if(rtemp.find(name)!= rtemp.end()){
            auto cnt = rtemp.find(name);
            int trate =cnt->second.second;
            int tcnt = cnt->second.first;
            rtemp.erase(name);
            rtemp.insert(make_pair(name, make_pair(tcnt+1, trate+rate)));
        }
        else{
            rtemp.insert(make_pair(name, make_pair(1, rate)));
        }
        gtemp.insert(make_pair(name, genre));
    }
    for(auto elem : rtemp){
        cout<<elem.first<<": "<<elem.second.first<<" ratings, average rating "<<elem.second.second / elem.second.first<<" stars, genre: "<<gtemp.find(elem.first)->second<<endl;
    }

}