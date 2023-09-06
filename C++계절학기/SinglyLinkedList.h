#ifndef SUMMER_SINGLYLINKEDLIST_H
#define SUMMER_SINGLYLINKEDLIST_H

#include "Node.h"

class SinglyLinkedList {
public:
    SinglyLinkedList() : head(nullptr) {}
    void addNode(Song data);
    void removeNode(Song data);
    void printList();

private:
    Node* head;
};
#endif //SUMMER_SINGLYLINKEDLIST_H
