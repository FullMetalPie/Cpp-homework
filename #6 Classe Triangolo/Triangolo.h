#ifndef TRIANGOLO_H
#define TRIANGOLO_H

#include "point.h"

class Triangolo {
    private:
        Point verticeA, verticeB, verticeC;
    public:
        /*COSTRUTTORI e DISTRUTTORE*/
        Triangolo();
        Triangolo(Point vA, Point vB, Point vC);
        ~Triangolo();
        /*SETTER e GETTER*/
        void setVerticeA(Point vA);
        void setVerticeB(Point vB);
        void setVerticeC(Point vC);
        void setAll(Point vA, Point vB, Point vC);

        Point getVerticeA();
        Point getVerticeB();
        Point getVerticeC();
        /*PRINT*/
        void print();
};

#endif