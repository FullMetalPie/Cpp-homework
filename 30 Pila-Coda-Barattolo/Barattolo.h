#ifndef BARATTOLO_H
#define BARATTOLO_H

#include <iostream>
#include "Data.h"

using namespace std;

class Barattolo {
    private:
        string name;
        int code;
        Data checkInDate;
        Data expirationDate;
        double price;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Barattolo();
        Barattolo(string n, int c, Data cknd, Data expd);
        ~Barattolo();
        /*SETTER e GETTER*/
        void setName(string n);
        void setCode(int c);
        void setCheckInDate(Data cknd);
        void setExpirationDate(Data expd);

        string getName();
        int getCode();
        Data getCheckInDate();
        Data getExpirationDate();
        /*OVERLOADING i/o*/
        friend ostream& operator<<(ostream& out, Barattolo& b);
        //friend istream& operator<<(istream& in, Barattolo& b);
};

#endif