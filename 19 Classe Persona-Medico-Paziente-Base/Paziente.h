#ifndef PAZIENTE_H
#define PAZIENTE_H

#include <iostream>
#include "Persona.h"
#include "Data.h"

using namespace std;

class Paziente : public Persona {
    private:
        Data nascita;
        string cf;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Paziente();
        Paziente(Data birthdate, string code);
        ~Paziente();
        /*LEGGI*/
        void leggi();
        /*STAMPA*/
        void stampa();
};

#endif