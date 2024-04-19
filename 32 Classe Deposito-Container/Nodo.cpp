#include <iostream>
#include "Nodo.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Nodo::Nodo() {
    Container c;
    container = c;
    nextPtr = nullptr;
}
Nodo::Nodo(Container c) {
    container = c;
    nextPtr = nullptr;
}
Nodo::Nodo(Container c, Nodo* next) {
    container = c;
    nextPtr = next;
}
Nodo::~Nodo() {

}
/*GET e SET*/
void Nodo::setNextPtr(Nodo* next) {
    nextPtr = next;
}

Nodo* Nodo::getNextPtr() {
    return nextPtr;
}
/*OVERLOADING <<*/
ostream& operator<<(ostream& out, const Nodo n) {
    out << n.container;

    return out;
}