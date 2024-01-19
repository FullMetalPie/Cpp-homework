#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>
#include "Persona.h"

using namespace std;

class Medico : public Persona {
    protected:
        string specializzazione;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Medico();
        Medico(string name, string surname, string spec);
        ~Medico();
        /*LEGGI*/
        virtual void leggi();
        /*STAMPA*/
        virtual void stampa();
};

#endif