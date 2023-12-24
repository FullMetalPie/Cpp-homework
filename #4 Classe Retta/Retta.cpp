#include <iostream>
#include "Retta.h"

using namespace std;

/*COSTRUTTORI e DISTUTTORE*/
Retta::Retta() {
    c = 0;
}
Retta::Retta(Point a, Point b, float coeff) {
    ax = a;
    by = b;
    c = coeff;
}
Retta::~Retta() {

}
/*SETTER e GETTER*/
void Retta::setAx(Point a) {
    ax = a;
}
void Retta::setBy(Point b) {
    by = b;
}
void Retta::setCoeff(float coeff) {
    c = coeff;
}
void Retta::setAll(Point a, Point b, float coeff) {
    ax = a;
    by = b;
    c = coeff;
}

Point Retta::getAx() {
    return ax;
}
Point Retta::getBy() {
    return by;
} 
float Retta::getCoeff() {
    return c;
}
/*PRINT*/
void Retta::print() {
    cout << "ax: (" << ax.getCoordX() << ", " << ax.getCoordY() << ")" << endl;
    cout << "ax: (" << by.getCoordX() << ", " << by.getCoordY() << ")" << endl;
    cout << "Coefficiente: " << c;
}
/*READ*/
void Retta::read() {
    double x1, y1;
    double x2, y2;

    cout << "ax:" << endl;
    cout << "x: ";
    cin >> x1;

    cout << "y: ";
    cin >> y1;

    cout << "by:" << endl;
    cout << "x: ";
    cin >> x2;

    cout << "y: ";
    cin >> y2;

    cout << "coefficiente: ";
    cin >> c;

    ax.setCoords(x1, y1);
    by.setCoords(x2, y2);
}
/*VERIFICA PUNTO SULLA RETTA*/
bool Retta::verifica(Point p) {
    if ((p.getCoordX() + p.getCoordY() + c) == 0) {
        return true;
    } else {
        return false;
    }
}