#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista {
    private:
        Nodo* head;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Lista();
        Lista(int data);
        ~Lista();
        /*GETTER DI HEAD*/
        Nodo* getHead();
        /*INSERIMENTO IN TESTA*/
        bool insertHead(int data);
        /*INSERIMENTO IN CODA*/
        bool insertTail(int data);
        /*CONTROLLO SE E' VUOTA*/
        bool isEmpty();
        /*ELIMINAZIONE*/
        bool remove(int data);
        /*STAMPA LISTA*/
        void display();
}; 

#endif