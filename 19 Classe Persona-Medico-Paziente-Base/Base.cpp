#include <iostream>
#include "Base.h"

using namespace std;

int Base::nrMax = 500;

/*COSTRUTTORI e DISTRUTTORE*/
Base::Base() {
    specializzazione = "undefined";
    dim = 0;
    p = nullptr;
}
Base::Base(const Base& b) {
    specializzazione = b.specializzazione;
    nrMax = b.nrMax;
    dim = b.dim;

    for (int i = 0; i < dim; i++) {
        p[i] = b.p[i];
    }
}
Base::~Base() {
    delete[]p;
}
/*LEGGI*/
void Base::leggi() {
    do {
        cout << "Inserisci dimensione: ";
        cin >> dim;
    } while (dim < 0 || dim > nrMax);
    p = new Paziente[dim];

    for (int i = 0; i < dim; i++) {
        p[i].leggi();
    }
}
/*STAMPA*/
void Base::stampa() {
    for (int i = 0; i < dim; i++) {
        p[i].stampa();
    }
}
/*OPERATORE ++*/
Base& Base::operator++() {
    Paziente temp;
    Paziente arrTemp[dim];

    if (dim < nrMax) {
        temp.leggi();

        for (int i = 0; i < dim; i++) {
            arrTemp[i] = p[i];
        }

        delete[]p;
        p = new Paziente[dim++];

        for (int i = 0; i < dim - 1; i++) {
            p[i] = arrTemp[i];
        }

        p[dim - 1] = temp;
    } else {
        cout << "PAZIENTI MASSIMI RAGGIUNTI!";
    }

    return *this;
}
/*OPERATORE -*/
Base& Base::operator-(const Paziente& p) {
    return *this;
}