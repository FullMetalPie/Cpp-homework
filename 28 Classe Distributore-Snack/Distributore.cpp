#include <iostream>
#include "Distributore.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Distributore::Distributore() {
    top = nullptr;
}
Distributore::Distributore(Snack s) {
    top = new Nodo(s);
    if (!top) {
        cerr << "Allcazione fallita.";
    }
}
Distributore::~Distributore() {
    Nodo* pAux = top;
    while (top != nullptr) {
        top = top->getNextPtr();
        delete top;
        pAux = top;
    }
}
/*GET TOP*/
Nodo* Distributore::getTop() {
    return top;
}
/*POP e PUSH*/
Nodo* Distributore::pop() {
    Nodo* pAux = top;
    top = top->getNextPtr();
    return pAux;

}
void Distributore::push(Snack s) {
    Nodo* pNew = new Nodo(s);
    pNew->setNextPtr(top);
    top = pNew;
}
/*DISPLAY*/
void Distributore::display() {
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        Nodo* pAux = top;
        while (pAux != nullptr) {
            cout << "Nome: " << top->getSnack().getName() << endl;
            cout << "Code: " << top->getSnack().getCode() << endl;  
            pAux = pAux->getNextPtr();
        }
    }
}
/*DISPLAY TOP*/
void Distributore::displayTop() {
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        cout << "Nome: " << top->getSnack().getName();
        cout << "Code: " << top->getSnack().getCode();
    }
}
/*DISPLAY LAST*/
void Distributore::displayLast() {
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        Nodo* pAux = top;
        while (pAux->getNextPtr() != nullptr) {  
            pAux = pAux->getNextPtr();
        }
        cout << "Nome: " << top->getSnack().getName();
        cout << "Code: " << top->getSnack().getCode();
    }
}
/*VERIFICA SE E' VUOTA*/
bool Distributore::isEmpty() {
    if (top != nullptr) {
        return false;
    }
    return true;
}