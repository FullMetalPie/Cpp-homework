#include <iostream>
#include "Lista.h"

using namespace std;

/*Aggiungere alla classe LinkedList implementata con l’esercizio 1, i seguenti metodi:
    a. metodo che effettua la ricerca semplice di un elemento nella lista e ne restituisce
    l'indirizzo;
    b. metodo che conta gli elementi presenti nella lista.
    c. metodo che calcola la media fra gli elementi della lista.
    d. metodo che determina il massimo fra gli elementi della lista non vuota.
    e. metodo che determina la somma degli elementi pari e quella degli elementi dispari
    della lista.
    f. metodo che crea una nuova lista mediante inserimento in testa contenente gli elementi
    dell'istanza chiamante elevati al quadrato.
    g. metodo che cancella il primo elemento della lista solo se è pari e restituisce 1 se lo ha
    cancellato, altrimenti 0.
    h. metodo che moltiplica per (–1) tutti gli elementi negativi presenti nella lista.
    i. metodo che ordina gli elementi della lista
    j. overloading dell'operatore >> (inserimento in coda);
    k. overloading dell'operatore -- che estrae l'elemento in testa alla lista;
    l. overloading dell'operatore +, che concatena due liste (collega la coda della lista primo
    operando con la testa della lista secondo operando);
    m. funzione friend che, dopo aver ordinato due liste date come parametri, crea una
    terza lista che contenga gli elementi ordinati delle prime due.

Pietri Andrea 4AI
*/

int main() {
    Lista l1;

    l1.insertTail(12);
    l1.insertTail(4);
    l1.display();
    l1.ordina();
    l1.display();

    return 0;
}