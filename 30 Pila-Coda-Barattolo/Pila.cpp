#include <iostream>
#include "Pila.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Pila::Pila() {
    top = nullptr;
}
Pila::Pila(Barattolo b) {
    top = new Nodo(b);
    if (!top) {
        cerr << "Allocazione fallita.";
    }
}
Pila::~Pila() {
    if (top != nullptr) {
        Nodo* pAux = top;
        while (top != nullptr) {
            delete top;
            top = pAux->getNextPtr();
            pAux = top;
        }
    }
}
/*GET TOP*/
Nodo* Pila::getTop() {
    return top;
}
/*POP e PUSH*/
Nodo* Pila::pop() {
    Nodo* pAux = top;
    top = top->getNextPtr();
    return pAux;
}
void Pila::push(Barattolo b) {
    Nodo* pNew = new Nodo(b, top);
    top = pNew;
}
/*DISPLAY*/
void Pila::display() {
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        int cont = 0;
        Nodo* pAux = top;

        cout << "Stampa pila: ";

        while (pAux != nullptr) {
            cout << endl << "Elemento " << cont << endl;
            cout << pAux->getDato().getName() << endl;
            pAux = pAux->getNextPtr();
            cont++;
        }
    }
}
/*VERIFICA SE E' VUOTA*/
bool Pila::isEmpty() {
    if (top == nullptr) {
        return true;
    }
    return false;
}
