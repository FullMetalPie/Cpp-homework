#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Napoletano.h"

using namespace std;

/*COSTRUTTORE E DISTRUTTORE*/
Napoletano::Napoletano() {
    delete[]arrCarte;
    dimensione = 40;
    arrCarte = new Carta[dimensione];
}
Napoletano::~Napoletano() {
    delete[]arrCarte;
}
/*GETTER DIMENSIONE*/
int Napoletano::getDim() {
    return dimensione;
}
/*METODO INIZIALIZZA*/
void Napoletano::inizializza() {

    /*Soluzione meno intelligente*/
    for (int j = 0; j < 40; j++) {
        if (j < 10 && j >= 0) {
            arrCarte[j].setSeme("Spade");
        } else {
            if (j < 20 && j >= 10) {
                arrCarte[j].setSeme("Bastoni");
            } else {
                if (j < 30 && j >= 20) {
                    arrCarte[j].setSeme("Denari");
                } else {
                    arrCarte[j].setSeme("Coppe");
                }
            }
        }

        int number = (j + 1) % 10;
        arrCarte[j].setNumero(number);

        if (number == 0) {
            arrCarte[j].setNumero(10);
        }

        switch (number) {
            case 1:
                arrCarte[j].setPunteggio(11);
                arrCarte[j].setNome("Asso");
                break;
            case 3:
                arrCarte[j].setPunteggio(10);
                arrCarte[j].setNome("Tre");
                break;
            case 8:
                arrCarte[j].setPunteggio(2);
                arrCarte[j].setNome("Fante");
                break;
            case 9:
                arrCarte[j].setPunteggio(3);
                arrCarte[j].setNome("Cavallo");
                break;
            case 0:
                arrCarte[j].setPunteggio(4);
                arrCarte[j].setNome("Re");
                break;
            default:
                switch (number) {
                    case 2:
                        arrCarte[j].setNome("Due");
                        break;
                    case 4:
                        arrCarte[j].setNome("Quattro");
                        break;
                    case 5:
                        arrCarte[j].setNome("Cinque");
                        break;
                    case 6:
                        arrCarte[j].setNome("Sei");
                        break;
                    case 7:
                        arrCarte[j].setNome("Sette");
                        break;
                }
                arrCarte[j].setPunteggio(0);
        }
    }
}
/*OPERATORE --*/
Carta Napoletano::operator--() {
    srand (time(NULL));
    int x = rand() % 40 + 1;

    Carta temp[dimensione];

    for (int i = 0; i < dimensione; i++) {
        temp[i] = arrCarte[i];
    }

    delete[]arrCarte;


    Carta cartaEliminata = temp[x];
    /*
    Carta cartaEliminata = temp[x];
    cout << "carta eliminata: " << endl;
    cout << cartaEliminata;
    */

    for (int i = x; i < dimensione - 1; i++) {
        temp[i] = temp[i + 1];
    }

    dimensione--;

    arrCarte = new Carta[dimensione];

    for (int i = 0; i < dimensione; i++) {
        arrCarte[i] = temp[i];
    }

    return cartaEliminata;
}

/*STAMPA*/
void Napoletano::stampa() {
    for (int i = 0; i < dimensione; i++) {
        cout << arrCarte[i];
    }
}

/*NUMERO CARTE IN UN DATO MOMENTO*/
int Napoletano::numeroCarta() {
    return dimensione;
}
