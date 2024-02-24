#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

using namespace std;

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
        /*INSERT HEAD*/
        bool insertHead(int data);
        /*INSERT TAIL*/
        bool insertTail(int data);
        /*ELIMINAZIONE*/
        bool remove(int data);
        /*CONTROLLO SE E' VUOTA*/
        bool isEmpty();
        /*STAMPA*/
        void display();
        /*RICERCA*/
        Nodo* ricerca(int data);
        /*CONTATORE*/
        int contaNodi();
        /*MEDIA*/
        double calcMedia();
        /*MAX*/
        Nodo* trovaMax();
        /*SOMMA PARI E DISPARI*/
        void sommaPariDispari();
        /*NUOVA LISTA CON ELEMENTI LISTA PRECEDENTE AL QUADRATO*/
        Lista nuovaListaQuadrato();
        /*ELIMINAZIONE HEAD SE PARI*/
        int eliminaHeadPari();
        /*MOLTIPLICAZIONE (*-1) ELEMENTI NEGATIVI*/
        void trasformaInPositivi();
        /*ORDINAMENTO*/
        void ordina();
        /*OPERATORE >> (inserimento in coda)*/
        friend istream& operator>>(istream& in, Lista& l);
        /*ESTRAZIONE HEAD*/
        void operator--(int);
        /*CONCATENA LISTA*/
        Lista& operator+(Lista l2);
        /**/
};

#endif