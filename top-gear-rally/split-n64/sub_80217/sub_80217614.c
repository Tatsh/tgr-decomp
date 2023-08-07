#include "../../types-n64.h"
//----- (80217614) --------------------------------------------------------
void __fastcall sub_80217614(int a1, _DWORD *a2, _DWORD *a3) {
    unsigned int v3; // $a3
    _DWORD *v4;      // $t7
    char v5[40];     // [sp+18h] [-28h] BYREF

    v3 = a1 - 1;
    if (!((unsigned int)(a1 - 1) >> 8)) {
        if ((v3 & 0xF0) != 0) {
            if ((v3 & 0xC0) != 0) {
                if ((v3 & 0x80) != 0)
                    *a3 = 8;
                else
                    *a3 = 7;
            } else if ((v3 & 0xE0) != 0) {
                *a3 = 6;
            } else {
                *a3 = 5;
            }
        } else if ((v3 & 0xFC) != 0) {
            if ((v3 & 0xF8) != 0)
                *a3 = 4;
            else
                *a3 = 3;
        } else if ((v3 & 0xFE) != 0) {
            *a3 = 2;
        } else {
            *a3 = a1 != 1;
        }
        goto LABEL_24;
    }
    if (!(v3 >> 10)) {
        if (v3 >> 9)
            *a3 = 10;
        else
            *a3 = 9;
    LABEL_24:
        v4 = a2;
        goto LABEL_25;
    }
    sub_80260DD4(v5, "ERROR: unhandled texture size: %d", v3);
    sub_8021E1F4(v5);
    v4 = a2;
LABEL_25:
    *v4 = 0xFFFF;
}
