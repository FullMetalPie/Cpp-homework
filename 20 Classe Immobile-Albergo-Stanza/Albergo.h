#ifndef ALBERGO_H
#define ALBERGO_H

#include <iostream>
#include "Stanza.h"
#include "Immobile.h"

using namespace std;

class Albergo : public Immobile {
    private:
        static float costoU;
        Stanza* s;
        int dim;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Albergo();
        Albergo(int dimensione);
        ~Albergo();
        /*GETTER*/
        float getCosto();
        int getDim();
        /*OVERLOADING --*/
        Stanza operator--();
        /*OVERLOADING !*/
        float operator!();
        /*STANZE LIBERE*/
        int stanzeLibere();
        /*INIZIALIZZA*/
        void inizializza();
        /*NUMERO CAMERE LIBERE*/
        int camereLibere();
        /*OVERLOADING * */
        float operator*(int p);
        friend float operator*(int p, Albergo a);
};

#endif // ALBERGO_H
