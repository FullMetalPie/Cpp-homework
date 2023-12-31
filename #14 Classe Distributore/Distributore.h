#ifndef DISTRIBUTORE_H
#define DISTRIBUTORE_H

#include <iostream>
#include <cmath>
using namespace std;

class Distributore {
    private:
        string tipoCarburante;
        float prezzo;
        float litri;
        float capienza;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Distributore();
        Distributore(string type, float price, float litres, float capacity);
        ~Distributore();
        /*SETTER e GETTER*/
        void setTipo(string type);
        void setPrezzo(float price);
        void setLitri(float litres);
        void setCapienza(float capacity);

        string getTipo();
        float getPrezzo();
        float getLitri();
        float getCapienza();
        /*PRINT*/
        void print();
        /*READ*/
        void read();
        /*OVERLOADING OPERATORI*/
        Distributore operator-(float euro);
};

#endif