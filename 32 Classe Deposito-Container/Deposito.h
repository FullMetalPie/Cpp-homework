#ifndef DEPOSITO_H
#define DEPOSITO_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Deposito {
    private:
        Nodo* head;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Deposito();
        Deposito(Deposito& d);
        ~Deposito();
        /*GET HEAD*/
        Nodo* getHead();
        /*POP*/
        bool pop();
        /*PUSH*/
        void push(Container c);
        /*IS EMPTY*/
        bool isEmpty();
        /*IS FULL*/
        int countNodes();
        /*OVERLOADING  <<*/
        friend ostream& operator<<(ostream& out, Deposito& d);
};

#endif