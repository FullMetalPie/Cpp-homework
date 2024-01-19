#ifndef STANZA_H
#define STANZA_H

#include <iostream>

using namespace std;

class Stanza {
    private:
        int numero;
        float mq;
        int piano;
        bool stato;
    public:
        /*COSTRUTTORE e DISTRUTTORE*/
        Stanza();
        ~Stanza();
        /*SETTER e GETTER*/
        void setNumero(int n);
        void setMq(float metri);
        void setPiano(int p);
        void setStato(bool st);
        void setAll(int n, float metri, int p, bool st);

        int getNumero();
        float getMq();
        int getPiano();
        bool getStato();
        /*OVERLOADING i/o*/
        friend ostream& operator<<(ostream& out, const Stanza room);
        friend istream& operator>>(istream& inp, Stanza& room);
};

#endif // STANZA_H
