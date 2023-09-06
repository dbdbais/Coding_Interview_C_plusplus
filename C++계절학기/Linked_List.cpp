#include <iostream>
#include "point_prac.cpp"
using namespace std;

class LinkedList{
    Point *head;
public:
    LinkedList(){head = nullptr;}
    void print(){
        Point * p = head;
        while (p != nullptr){
            p->print();
            p= p->getNext();
        }
    }
    void prepend(Point* const newPoint){
        if(head == nullptr) head = newPoint;
        else{
            newPoint->setNext(head);
            head = newPoint;
        }
    }
    void insertAfter(Point* const prev, Point* const newPoint){
        newPoint->setNext(prev->getNext());
        prev->setNext(newPoint);
    }
    void remove(Point* const toBeRemoved){
        if(toBeRemoved == head){
            head = head->getNext();
            return;
        }
        Point *p = head;
        while(p != nullptr){
            if(p->getNext() == toBeRemoved){
                Point * temp = p->getNext()->getNext();
                p->setNext(temp);
                break;
            }
            p=p->getNext();
        }
    }
};
