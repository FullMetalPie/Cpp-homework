#include <iostream>
#include "Distributore.h"

using namespace std;

int main() {
    Distributore d("Gasolio", 30, 200, 400);

    d.print();

    d = d - 30;

    d.print();

    return 0;
}