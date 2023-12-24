#ifndef RETTA_H
#define RETTA_H

#include "point.h"

class Retta {
    private:
        Point ax;
        Point by;
        float c;
    public:
        /*COSTRUTTORI e DISTUTTORE*/
        Retta();
        Retta(Point a, Point b, float coeff);
        ~Retta();
        /*SETTER e GETTER*/
        void setAx(Point a);
        void setBy(Point b);
        void setCoeff(float coeff);
        void setAll(Point a, Point b, float coeff);

        Point getAx();
        Point getBy();
        float getCoeff();
        /*PRINT*/
        void print();
        /*READ*/
        void read();
        /*VERIFICA PUNTO SULLA RETTA*/
        bool verifica(Point p);
};

#endif