#ifndef NODO_H
#define NODO_H

#include <iostream>
#include "Container.h"

using namespace std;

class Nodo {
    private:
        Container container;
        Nodo* nextPtr;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Nodo();
        Nodo(Container c);
        Nodo(Container c, Nodo* next);
        ~Nodo();
        /*GET e SET*/
        void setNextPtr(Nodo* next);

        Container getInfo();

        Nodo* getNextPtr();
        /*OVERLOADING <<*/
        friend ostream& operator<<(ostream& out, const Nodo n);
};

#endif
