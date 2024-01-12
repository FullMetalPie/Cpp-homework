#ifndef DATETIME_H
#define DATETIME_H
#include "Data.h"

class DateTime {
    private:
        int ore, minuti, secondi;
        Data date;
    public:
        /*COSTRUTTORI e DISTRUTTORI*/
        DateTime();
        DateTime(int hours, int minutes, int seconds, Data d);
        ~DateTime();
        /*SETTER e GETTER*/
        void setOre(int hours);
        void setMinuti(int minutes);
        void setSecondi(int seconds);
        void setAll(int hours, int minutes, int seconds, Data d);

        int getOre();
        int getMinuti();
        int getSecondi();
        /*PRINT*/
        void print();
        /*READ*/
        void read();
        /*VALIDA V2*/
        bool validaDateTime();
        /*COMPARA DATA*/
        void compare(DateTime dt2);
        /*FORMATO ANGLOSASSONE*/
        friend void formatoAnglosassone(DateTime dt);
};

#endif