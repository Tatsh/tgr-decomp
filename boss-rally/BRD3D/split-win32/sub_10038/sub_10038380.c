#include "types-win32.h"
//----- (10038380) --------------------------------------------------------
char __cdecl sub_10038380(_BYTE *a1) {
    char v1;     // dl
    char v2;     // cl
    char result; // al

    sub_100383C0(a1);
    sub_100383C0(a1 + 12);
    sub_100383C0(a1 + 24);
    v1 = a1[36];
    v2 = a1[37];
    a1[36] = a1[39];
    result = a1[38];
    a1[39] = v1;
    a1[38] = v2;
    a1[37] = result;
    return result;
}
