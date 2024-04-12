#include <iostream>
#include "Nodo.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Nodo::Nodo() {
    Snack s;
    snack = s;
    nextPtr = nullptr;
}
Nodo::Nodo(Snack s) {
    snack = s;
    nextPtr = nullptr;
}
Nodo::Nodo(Snack s, Nodo* next) {
    snack = s;
    nextPtr = next;
}
/*SETTER e GETTER*/
Snack Nodo::getSnack() {
    return snack;
}
Nodo* Nodo::getNextPtr() {
    return nextPtr;
}

void Nodo::setSnack(Snack s) {
    snack = s;
}
void Nodo::setNextPtr(Nodo* next) {
    nextPtr = next;
}
