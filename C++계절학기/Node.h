
#ifndef SUMMER_NODE_H
#define SUMMER_NODE_H


#include "Song.h"

class Node {
public:
    Node(Song d) : data(d), next(nullptr) {}

    friend class SinglyLinkedList;

private:
    Song data;
    Node* next;
};

#endif //SUMMER_NODE_H
