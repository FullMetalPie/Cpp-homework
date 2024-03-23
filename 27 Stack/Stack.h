#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Stack {
    private:
        Nodo* top;
    public:
        Stack();
        Stack(int data);
        ~Stack();
        Nodo* getTop();
        Nodo* pop();
        void push(int data);
        void display();
};

#endif // STACK_H
