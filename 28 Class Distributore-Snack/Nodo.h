#ifndef NODO_H
#define NODO_H

#include <iostream>
#include "Snack.h"

using namespace std;

class Nodo {
    private:
        Snack snack;
        Nodo* nextPtr;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Nodo();
        Nodo(Snack s);
        Nodo(Snack s, Nodo* next);
        /*SETTER e GETTER*/
        Snack getSnack();
        Nodo* getNextPtr();

        void setSnack(Snack s);
        void setNextPtr(Nodo* next);
};

#endif
