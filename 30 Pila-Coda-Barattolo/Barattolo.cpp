#include <iostream>
#include "Barattolo.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Barattolo::Barattolo() {
    Data cknd, expd;
    name = "undefined";
    code = 0;
    checkInDate = cknd;
    expirationDate = expd;
}
Barattolo::Barattolo(string n, int c, Data cknd, Data expd) {
    name = n;
    code = c;
    checkInDate = cknd;
    expirationDate = expd;
}
Barattolo::~Barattolo() {

}
/*SETTER e GETTER*/
void Barattolo::setName(string n) {
    name = n;
}
void Barattolo::setCode(int c) {
    code = c;
}
void Barattolo::setCheckInDate(Data cknd) {
    checkInDate = cknd;
}
void Barattolo::setExpirationDate(Data expd) {
    expirationDate = expd;
}

string Barattolo::getName() {
    return name;
}
int Barattolo::getCode() {
    return code;
}
Data Barattolo::getCheckInDate() {
    return checkInDate;
}
Data Barattolo::getExpirationDate() {
    return expirationDate;
}
/*OVERLOADING i/o*/
ostream& operator<<(ostream& out, Barattolo& b) {
    out << "Name: " << b.name << endl;
    out << "Code: " << b.code << endl;
    out << "Date of arrival: " << b.checkInDate.getAnno() << "/" <<  b.checkInDate.getMese() << "/" << b.checkInDate.getGiorno() << endl;
    out << "Expiration Date: " << b.expirationDate.getAnno() << "/" <<  b.expirationDate.getMese() << "/" << b.expirationDate.getGiorno() << endl;

    return out;
}
/*istream& operator<<(istream& in, Barattolo& b) {
    
}*/