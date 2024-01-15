#ifndef CARTA_H
#define CARTA_H

#include  <iostream>

using namespace std;

class Carta {
    private:
        string seme, nome;
        int numero, punteggio;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Carta();
        Carta(string seed, string name, int number, int value);
        ~Carta();
        /*SETTER e GETTER */
        void setSeme(string seed);
        void setNome(string name);
        void setNumero(int number);
        void setPunteggio(int value);

        string getSeme();
        string getNome();
        int getNumero();
        int getPunteggio();
        /*METODO CONFRONTA*/
        int confronta(Carta c2, Carta briscola);
        /*OVERLOADING +*/
        int operator+(Carta c2);
        /*OVERLOADING I/O*/
        friend ostream& operator<<(ostream& out, Carta c);
        friend istream& operator>>(istream& in, Carta c);
};

#endif