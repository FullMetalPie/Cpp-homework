#include <iostream>
#include "BST.h"

using namespace std;

int main() {
    BST alberello;

    alberello.insertHelper(5);
    alberello.insertHelper(6);
    alberello.insertHelper(1);
    alberello.insertHelper(2);

    alberello.symmetricWalkHelper();

    return 0;
}