#include <iostream>
#include "Nodo.h"

using namespace std;

/*COSTRUTTORI*/
Nodo::Nodo() {
    Barattolo b;
    barattolo = b;
    nextPtr = nullptr;
}
Nodo::Nodo(Barattolo b) {
    barattolo = b;
    nextPtr = nullptr;
}
Nodo::Nodo(Barattolo b, Nodo* next) {
    barattolo = b;
    nextPtr = next;
}
/*SETTER e GETTER*/
Barattolo Nodo::getDato() {
    return barattolo;
}
Nodo* Nodo::getNextPtr() {
    return nextPtr;
}

void Nodo::setDato(Barattolo b) {
    barattolo = b;
}
void Nodo::setNextPtr(Nodo* next) {
    nextPtr = next;
}