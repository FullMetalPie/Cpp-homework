#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data {
    private:
        int anno, mese, giorno;
    public:
        /*COSTRUTTORE e DISTRUTTORE*/
        Data();
        Data(int a, int m, int g);
        ~Data();
        /*SETTER e GETTER*/
        void setAnno(int a);
        void setMese(int m);
        void setGiorno(int g);
        void setAll(int a, int m, int g);

        int getAnno();
        int getMese();
        int getGiorno();

        /*STAMPA (gg/mm/aaaa)*/
        void print();

        /*LEGGI*/
        void read();

        /*VALIDA DATA*/
        bool bisestile(int anno);
        int validaData();

        /*CONFRONTO DATE*/
        friend int confronta(Data d1, Data d2);

        /*OVERLOADING OUT*/
        friend ostream& operator<<(ostream& out, Data d);
};

#endif