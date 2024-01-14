#include <iostream>
#include "inputManager.cpp"

#define FUNCCOUNT 3

int add (int, int);
int sub (int, int);
int divi (int, int);

int (*funcarr[FUNCCOUNT]) (int, int) = {add, sub, divi};

int main() {
    int i, x, y;
    inputHandler(i, x, y);

//    if (0 <= i && i < FUNCCOUNT) {
//        funcarr[i](x, y);
//    }

    for (auto& f : funcarr) {
        f (x,y);
    }

    return 0;
}
