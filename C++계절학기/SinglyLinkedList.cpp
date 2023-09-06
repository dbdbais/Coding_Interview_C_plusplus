#include "SinglyLinkedList.h"
using namespace std;
#include<iostream>
#include <algorithm>
void SinglyLinkedList::addNode(Song data) {
    Node *temp = new Node(data);
    if(head == nullptr){    //머리가 비었을 경우 머리를 이번 데이터로 채택
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}

void SinglyLinkedList::printList() {
    Node * node = head;
    while(node != nullptr){
        cout<<node->data.toString()<<endl;
        node= node->next;
    }
}
void SinglyLinkedList::removeNode(Song data) {
    string name, artist;
    Node * node = head;
    if(head!= nullptr && head->data.equals(data)){
        head = head->next;
    }
    else{
        while(node->next != nullptr){
            if(node->next->data.equals(data)){
                Node *nextOfRemoved = node->next->next;
                node->next = nextOfRemoved;
                break;
            }
            node= node->next;
        }
    }
}

