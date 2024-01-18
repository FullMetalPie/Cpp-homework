#include <iostream>
#include "Albergo.h"

using namespace std;

/*COSTRUTTORE e DISTRUTTORE*/
Albergo::Albergo() {
    costoU = 100;
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
/*OVERLOADING --*/
void Albergo::operator--() {
    int i = 0;

    while (i < dim && s[i].getStato() == true) {
        i++;
    }

    if (i < dim) {
        cout << "Stanza eliminata:" << endl;
        //cout << s[i];
        /*elimina stanza*/
    } else {
        cout << "Tutte le stanze sono piene";
    }
}
/*OVERLOADING !*/
float Albergo::operator!() {
    bool flag = true;
    return flag;
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
