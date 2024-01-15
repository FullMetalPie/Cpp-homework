#include <iostream>
#include "Romanzo.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Romanzo::Romanzo() {
    autore = "undefined";
    titolo = "undefined";
    prezzo = 0.0;
}
Romanzo::Romanzo(string code, string author, string title, float price) {
    setISBN(code);
    autore = author;
    titolo = author;
    prezzo = price;
}
Romanzo::~Romanzo() {

}
/*SETTER e GETTER*/
void Romanzo::setAutore(string author) {
    autore = author;
}
void Romanzo::setTitolo(string title) {
    titolo = title;
}
void Romanzo::setPrezzo(float price) {
    prezzo = price;
}
void Romanzo::setAll(string code, string author, string title, float price) {
    setISBN(code);
    autore = author;
    titolo = author;
    prezzo = price;
}

string Romanzo::getAutore() {
    return autore;
}
string Romanzo::getTitolo() {
    return titolo;
}
float Romanzo::getPrezzo() {
    return prezzo;
}
/*LEGGI*/
void Romanzo::leggi() {
    
}
/*OPERATORE !=*/
bool Romanzo::operator!=(Romanzo& book) {

}
/*FUNZIONE FRIEND*/
ostream& operator<<(ostream& out, Romanzo& book) {
    out << "Codice: " << book.getISBN() << endl;
    out << "Autore: " << book.getAutore() << endl;
    out << "Titolo: " << book.getTitolo() << endl;
    out << "Prezzo: " << book.getPrezzo() << endl;

    return out;
}