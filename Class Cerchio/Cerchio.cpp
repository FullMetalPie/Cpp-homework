#include <iostream>
#include "Cerchio.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Cerchio::Cerchio() {
    raggio = 1;
}
Cerchio::Cerchio(float r) {
    if (r > 0) {
        raggio = r;
    } else {
        raggio = 1;
    }
}
Cerchio::~Cerchio() {

}
/*SETTER e GETTER*/
void Cerchio::setRaggio(float r) {
    if (r > 0) {
        raggio = r;
    } else {
        raggio = 1;
    }
}

float Cerchio::getRaggio() {
    return raggio;
}
/*CALCOLO CIRCONFERENZA*/
float Cerchio::calcCirconferenza() {
    float circonferenza;
    circonferenza = (raggio * 2) * 3.14;

    return circonferenza;
}
float Cerchio::calcArea() {
    float area;
    area = 3.14 * (raggio * raggio);

    return area;
}
/*CREA CERCHIO CON RAGGIO DOPPIO*/
void Cerchio::creaCerchio(Cerchio c) {
    Cerchio(raggio * 2);
}
/*CONFRONTO CERCHI*/
void congruenti(Cerchio c1, Cerchio c2) {
    if (c1.calcCirconferenza() == c2.calcCirconferenza()) {
        cout << "I due cerchi sono congruenti." << endl;
    } else {
        cout << "I due cerchi non sono congruenti." << endl;
    }
}