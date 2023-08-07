#include "../../types-win32.h"
//----- (10045460) --------------------------------------------------------
int sub_10045460() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA2990) {
        dword_10AA2904 = (void *)dword_10AA2990;
        goto LABEL_8;
    }
    v0 = (_DWORD *)malloc(0xC8u);
    if (v0)
        result = (int)meth_10048710(v0);
    else
        result = 0;
    dword_10AA2990 = result;
    dword_10AA2904 = (void *)result;
    if (result) {
        *(_DWORD *)(result + 4) = sub_1004D640;
        (*(void(__cdecl **)(int))(dword_10AA2990 + 4))(dword_10AA2990);
        *((_DWORD *)dword_10AA2904 + 3) = 1;
        *((_DWORD *)dword_10AA2904 + 26) = 1;
    LABEL_8:
        sub_1007AC00();
        result = 1;
    }
    return result;
}
// 1004D640: using guessed type int __cdecl sub_1004D640(int);
// 10AA2990: using guessed type int dword_10AA2990;
