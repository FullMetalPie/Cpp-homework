#include <iostream>
#include "Retta.h"

using namespace std;

int main() {
    Retta r1;
    Point a(5,2), b(6,7);
    float coeff = 6;

    r1.read();
    r1.print();

    Point p(5, 2);
    if (r1.verifica(p)) {
        cout << endl << "Il punto appartiene alla retta.";
    } else {
        cout << endl << "Il punto appartiene alla retta.";
    }

    return 0;
}