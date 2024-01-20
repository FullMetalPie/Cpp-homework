#ifndef BASE_H
#define BASE_H

#include <iostream>
#include "Medico.h"
#include "Paziente.h"

using namespace std;

class Base : protected Medico {
    private:
        static int nrMax;
        int dim;
        Paziente* p;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Base();
        Base(const Base& b);
        ~Base();
        /*LEGGI*/
        void leggi();
        /*STAMPA*/
        void stampa();
        /*OPERATORE ++*/
        Base& operator++();
        /*OPERATORE -*/
        Base& operator-(const Paziente& p);
};

#endif