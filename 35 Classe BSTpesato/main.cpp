#include <iostream>
#include "BSTpesato.h"

using namespace std;

int main() {
    BSTpesato alberello;

    alberello.insertHelper(1);
    cout << alberello.sumHelper();

    return 0;
}