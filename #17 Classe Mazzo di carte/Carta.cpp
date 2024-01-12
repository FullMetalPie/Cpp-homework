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
    if (seed != "spade" && seed != "bastoni" && seed != "denari" && seed != "coppe") {
        seme = "spade";
    } else {
        seme = seed;
    }

    if (number < 1 || number > 10) {
        number = 1;
    } else {
        numero = number;
    }

    switch (numero) {
        case 1:
            if (name == "asso" && value == 11) {
                nome = name;
                punteggio = value;
            } else {
                nome = "asso";
                punteggio = 11;
            }
            break;
        case 8:
            if (name == "fante" && value == 2) {
                nome = name;
                punteggio = value;
            } else {
                nome = "fante";
                punteggio = 2;
            }
            break;
        case 9:
            if (name == "cavallo" && value == 3) {
                nome = name;
                punteggio = value;
            } else {
                nome = "cavallo";
                punteggio = 3;
            }
            break;
        case 10:
            if (name == "re" && value == 4) {
                nome = name;
                punteggio = value;
            } else {
                nome = "re";
                punteggio = 4;
            }
            break;
        case 2:
            if (name == "due" && value == 0) {
                nome = name;
                punteggio = value;
            } else {
                nome = "due";
                punteggio = 0;
            }
            break;
        case 3:
            if (name == "tre" && value == 0) {
                nome = name;
                punteggio = value;
            } else {
                nome = "tre";
                punteggio = 0;
            }
            break;
        case 4:
            if (name == "quattro" && value == 0) {
                nome = name;
                punteggio = value;
            } else {
                nome = "quattro";
                punteggio = 0;
            }
            break;
        case 5:
            if (name == "cinque" && value == 0) {
                nome = name;
                punteggio = value;
            } else {
                nome = "cinque";
                punteggio = 0;
            }
            break;
        case 6:
            if (name == "sei" && value == 0) {
                nome = name;
                punteggio = value;
            } else {
                nome = "sei";
                punteggio = 0;
            }
            break;
        case 7:
            if (name == "sette" && value == 0) {
                nome = name;
                punteggio = value;
            } else {
                nome = "sette";
                punteggio = 0;
            }
            break;
    }
}
Carta::~Carta() {

}
/*SETTER e GETTER */
void Carta::setSeme(string seed) {
    if (seed != "spade" && seed != "bastoni" && seed != "denari" && seed != "coppe") {
        seme = "spade";
    } else {
        seme = seed;
    }
}
void Carta::setNome(string name) {
    switch (numero) {
        case 1:
            if (name != "asso") {
                nome = "asso";
            } else {
                nome = name;
            }
            break;
        case 8:
            if (name != "fante") {
                nome = "fante";
            } else {
                nome = name;
            }
            break;
        case 9:
            if (name != "cavallo") {
                nome = "cavallo";
            } else {
                nome = name;
            }
            break;
        case 10:
            if (name != "re") {
                nome = "re";
            } else {
                nome = name;
            }
            break;
        case 2:
            if (name != "due") {
                nome = "due";
            } else {
                nome = name;
            }
            break;
        case 3:
            if (name != "tre") {
                nome = "tre";
            } else {
                nome = name;
            }
            break;
        case 4:
            if (name != "quattro") {
                nome = "quattro";
            } else {
                nome = name;
            }
            break;
        case 5:
            if (name != "cinque") {
                nome = "cinque";
            } else {
                nome = name;
            }
            break;
        case 6:
            if (name != "sei") {
                nome = "sei";
            } else {
                nome = name;
            }
            break;
        case 7:
            if (name != "sette") {
                nome = "sette";
            } else {
                nome = name;
            }
            break;
    }
}
void Carta::setNumero(int number) {
    if (number < 1 || number > 10) {
        number = 1;
    } else {
        numero = number;
    }
}
void Carta::setPunteggio(int value) {
    switch (numero) {
        case 1:
            if (value != 11) {
                punteggio = 11;
            } else {
                punteggio = value;
            }
            break;
        case 8:
            if (value != 2) {
                punteggio = 2;
            } else {
                punteggio = value;
            }
            break;
        case 9:
            if (value != 3) {
                punteggio = 3;
            } else {
                punteggio = value;
            }
            break;
        case 10:
            if (value != 4) {
                punteggio = 4;
            } else {
                punteggio = value;
            }
            break;
        default:
            if (value != 0) {
                punteggio = 11;
            } else {
                punteggio = value;
            }
            break;
    }
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

