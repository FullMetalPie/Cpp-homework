#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {
    public:
        string nome;
        string cognome;
    private:
        /*COSTRUTTORI e DISTRUTTORE*/
        Persona();
        Persona(string name, string surname);
        ~Persona();
        /*LEGGI*/
        virtual void leggi();
        /*STAMPA*/
        virtual void stampa();
};

#endif