#include <iostream>
#include "Nodo.h"

using namespace std;

/*COSTRUTTORI*/
Nodo::Nodo() {
    dato = 0;
    nextPtr = nullptr;
}
Nodo::Nodo(int data) {
    dato = data;
    nextPtr = nullptr;
}
Nodo::Nodo(int data, Nodo* next) {
    dato = data;
    nextPtr = next;
}
/*SETTER e GETTER*/
int Nodo::getDato() {
    return dato;
}
Nodo* Nodo::getNextPtr() {
    return nextPtr;
}

void Nodo::setDato(int data) {
    dato = data;
}
void Nodo::setNextPtr(Nodo* next) {
    nextPtr = next;
}