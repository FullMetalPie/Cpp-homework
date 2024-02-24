#include <iostream>
#include "Lista.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Lista::Lista() {
    head = nullptr;
}
Lista::Lista(int data) {
    head = new Nodo(data);
    if (!head) {
        cerr << "Allocazione fallita.";
    }
}
Lista::~Lista() {
    Nodo* pAux = head;
    while (pAux != nullptr) {
        head = head->getNextPtr();
        delete pAux;
        pAux = head;
    }
}
/*GETTER DI HEAD*/
Nodo* Lista::getHead() {
    return head;
}
/*INSERT HEAD*/
bool Lista::insertHead(int data) {
    Nodo* pNew = new Nodo(data, head);
    if (pNew) {
        head = pNew;
        return true;
    } else {
        cerr << "Allocazione fallita.";
        return false;
    }
}
/*INSERT TAIL*/
bool Lista::insertTail(int data) {
    Nodo* pNew = new Nodo(data);
    if (isEmpty()) {
        head = pNew;
        return true;
    } else {
        if (pNew) {
            Nodo* pAux = head;
            while (pAux->getNextPtr() != nullptr) {
                pAux = pAux->getNextPtr();
            }
            pAux->setNextPtr(pNew);
            return true;
        } else {
            cerr << "Allocazione fallita.";
            return false;
        }
    }
}
/*ELIMINAZIONE*/
bool Lista::remove(int data) {
    bool flag = false;
    if (isEmpty()) {
        return flag;
    } else {
        Nodo* pCancel;
        if (head->getDato() == data) {
            pCancel = head;
            head = head->getNextPtr();
            delete pCancel;
            flag = true;
        } else {
            Nodo* pCurrent = head;
            pCancel = head->getNextPtr();
            while (pCancel != nullptr && pCancel->getDato() != data) {
                pCurrent = pCurrent->getNextPtr();
                pCancel = pCancel->getNextPtr();
            }

            if (pCancel != nullptr) {
                pCurrent->setNextPtr(pCancel->getNextPtr());
                delete pCancel;
                flag = true;
            } else {
                cout << "L'elemento non esiste";
            }
        }
    }

    return flag;
}
/*CONTROLLO SE E' VUOTA*/
bool Lista::isEmpty() {
    if (head) {
        return false;
    } else {
        return true;
    }
}
/*STAMPA*/
void Lista::display() {
    Nodo* pAux = head;
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        while (pAux != nullptr) {
            cout << " " << pAux->getDato();
            pAux = pAux->getNextPtr();
        }
    }
}
/*RICERCA*/
Nodo* Lista::ricerca(int data) {
    if (isEmpty()) {
        cout << "Lista vuota.";
        return nullptr;
    } else {
        Nodo* pAux = head;
        while (pAux != nullptr && pAux->getDato() != data) {
            pAux = pAux->getNextPtr();
        }

        if (pAux != nullptr) {
            cout << "Elemento trovato.";
            return pAux;
        } else {
            cout << "Elemento non trovato.";
            return nullptr;
        }
    }
}
/*CONTATORE*/
int Lista::contaNodi() {
    int cont;
    if (isEmpty()) {
        cout << "Lista vuota.";
        return 0;
    } else {
        Nodo* pAux = head;
        cont = 0;
        while (pAux != nullptr) {
            cont++;
            pAux = pAux->getNextPtr();
        }
    }

    return cont;
}
/*MEDIA*/
double Lista::calcMedia() {
    double somma = 0;
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        Nodo* pAux = head;
        while (pAux != nullptr) {
            somma += pAux->getDato();
            pAux = pAux->getNextPtr();
        }
    }
    double media = somma / double(contaNodi());
    return media;
}
/*MAX*/
Nodo* Lista::trovaMax() {
    Nodo* max;
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        Nodo* pAux = head;
        while (pAux != nullptr) {
            if (pAux->getDato() > max->getDato()) {
                max = pAux;
            }
            pAux = pAux->getNextPtr();
        }
    }
    return max;
}
/*SOMMA PARI E DISPARI*/
void Lista::sommaPariDispari() {
    int sommaPari;
    int sommaDispari;
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        sommaPari = 0;
        sommaDispari = 0;
        Nodo* pAux = head;
        while (pAux != nullptr) {
            if ((pAux->getDato() % 2) == 0) {
                sommaPari += pAux->getDato();
            } else {
                sommaDispari += pAux->getDato();
            }
            pAux = pAux->getNextPtr();
        }
    }

    cout << "Somma numeri pari: " << sommaPari;
    cout << endl << "Somma numeri dispari " << sommaDispari;
}
/*NUOVA LISTA CON ELEMENTI LISTA PRECEDENTE AL QUADRATO*/
Lista Lista::nuovaListaQuadrato() {
    Lista newList;
    Nodo* pAux = head;
    while (pAux != nullptr) {
        newList.insertHead(pAux->getDato()*pAux->getDato());
        pAux = pAux->getNextPtr();
    }

    return newList;
}
/*ELIMINAZIONE HEAD SE PARI*/
int Lista::eliminaHeadPari() {
    if (isEmpty()) {
        cout << "Lista vuota.";
        return 0;
    } else {
        if ((head->getDato() % 2) == 0) {
            Nodo* pAux = head->getNextPtr();
            delete head;
            head = pAux;
            return 1;
        } else {
            return 0;
        }
    }
}
/*MOLTIPLICAZIONE (*-1) ELEMENTI NEGATIVI*/
void Lista::trasformaInPositivi() {
    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        Nodo* pAux = head;
        while (pAux != nullptr) {
            if (pAux->getDato() < 0) {
                pAux->setDato(pAux->getDato() * -1);
            }
            pAux = pAux->getNextPtr();
        }
    }
}
/*ORDINAMENTO*/
void Lista::ordina() {
    Nodo* pi = head;
    Nodo* pj;
    Nodo* temp;

    if (isEmpty()) {
        cout << "Lista vuota.";
    } else {
        while (!pi->getNextPtr()) {
            pj = pi->getNextPtr();
            while (!pj) {
                if (pi->getDato() < pj->getDato()) {

                    temp->setDato(pi->getDato());
                    pi->setDato(pj->getDato());
                    pj->setDato(temp->getDato());
                    
                    pj = pj->getNextPtr();
                }
            }
            pi = pi->getNextPtr();
        }

        /*Nodo* pAux = head;
        Nodo* next = head->getNextPtr();
        Nodo* temp;
        while (pAux->getNextPtr() != nullptr) {
            if (next->getDato() < pAux->getDato()) {
                temp->setDato(next->getDato());
                next->setDato(pAux->getDato());
                pAux->setDato(temp->getDato());
            }
            pAux = pAux->getNextPtr();
            next = next->getNextPtr();
        }*/
    }
}
/*OPERATORE >> (inserimento in coda)*/
istream& operator>>(istream& in, Lista& l) {
    int n;
    int data;
    cout << "Quanti elementi vuoi inserire?";
    in >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << (i + 1) << " :" << endl;
        in >> data;
        l.insertTail(data);
    }
    return in;
}
/*ESTRAZIONE HEAD*/
void Lista::operator--(int) {
    Nodo* pAux = head;
    head = head->getNextPtr();
    delete pAux;
}
/*CONCATENA LISTA*/
Lista& Lista::operator+(Lista l2) {
    Nodo* pAux = head;
    while (pAux->getNextPtr() != nullptr) {
        pAux = pAux->getNextPtr();
    }
    pAux->setNextPtr(l2.head);
    l2.head = nullptr;
    return *this;
}