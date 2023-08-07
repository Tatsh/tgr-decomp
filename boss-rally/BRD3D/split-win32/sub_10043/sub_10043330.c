#include "../../types-win32.h"
//----- (10043330) --------------------------------------------------------
int sub_10043330() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA2970) {
        dword_10AA2904 = (void *)dword_10AA2970;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA2970 = result;
        dword_10AA2904 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10051D30;
            (*(void(__cdecl **)(int))(dword_10AA2970 + 4))(dword_10AA2970);
            *((_DWORD *)dword_10AA2904 + 3) = 1;
            result = 1;
            *((_DWORD *)dword_10AA2904 + 26) = 1;
        }
    }
    return result;
}
// 10AA2970: using guessed type int dword_10AA2970;
