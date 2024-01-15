#include <iostream>
#include "MazzoDiCarte.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
MazzoDiCarte::MazzoDiCarte() {
    dimensione = 1;
    arrCarte = new Carta[dimensione];
}
/*
MazzoDiCarte::MazzoDiCarte(int dim) {
    dimensione = dim;
    arrCarte = new Carta[dimensione];
}
*/
MazzoDiCarte::~MazzoDiCarte() {
    delete[]arrCarte;
}
