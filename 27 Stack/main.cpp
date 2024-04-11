#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.displayLast();
}
