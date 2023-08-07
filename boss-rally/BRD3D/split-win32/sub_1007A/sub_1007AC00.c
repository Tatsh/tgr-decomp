#include "../../types-win32.h"
//----- (1007AC00) --------------------------------------------------------
int sub_1007AC00() {
    int result; // eax

    result = sub_1007A840();
    if (result)
        result = sub_1007A940() != 0;
    return result;
}
