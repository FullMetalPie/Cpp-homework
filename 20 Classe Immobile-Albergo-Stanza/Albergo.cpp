#include <iostream>
#include "Albergo.h"

using namespace std;

float Albergo::costoU = 100;

/*COSTRUTTORE e DISTRUTTORE*/
Albergo::Albergo() {
    s = nullptr;
    dim = 0;
}
Albergo::Albergo(int dimensione) {
    costoU = 100;
    dim = dimensione;
    s = new Stanza[dim];
}
Albergo::~Albergo() {
    delete[]s;
}
/*GETTER*/
float Albergo::getCosto() {
    return costoU;
}
int Albergo::getDim() {
    return dim;
}
/*OVERLOADING --*/
Stanza Albergo::operator--() {
    int i = 0;
    Stanza room;
    Stanza temp[dim];

    while (i < dim && s[i].getStato() != true) {
        i++;
    }

    if (i < dim) {
        room = s[i];

        /*COPIA ARRAY*/
        for (int j = 0; j < dim; j++) {
            temp[j] = s[j];
        }

        /*ELIMINAZIONE ARRAY*/
        delete[]s;

        /*ELIMINAZIONE ELEMENTO*/
        for (int j = i; j < dim - 1; j++) {
            temp[j] = temp[j + 1];
        }

        /*RIALLOCAZIONE ARRAY*/
        
        s = new Stanza[dim--];

        for (int j = 0; j < dim; j++) {
            s[j] = temp[j];
        }

    } else {
        cout << "Tutte le stanze sono occupate";
    }

    return room;
}
/*OVERLOADING !*/
float Albergo::operator!() {
    float totDimensioni = 0.0;

    for (int i = 0; i < dim; i++) {
        totDimensioni = totDimensioni + s[i].getMq();
    }
    return totDimensioni;
}
/*STANZE LIBERE*/
int Albergo::stanzeLibere() {
    int contatore = 0;

    for (int i = 0; i < dim; i++) {
        if (s[i].getStato() == false) {
            contatore++;
        }
    }

    return contatore;
}
/*INIZIALIZZA*/
void Albergo::inizializza() {
    string address;
    cout << "Indirizzo albergo: ";
    cin >> address;

    indirizzo = address;

    for (int i = 0; i < dim; i++) {
        cout << "Stanza " << i + 1 << ":" << endl;
        cin >> s[i];
    }
}
/*NUMERO CAMERE LIBERE*/
int Albergo::camereLibere() {
    int cont = 0;

    for (int i = 0; i < dim; i++) {
        if (s[i].getStato() == false) {
            cont++;
        }
    }

    return cont;
}
/*OVERLOADING * */
float Albergo::operator*(int p) {
    int j = 0;
    int flag;
    while (j < dim && s[j].getPiano() != p && s[j].getStato() != true) {
        j++;
    }

    if (j < dim) {
        s[j].setStato(false);
    }

    return (costoU * s[j].getMq());
}
float operator*(int p, Albergo a) {
    int j = 0;
    int flag;
    while (j < a.getDim() && a.s[j].getPiano() != p && a.s[j].getStato() != true) {
        j++;
    }

    if (j < a.getDim()) {
        a.s[j].setStato(false);
    }

    return (a.getCosto() * a.s[j].getMq());
}
