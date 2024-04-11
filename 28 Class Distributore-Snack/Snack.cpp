#include <iostream>
#include "Snack.h"

using namespace std;

/*COSTRUTTORE DI DEFAULT*/
Snack::Snack() {
    name = "Undefined";
    code = 0;
}
/*SETTER E GETTER*/
void Snack::setName(string n) {
    name = n;
}
void Snack::setCode(int c) {
    code = c;
}
void Snack::set(string n, int c) {
    name = n;
    code = c;
}

string Snack::getName() {
    return name;
}
int Snack::getCode() {
    return code;
}
/*OPERATOR =*/
Snack Snack::operator=(Snack s) {
    name = s.name;
    code = s.code;
}
Snack Snack::operator=(int val) {
    code = val;
}
/*OVERLOADING i/o*/
ostream& operator<<(ostream& out, Snack& s) {
    out << "Name: " + s.getName();
    out << endl << "Code: " + s.getCode();

    return out;
}
istream& operator>>(istream& in, Snack& s) {
    string nome;
    int codice;

    cout << "Nome snack: ";
    in >> nome;

    cout << "Codice snack: ";
    in >> codice;

    s.set(nome, codice);
    return in;
}
