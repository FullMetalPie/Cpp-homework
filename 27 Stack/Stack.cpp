#include <iostream>
#include "Stack.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Stack::Stack() {
    top = nullptr;
}
Stack::Stack(int data) {
    top = new Nodo(data);
    if (!top) {
        cerr << "Allocazione fallita.";
    }
}
Stack::~Stack() {
    Nodo* pAux = top;
    while (pAux != nullptr) {
        top = top->getNextPtr();
        delete pAux;
        pAux = top;
    }
}
/*GET TOP*/
Nodo* Stack::getTop() {
    return top;
}
/*POP e PUSH*/
Nodo* Stack::pop() {
    Nodo* firstN = top;
    top = top->getNextPtr();
    return firstN;
}
void Stack::push(int data) {
    Nodo* pNew = new Nodo(data, top);
    //pNew.setNextPtr(top);
    top = pNew;
}
/*DISPLAY*/
void Stack::display() {
    if (isEmpty()) {
        cout << "Lista vuota";
    } else {
        Nodo* pAux = top;
        while (pAux != nullptr) {
            cout << pAux->getDato();
            pAux = pAux->getNextPtr();
        }
    }
}
/*DISPLAY TOP*/
void Stack::displayTop() {
    if (!isEmpty()) {
        cout << top->getDato();
    } else {
        cout << "Lista vuota.";
    }
}
/*DISPLAY LAST*/
void Stack::displayLast() {
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        Nodo* pAux = top;
        while (pAux->getNextPtr() != nullptr) {
            pAux = pAux->getNextPtr();
        }

        cout << pAux->getDato();
    }
}
/*VERIFICA SE è VUOTA*/
bool Stack::isEmpty() {
    if (top == nullptr) {
        return true;
    }
    return false;
}
