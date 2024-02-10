#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List lista;

    lista.insertHead(145);
    lista.display();
    cout << "\n";
    lista.remove(145);
    lista.display();
    return 0;
}
