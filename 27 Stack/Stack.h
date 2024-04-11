#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Stack {
    private:
        Nodo* top;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Stack();
        Stack(int data);
        ~Stack();
        /*GET TOP*/
        Nodo* getTop();
        /*POP e PUSH*/
        Nodo* pop();
        void push(int data);
        /*DISPLAY*/
        void display();
        /*DISPLAY TOP*/
        void displayTop();
        /*DISPLAY LAST*/
        void displayLast();
        /*VERIFICA SE è VUOTA*/
        bool isEmpty();
};

#endif // STACK_H
