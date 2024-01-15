#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>

using namespace std;


class Libro {
    private:
        string ISBN;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Libro();
        Libro(string code);
        virtual ~Libro();
        /*SETTER e GETTER*/
        void setISBN(string code);

        string getISBN();
        /*LEGGI*/
        virtual void leggi() = 0;
        /*STAMPA*/
        virtual void stampa() = 0;
};

#endif