#include <iostream>
#include "Carta.h"

using namespace std;

int main() {
    Carta c("spade", "asso", 1, 11), c2("bastoni", "fante", 8, 2), briscola("coppe", "due", 2, 0);

    cout << c;
    cout << c2;
    cout << briscola;

    cout << "il vincitore e' la carta numero: " << c.confronta(c2, briscola);

    return 0;
}