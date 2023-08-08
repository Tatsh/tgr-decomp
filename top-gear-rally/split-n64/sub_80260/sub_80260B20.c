#include "types-n64.h"
//----- (80260B20) --------------------------------------------------------
char *__fastcall sub_80260B20(char *a1, const char *a2, int length) {
    char *i; // $v0
    char v5; // $t6

    for (i = a1; length; *(i - 1) = v5) {
        v5 = *a2;
        --length;
        ++i;
        ++a2;
    }
    return a1;
}
