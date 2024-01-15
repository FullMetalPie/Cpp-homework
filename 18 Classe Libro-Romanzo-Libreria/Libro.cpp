#include <iostream>
#include "Libro.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Libro::Libro() {
    ISBN = "undefined";
}
Libro::Libro(string code) {
    ISBN = code;
}
Libro::~Libro() {

}
/*SETTER e GETTER*/
void Libro::setISBN(string code) {
    ISBN = code;
}

string Libro::getISBN() {
    return ISBN;
}
