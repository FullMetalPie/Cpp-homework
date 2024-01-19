#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {
    private:
        string nome;
        string cognome;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Persona();
        Persona(string name, string surname);
        virtual ~Persona();
        /*LEGGI*/
        virtual void leggi() = 0;
        /*STAMPA*/
        virtual void stampa();
};

#endif