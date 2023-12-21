#include <iostream>
#include "Frazione.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Frazione::Frazione() {
    numeratore = 1;
    denominatore = 1;
}
Frazione::Frazione(int num, int den) {
    if (numeratore > 0) {
        numeratore = num;
    } else {
        numeratore = 1;
    }

    if (denominatore > 0) {
        denominatore = den;
    } else {
        denominatore = 1;
    }
} 
Frazione::~Frazione() {

}
/*SETTER e GETTER*/
void Frazione::setNumeratore(int num) {
    if (numeratore > 0) {
        numeratore = num;
    } else {
        numeratore = 1;
    }
}
void Frazione::setDenominatore(int den) {
    if (denominatore > 0) {
        denominatore = den;
    } else {
        denominatore = 1;
    }
}
void Frazione::setFrazione(int num, int den) {
    if (numeratore > 0) {
        numeratore = num;
    } else {
        numeratore = 1;
    }

    if (denominatore > 0) {
        denominatore = den;
    } else {
        denominatore = 1;
    }
}

int Frazione::getNumeratore() {
    return numeratore;
}
int Frazione::getDenominatore() {
    return denominatore;
}
/*SOMMA - DIFFERENZA - PRODOTTO - RAPPORTO*/
void Frazione::somma(Frazione f2) {
    cout << "heheheha";
}
void Frazione::differenza(Frazione f2) {
    cout << "heheheha";
}
void Frazione::prodotto(Frazione f2) {
    cout << "heheheha";
}
void Frazione::rapporto(Frazione f2) {
    cout << "heheheha";
}
/*READ*/
void Frazione::read() {
    do {   
        cout << "Numeratore: ";
        cin >> numeratore;
    } while (numeratore == 0);

    do {   
        cout << "Denominatore: ";
        cin >> denominatore;
    } while (denominatore == 0);
}
/*PRINT*/
void Frazione::print() {
    cout << numeratore << "/" << denominatore;
}