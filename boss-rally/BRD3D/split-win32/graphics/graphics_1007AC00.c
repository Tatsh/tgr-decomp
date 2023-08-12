#include "types-win32.h"
//----- (1007AC00) --------------------------------------------------------
int graphics_1007AC00() {
    int result; // eax

    result = graphics_1007A840();
    if (result)
        result = graphics_1007A940() != 0;
    return result;
}
