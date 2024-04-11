#include <iostream>
#include "Distributore.h"

using namespace std;

int main()
{
    Distributore d;
    Snack s;

    d.push(s);
    d.push(s);
    d.push(s);
    d.push(s);
    d.push(s);
    d.push(s);

    d.display();
}
