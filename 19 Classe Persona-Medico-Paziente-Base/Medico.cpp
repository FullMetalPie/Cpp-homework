#include <iostream>
#include "Medico.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Medico::Medico() {
    specializzazione = "undefined";
}
Medico::Medico(string name, string surname, string spec) : Persona(name, surname){
    specializzazione = spec;
}
Medico::~Medico() {

}
/*LEGGI*/
void Medico::leggi() {
    string name;
    string surname;
    string spec;

    cout << "Nome: ";
    cin >> name;

    cout << "Cognome: ";
    cin >> surname;

    cout << "Specializzazzione: ";
    cin >> spec;

    Medico temp(name, surname, spec);
    (*this) = temp;
}
/*STAMPA*/
void Medico::stampa() {
    Persona::stampa();
    cout << "Specializzazione: " << specializzazione << endl;
}