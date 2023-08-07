#include "../../types-n64.h"
//----- (802649F0) --------------------------------------------------------
int sub_802649F0() {
    int result; // $v0

    __asm { mfc0    $v0, Count # Timer Count }
    return result;
}
