#ifndef ROMANZO_H
#define ROMANZO_H

#include <iostream>
#include "Libro.h"

using namespace std;

class Romanzo : public Libro {
    private:
        string autore;
        string titolo;
        float prezzo;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Romanzo();
        Romanzo(string code, string author, string title, float price);
        ~Romanzo();
        /*SETTER e GETTER*/
        void setAutore(string author);
        void setTitolo(string title);
        void setPrezzo(float price);
        void setAll(string code, string author, string title, float price);
        
        string getAutore();
        string getTitolo();
        float getPrezzo();
        /*LEGGI*/
        void leggi();
        /*STAMPA*/
        //void stampa();
        /*OPERATORE !=*/
        bool operator!=(Romanzo& book);
        /*FUNZIONE FRIEND*/
        friend ostream& operator<<(ostream& out, Romanzo& book);
};

#endif