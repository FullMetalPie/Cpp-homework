#ifndef IMMOBILE_H
#define IMMOBILE_H

#include <iostream>

using namespace std;

class Immobile {
    protected:
        string indirizzo;
    public:
        /*COSTRUTTORE e DISTRUTTORE*/
        Immobile();
        virtual ~Immobile();
        /*INIZIALIZZA*/
        virtual void inizializza() = 0;
};

#endif // IMMOBILE_H
