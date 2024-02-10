#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class List {
    private:
        Node* head;
    public:
        List();
        ~List();
        bool isEmpty();
        void display();
        bool insertHead(int data);
        bool insertTail(int data);
        bool remove(int data);
};

#endif // LIST_H
