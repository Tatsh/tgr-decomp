#include "../../types-n64.h"
//----- (802634E0) --------------------------------------------------------
int __fastcall sub_802634E0(int a1, unsigned __int8 *a2, int a3, unsigned __int8 *a4) {
    int v4;     // $t9
    int result; // $v0

    v4 = *a4;
    if (*a2 == v4 || (*a2 = v4, (result = sub_8026A05C(a1, a3, 0, *a2)) == 0)) {
        *(_WORD *)a4 = *(_WORD *)(a3 + 2 * a4[1]);
        if (*(unsigned __int16 *)a4 >= *(int *)(a1 + 96) &&
            *a4 < (int)*(unsigned __int8 *)(a1 + 100) && a4[1] && a4[1] < 0x80u) {
            result = 0;
        } else if (*(_WORD *)a4 == 1) {
            result = 5;
        } else {
            result = 3;
        }
    }
    return result;
}
