#include <iostream>
#include "Napoletano.h"

using namespace std;

int main() {
    Napoletano np;

    np.inizializza();

    cout << "Carta eliminata: " << (--np);
    np.stampa();

    return 0;
}
