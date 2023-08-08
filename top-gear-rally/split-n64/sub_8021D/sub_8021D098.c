#include "types-n64.h"
//----- (8021D098) --------------------------------------------------------
int __fastcall sub_8021D098(_DWORD *a1, unsigned int a2, unsigned int a3, int a4) {
    _DWORD *v4; // $s0
    int result; // $v0
    int v9;     // $t7

    v4 = a1;
    if (a1) {
        while (1) {
            result = *v4;
            v9 = (unsigned __int8)HIBYTE(*v4);
            switch (v9) {
            case 4:
                goto LABEL_5;
            case 184:
                return result;
            case 253:
            LABEL_5:
                sub_8021D070(v4 + 1, a2, a3, a4);
                break;
            }
            v4 += 2;
        }
    }
    return result;
}
