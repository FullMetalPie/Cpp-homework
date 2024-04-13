#include <iostream>
#include "Barattolo.h"

using namespace std;

/*
Realizzare un programma che, avvalendosi di opportune classi,
risolva il seguente problema:
 
In un supermercato ogni barattolo di marmellata è memorizzato registrando
il suo nome, il suo codice, la data di scadenza, la data di arrivo e il suo prezzo.

Le marmellate vengono inserite in una pila, in ordine di arrivo cronologico 
(per data di arrivo). Ricavare, dalla pila, una coda che memorizzi le marmellate 
in ordine FIFO di scadenza (l'ultima marmellata inserita in coda è quella con data
di scadenza maggiore). Il programma deve essere in grado di fornire, 
su richiesta dell'utente, il codice della prossima marmellata da consumare, 
cioè quella con data di scadenza minore.
*/

int main () {
    Pila p;
    Barattolo b1, b2;

    p.push(b1);
    p.push(b2);
    p.display();

    return 0;
}
