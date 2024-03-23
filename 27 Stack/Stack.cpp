#include <iostream>
#include "Stack.h"

using namespace std;

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
Nodo* Stack::getTop() {
    return top;
}
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
void Stack::display() {
    Nodo* pAux = top;
    while (pAux != nullptr) {
        cout << pAux->getDato();
        pAux = pAux->getNextPtr();
    }
}
