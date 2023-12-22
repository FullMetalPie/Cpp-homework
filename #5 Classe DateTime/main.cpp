#include <iostream>
#include "DateTime.h"

using namespace std;

int main() {

    DateTime dt1, dt2;

    dt1.read();
    dt2.read();
    dt1.compare(dt2);

    return 0;
}