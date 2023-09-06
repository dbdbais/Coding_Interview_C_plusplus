#include <iostream>


using namespace std;
class Point{
    int x,y;
    Point * pNext;
public:
    Point(int x=0,int y=0,Point* const next = nullptr){
        this->x =x;
        this->y = y;
        this->pNext = next;
    }
    Point* getNext(){return this->pNext;}
    void setNext(Point * const pNext){this->pNext = pNext;}
    void print(){cout<< x<< ", "<<y<<endl;}
};
