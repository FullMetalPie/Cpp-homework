#ifndef DISTRIBUTORE_H
#define DISTRIBUTORE_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Distributore {
    private:
        Nodo* top;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Distributore();
        Distributore(Snack s);
        ~Distributore();
        /*GET TOP*/
        Nodo* getTop();
        /*POP e PUSH*/
        Nodo* pop();
        void push(Snack s);
        /*DISPLAY*/
        void display();
        /*DISPLAY TOP*/
        void displayTop();
        /*DISPLAY LAST*/
        void displayLast();
        /*VERIFICA SE E' VUOTA*/
        bool isEmpty();
};

#endif