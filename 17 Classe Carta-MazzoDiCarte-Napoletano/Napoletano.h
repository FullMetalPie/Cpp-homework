#ifndef NAPOLETANO_H
#define NAPOLETANO_H

#include <iostream>
#include "MazzoDiCarte.h"

using namespace std;

class Napoletano : public MazzoDiCarte {
    public:
        /*COSTRUTTORE E DISTRUTTORE*/
        Napoletano();
        ~Napoletano();
        /*GETTER DIMENSIONE*/
        int getDim();
        /*METODO INIZIALIZZA*/
        void inizializza();
        /*OPERATORE --*/
        Carta operator--();
        /*STAMPA TUTTE LE CARTE*/
        void stampa();
        /*NUMERO CARTE IN UN DATO MOMENTO*/
        int numeroCarta();
};

#endif // NAPOLETANO_H
