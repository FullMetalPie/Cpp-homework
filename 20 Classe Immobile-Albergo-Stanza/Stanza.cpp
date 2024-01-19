#include <iostream>
#include "Stanza.h"

using namespace std;

/*COSTRUTTORE e DISTRUTTORE*/
Stanza::Stanza() {
    numero = 0;
    mq = 0.0;
    piano = 0;
    stato = true;
}
Stanza::~Stanza() {

}
/*SETTER e GETTER*/
void Stanza::setNumero(int n) {
    numero = n;
}
void Stanza::setMq(float metri) {
    mq = metri;
}
void Stanza::setPiano(int p) {
    piano = p;
}
void Stanza::setStato(bool st) {
    stato = st;
}
void Stanza::setAll(int n, float metri, int p, bool st) {
    numero = n;
    mq = metri;
    piano = p;
    stato = st;
}

int Stanza::getNumero() {
    return numero;
}
float Stanza::getMq() {
    return mq;
}
int Stanza::getPiano() {
    return piano;
}
bool Stanza::getStato() {
    return stato;
}
/*OVERLOADING i/o*/
ostream& operator<<(ostream& out, const Stanza room) {
    out << "Numero: " << room.numero << endl;
    out << "Metri Quadri: " << room.mq << endl;
    out << "Piano: " << room.piano << endl;
    out << "Stato: " << room.stato << endl;

    return out;
}
istream& operator>>(istream& inp, Stanza& room) {
    int n;
    float metri;
    int p;
    int s;

    do {
        cout << "Numero:";
        inp >> n;
    } while (n < 0 || n > 50);
    room.setNumero(n);

    do {
        cout << "Metri Quadri:";
        inp >> metri;
    } while (metri < 8.0 || metri > 14.0);
    room.setMq(metri);

    do {
        cout << "Piano:";
        inp >> p;
    } while (p < 0);
    room.setPiano(p);

    do {
        cout << "Stato camera: (0. occupata, 1. libera) ";
        inp >> s;
    } while (s < 0 || s > 1);
    if (s == 0) {
        room.setStato(false);
    } else {
        room.setStato(true);
    }

    return inp;
}
