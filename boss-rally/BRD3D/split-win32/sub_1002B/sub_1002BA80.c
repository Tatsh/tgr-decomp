#include "types-win32.h"
//----- (1002BA80) --------------------------------------------------------
int __cdecl sub_1002BA80(int a1, int a2) {
    int v2;     // edi
    int result; // eax

    v2 = a2;
    if (a2 > 0) {
        do {
            result = sub_1002BAA0(a1);
            a1 += 36;
            --v2;
        } while (v2);
    }
    return result;
}
