#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include "Data.h"

using namespace std;

class Container {
    private:
        int code;
        string type;
        double weight;
        string category;
        Data stockDate;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Container();
        Container(int c, string t, double w, string ctgry, Data date);
        ~Container();
        /*SET e GET*/
        void setCode(int c);
        void setType(string t);
        void setWeight(double w);
        void setCategory(string ctgry);
        void setStockDate(Data date);
        void setAll(int c, string t, double w, string ctgry, Data date);

        int getCode();
        string getType();
        double getWeight();
        string getCategory();
        Data getStockDate();
        /*OVERLOADING OUTPUT*/
        friend ostream& operator<<(ostream& out,const Container& d);
        /*OVERLOADING INPUT*/
        friend istream& operator>>(istream& out, Container& d);
};

#endif