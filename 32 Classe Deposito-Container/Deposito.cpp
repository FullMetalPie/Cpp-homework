#include <iostream>
#include "Deposito.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Deposito::Deposito() {
    head = nullptr;
}
Deposito::Deposito(Deposito& d) {
    Nodo* pTemp = d.getHead();
    int i = 0;
    while (pTemp) {
        i++;
        pTemp = pTemp->getNextPtr();
    }
    while (i > 0) {
        int j = i;
        while (j > 0) {
            j--;
            pTemp = pTemp->getNextPtr();
        }
        push(pTemp->getInfo());
        i--;
    }
}
Deposito::~Deposito() {
    Nodo* pAux = head;
    while (head != nullptr) {
        delete head;
        head = pAux->getNextPtr();
        pAux = head;
    }
    //while(pop());
}
/*GET HEAD*/
Nodo* Deposito::getHead() {
    return head;
}
/*POP*/
bool Deposito::pop() {
    if (isEmpty()) {
        cout << "La lista e' vuota.";
        return false;
    } else {
        Nodo* pAux = head;
        head = head->getNextPtr();
        delete pAux;
        return true;
    }
    return false;
}
/*PUSH*/
void Deposito::push(Container c) {
    Nodo* pNew = new Nodo(c, head);
    head = pNew;
}
/*IS EMPTY*/
bool Deposito::isEmpty() {
    if (head != nullptr) {
        return false;
    }
    return true;
}
/*IS FULL*/
int Deposito::countNodes() {
    int cont = 0;
    Nodo* pAux = head;
    while (pAux != nullptr) {
        cont++;
        pAux = pAux->getNextPtr();
    }

    return cont;
}
/*OVERLOADING  <<*/
ostream& operator<<(ostream& out, Deposito& d) {
    int n;
    cout << "Quanti container vuoi estrarre dal deposito? \n";
    cin >> n;

    if (n <= d.countNodes()) {
        for (int i = 0; i < n; i++) {
            cout << "=======\nElemento " << i << ":\n";
            Nodo* pAux = d.getHead();
            cout << pAux->getInfo();
            d.pop();
            cout << "\n";
        }
    } else {
        cout << "[Numero non valido]";
    }
    return out;
}