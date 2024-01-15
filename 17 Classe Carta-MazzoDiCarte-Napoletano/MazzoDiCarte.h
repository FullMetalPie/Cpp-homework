#ifndef MAZZZODICARTE_H
#define MAZZODICARTE_H

#include <iostream>
#include "Carta.h"

using namespace std;

class MazzoDiCarte {
    protected:
        Carta *arrCarte;
        int dimensione;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        MazzoDiCarte();
        //MazzoDiCarte(int dim);
        virtual ~MazzoDiCarte();
        /*INIZIALIZZA*/
        virtual void inizializza() = 0;
};

#endif // MAZZZODICARTE_H
