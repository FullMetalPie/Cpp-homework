#include <iostream>
#include "Paziente.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Paziente::Paziente() {
    nascita.setAnno(2000);
    nascita.setMese(1);
    nascita.setGiorno(1);

    cf = "undefined";
}
Paziente::Paziente(string name, string surname, Data birthdate, string code) : Persona(name, surname) {
    nascita = birthdate;
    cf = code;
}
Paziente::~Paziente() {

}
/*LEGGI*/
void Paziente::leggi() {
    string name;
    string surname;
    Data birthdate;
    string code;

    cout << "Nome: ";
    cin >> name;

    cout << "Cognome: ";
    cin >> surname;

    birthdate.read();

    cout << "Codice: ";
    cin >> code; 

    Paziente temp(name, surname, birthdate, code);
    (*this) = temp;
}
/*STAMPA*/
void Paziente::stampa() {
    Persona::stampa();
    cout << "Data di nascita: ";
    nascita.print();
    cout << endl << "Codice: " << cf << endl;
}