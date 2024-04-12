#ifndef NODO_H
#define NODO_H

#include "Barattolo.h"

class Nodo {
    private:
        Barattolo barattolo;
        Nodo* nextPtr;
    public:
        /*COSTRUTTORI*/
        Nodo();
        Nodo(Barattolo b);
        Nodo(Barattolo b, Nodo* next);
        /*SETTER e GETTER*/
        Barattolo getDato();
        Nodo* getNextPtr();

        void setDato(Barattolo b); 
        void setNextPtr(Nodo* next);      
};

#endif