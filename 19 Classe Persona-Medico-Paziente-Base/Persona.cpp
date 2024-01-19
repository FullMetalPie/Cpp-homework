#include <iostream>
#include "Persona.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Persona::Persona() {
    nome = "undefined";
    cognome = "undefined";
}
Persona::Persona(string name, string surname) {
    nome = name;
    cognome = surname;
}
Persona::~Persona() {

}
/*STAMPA*/
void Persona::stampa() {
    cout << endl <<"Nome: " << nome;
    cout << endl << "Cognome: " << cognome << endl;
}
