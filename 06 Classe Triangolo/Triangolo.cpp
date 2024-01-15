#include <iostream>
#include "Triangolo.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Triangolo::Triangolo() {

}
Triangolo::Triangolo(Point vA, Point vB, Point vC) {
    verticeA.setCoordX(vA.getCoordX());
    verticeA.setCoordY(vA.getCoordY());

    verticeB.setCoordX(vB.getCoordX());
    verticeB.setCoordY(vB.getCoordY());

    verticeC.setCoordX(vC.getCoordX());
    verticeC.setCoordY(vC.getCoordY());
}
Triangolo::~Triangolo() {

}
/*SETTER e GETTER*/
void Triangolo::setVerticeA(Point vA) {
    verticeA.setCoordX(vA.getCoordX());
    verticeA.setCoordY(vA.getCoordY());
}
void Triangolo::setVerticeB(Point vB) {
    verticeB.setCoordX(vB.getCoordX());
    verticeB.setCoordY(vB.getCoordY());
}
void Triangolo::setVerticeC(Point vC) {
    verticeC.setCoordX(vC.getCoordX());
    verticeC.setCoordY(vC.getCoordY());
}
void Triangolo::setAll(Point vA, Point vB, Point vC) {
    verticeA.setCoordX(vA.getCoordX());
    verticeA.setCoordY(vA.getCoordY());

    verticeB.setCoordX(vB.getCoordX());
    verticeB.setCoordY(vB.getCoordY());

    verticeC.setCoordX(vC.getCoordX());
    verticeC.setCoordY(vC.getCoordY());
}

Point Triangolo::getVerticeA() {
    return verticeA;
}
Point Triangolo::getVerticeB() {
    return verticeB;
}
Point Triangolo::getVerticeC() {
    return verticeC;
}
/*CLASSIFICAZIONE*/
/*PRINT*/
void Triangolo::print() {
    cout << "Vertice A:" << endl;
    verticeA.print();
    cout << endl << "Vertice B:" << endl;
    verticeB.print();
    cout << endl << "Vertice C:" << endl;
    verticeC.print();
}