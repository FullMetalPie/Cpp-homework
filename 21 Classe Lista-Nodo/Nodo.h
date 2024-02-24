#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo {
    private:
        int dato;
        Nodo* nextPtr;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Nodo();
        Nodo(int data);
        Nodo(int data, Nodo* next);
        /*SETTER e GETTER*/
        int getDato();
        Nodo* getNextPtr();

        void setDato(int data);
        void setNextPtr(Nodo* next);
};

#endif