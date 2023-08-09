#include "types-win32.h"
//----- (10076AE0) --------------------------------------------------------
int __thiscall meth_10076AE0(_DWORD *this, int chosenCar) {
    int result; // eax

    result = chosenCar;
    if (chosenCar < 16) {
        this[0xA6D] = 0;
    } else {
        result = chosenCar - 16;
        this[0xA6D] = 1;
    }
    this[0xA6A] = result;
    return result;
}
