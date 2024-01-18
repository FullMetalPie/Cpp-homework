#ifndef ALBERGO_H
#define ALBERGO_H

#include <iostream>
#include "Stanza.h"
#include "Immobile.h"

using namespace std;

class Albergo : public Immobile {
    private:
        float costoU;
        Stanza* s;
        int dim;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Albergo();
        Albergo(int dimensione);
        ~Albergo();
        /*OVERLOADING --*/
        void operator--();
        /*OVERLOADING !*/
        float operator!();
        /*STANZE LIBERE*/
        int stanzeLibere();
        /*INIZIALIZZA*/
        void inizializza();
};

#endif // ALBERGO_H
