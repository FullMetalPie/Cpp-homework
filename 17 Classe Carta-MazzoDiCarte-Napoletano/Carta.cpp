#include <iostream>
#include "Carta.h"

using namespace std;

/*COSTRUTTORI e DISTRUTTORE*/
Carta::Carta() {
    seme = "undefined";
    nome = "undefined";
    numero = 1;
    punteggio = 11;
}
Carta::Carta(string seed, string name, int number, int value) {
    seme = seed;
    nome = name;
    numero = number;
    punteggio = value;
}
Carta::~Carta() {

}
/*SETTER e GETTER */
void Carta::setSeme(string seed) {
    seme = seed;
}
void Carta::setNome(string name) {
    nome = name;
}
void Carta::setNumero(int number) {
    numero = number;
}
void Carta::setPunteggio(int value) {
    punteggio = value;
}

string Carta::getSeme() {
    return seme;
}
string Carta::getNome() {
    return nome;
}
int Carta::getNumero() {
    return numero;
}
int Carta::getPunteggio() {
    return punteggio;
}
/*METODO CONFRONTA*/
int Carta::confronta(Carta c2, Carta briscola) {
    int vincitore; // 1 = prima carta, 2 = seconda carta

    if (seme == c2.seme) {
        if (punteggio > c2.punteggio) {
            vincitore = 1;
        } else {
            vincitore = 1;
        }
    } else {
        if (seme == c2.seme && punteggio == c2.punteggio ) {
            if (numero > c2.numero) {
                vincitore = 1;
            } else {
                vincitore = 1;
            }
        } else {
            if (seme != c2.seme && punteggio == c2.punteggio) {
                if (seme == briscola.seme) {
                    vincitore = 1;
                } else {
                    if (c2.seme == briscola.seme) {
                        vincitore = 2;
                    }
                }
            } else {
                if (seme != c2.seme && seme != briscola.seme && c2.seme != briscola.seme) {
                 vincitore = 1;
                }
            }
        }
    }

    return vincitore;
}

/*OVERLOADING +*/
int Carta::operator+(Carta c2) {
    return numero + c2.numero;
}
/*OVERLOADING I/O*/
ostream& operator<<(ostream& out, Carta c) {
    out << endl << "===================" << endl;
    out << "Seme: " << c.getSeme() << endl;
    out << "Numero: " << c.getNumero() << endl;
    out << "Nome: " << c.getNome() << endl;
    out << "Punteggio: " << c.getPunteggio() << endl;

    return out;
}
istream& operator>>(istream& in, Carta c) {
    do {
        cout << "Seme: ";
        in >> c.seme;
    } while (c.seme != "spade" || c.seme != "bastoni" || c.seme != "denari" || c.seme != "coppe");

    do {
        cout << "Numero: ";
        in >> c.numero;
    } while (c.numero < 1 || c.numero > 10);

    do {
        cout << "Punteggio: ";
        in >> c.punteggio;
    } while (c.punteggio != 0 || c.punteggio != 2 || c.punteggio != 3 || c.punteggio != 4 || c.punteggio != 11);

    return in;
}

