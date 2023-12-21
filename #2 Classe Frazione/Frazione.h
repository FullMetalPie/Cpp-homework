#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione {
    private:
        int numeratore, denominatore;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Frazione();
        Frazione(int num, int den);
        ~Frazione();
        /*SETTER e GETTER*/
        void setNumeratore(int num);
        void setDenominatore(int den);
        void setFrazione(int num, int den);

        int getNumeratore();
        int getDenominatore();
        /*SOMMA - DIFFERENZA - PRODOTTO - RAPPORTO*/
        void somma(Frazione f2);
        void differenza(Frazione f2);
        void prodotto(Frazione f2);
        void rapporto(Frazione f2);
        /*READ*/
        void read();
        /*PRINT*/
        void print();
};

#endif