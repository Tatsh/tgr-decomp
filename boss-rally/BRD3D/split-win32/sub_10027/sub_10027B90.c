#include "../../types-win32.h"
//----- (10027B90) --------------------------------------------------------
int __cdecl sub_10027B90(int a1, int a2, int a3) {
    int v3; // eax
    int v5; // eax

    if (a1) {
        if (a1 == 1 && a2 != 2) {
            if (a2 == 3) {
                v5 = -(a3 != 1);
                LOBYTE(v5) = v5 & 0xF8;
                return v5 + 12;
            }
            if (a2 == 4)
                return 2;
        }
    } else if (a2 != 2 && a2 == 4) {
        v3 = -(a3 != 1);
        LOBYTE(v3) = v3 & 0xF7;
        return v3 + 11;
    }
    return 11;
}
