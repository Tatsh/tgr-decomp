#include "types-win32.h"
//----- (100616C0) --------------------------------------------------------
int __cdecl sub_100616C0(int *a1) {
    int *i;     // esi
    int *v2;    // eax
    int result; // eax

    for (i = a1; i; i = (int *)i[1]) {
        if ((*((_WORD *)i + 11) & 0x8000) != 0) {
            v2 = (int *)*i;
            *((_WORD *)i + 11) &= 0x7FFFu;
            result = sub_100616C0(v2);
        }
    }
    return result;
}
