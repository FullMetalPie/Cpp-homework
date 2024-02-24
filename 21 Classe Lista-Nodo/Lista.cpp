#include <iostream>
#include "Lista.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Lista::Lista() {
    head = nullptr;
}
Lista::Lista(int data) {
    head = new Nodo(data);
    if (!head) 
        cout << "Allocazione fallita.";
}
Lista::~Lista() {
    //Nodo ausiliario
    Nodo* pAux = head;
    //Finche' il nodo ausiliario e' diverso da nullptr
    while (pAux != nullptr) {
        //attribuisco a head il successivo nodo
        head = head->getNextPtr();
        //dealloco paux che corrisponde a head
        delete pAux;
        //attribuisco a paux il nuovo head
        pAux = head;
    }
}
/*GETTER DI HEAD*/
Nodo* Lista::getHead() {
    return head;
}
/*INSERIMENTO IN TESTA*/
bool Lista::insertHead(int data) {
    //Creo nuovo nodo, data e' il dato che passo come parametro | "head" e' un puntatore che punta a se stesso ovviamente
    Nodo* pNew = new Nodo(data, head);
    //Se viene allocato correttamente
    if (pNew) {
        //"head", ovvero il primo nodo diventa pNew
        head = pNew;
        return true;
    } else {
        cerr << "Allocazione fallita.";
        return false;
    }
}
/*INSERIMENTO IN CODA*/
bool Lista::insertTail(int data) {
    //Creo un nuovo nodo con dato il dato passato per riferimento, e come puntatore nullptr dato che e' l'ultimo
    Nodo* pNew = new Nodo(data);
    //Se fallisce l'allocazione
    if (!pNew) {
        cerr << "Allocazione fallita.";
        return false;
    } else {
        //devo raggiungere l'ultimo elemento
        Nodo* pAux = head;
        //finche' pAux non punta al nulla...
        while (pAux->getNextPtr() != nullptr) {
            //Aggiorna dove punta al prossimo nodo
            pAux = pAux->getNextPtr();
        }
        //una volta arrivato alla fine imposta come prossimo puntatore il puntatore del nodo nuovo
        pAux->setNextPtr(pNew);
    }
    return true;
}
/*CONTROLLO SE E' VUOTA*/
bool Lista::isEmpty() {
    if (!head) {
        return true; //e' vuota
    } else {
        return false;
    }
}
/*ELIMINAZIONE*/
bool Lista::remove(int data) {
    bool flag = false; //false = nessun elemento cancellato

    //Controllo se la lista e' vuota
    if (isEmpty()) {
        cout << "La lista e' vuota, nessun elemento da cancellare";
    } else {
        Nodo* pCancel;
        //se l'elemento da eliminare e' il primo:
        if (data == head->getDato()) {
            //imposto pCancel a head
            pCancel = head;
            //head lo imposto al successivo elemento
            head = head->getNextPtr();
            //elimino head
            delete pCancel;
            //true = elemento cancellato
            flag = true;
        } else {
            //Creo nodo pCurrent che punta a head (nodo precendete di pCancel)
            Nodo* pCurrent = head;
            //Imposto pCancel come nodo successivo di head
            pCancel = head->getNextPtr();
            //Finche' pCancel esiste e il dato e' diverso..
            while (pCancel != nullptr && pCancel->getDato() != data) {
                //imposta i due puntatori al prossimo
                pCurrent = pCurrent->getNextPtr();
                pCancel = pCancel->getNextPtr();
            }

            //Se pCancel e' diverso da nullptr allora ha trovato il nodo
            if (pCancel != nullptr) {
                //imposto pCurrent come il nodo successivo a pCancel (che rappresenta il nodo da eliminare)
                pCurrent->setNextPtr(pCancel->getNextPtr());
                //Elimino pCancel
                delete pCancel;
                flag = true;
            } else {
                cout << "L'elemento non esiste.";
            }
        }
    }
    return flag;
}
/*STAMPA LISTA*/
void Lista::display() {
    Nodo* pAux = head;
    if (isEmpty()) {
        cerr << "Lista vuota.";
    } else {
        while (pAux != nullptr) {
            cout << " " << pAux->getDato();
            pAux = pAux->getNextPtr();
        }
    }
}