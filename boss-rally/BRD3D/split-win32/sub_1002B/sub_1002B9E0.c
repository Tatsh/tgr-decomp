#include "../../types-win32.h"
//----- (1002B9E0) --------------------------------------------------------
void __cdecl sub_1002B9E0(_BYTE *a1, int a2) {
    int v2;     // ecx
    __int16 v4; // dx

    v2 = a2;
    if (a2 > 0) {
        do {
            LOBYTE(v4) = a1[1];
            HIBYTE(v4) = *a1;
            *(_WORD *)a1 = v4;
            a1 += 2;
            --v2;
        } while (v2);
    }
}
