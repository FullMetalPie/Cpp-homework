#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Pila {
    private:
        Nodo* top;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Pila();
        Pila(Barattolo b);
        ~Pila();
        /*GET TOP*/
        Nodo* getTop();
        /*POP e PUSH*/
        Nodo* pop();
        void push(Barattolo b);
        /*DISPLAY*/
        void display();
        /*VERIFICA SE E' VUOTA*/
        bool isEmpty();
};

#endif
