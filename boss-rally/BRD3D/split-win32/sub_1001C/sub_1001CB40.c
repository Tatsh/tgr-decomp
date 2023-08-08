#include "types-win32.h"
//----- (1001CB40) --------------------------------------------------------
int __cdecl sub_1001CB40(int a1) {
    int v2;     // edx
    int result; // eax
    __int64 v4; // [esp+0h] [ebp-8h]
    float v5;   // [esp+Ch] [ebp+4h]
    float v6;   // [esp+Ch] [ebp+4h]
    float v7;   // [esp+Ch] [ebp+4h]
    float v8;   // [esp+Ch] [ebp+4h]

    v5 = (float)HIBYTE(*(_DWORD *)(a1 + 4));
    flt_104BBF04 = v5 * 0.0039215689;
    v6 = (float)(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 4));
    flt_104C0BAC = v6 * 0.0039215689;
    v4 = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 4));
    v7 = (float)v4;
    flt_104BBEB8 = v7 * 0.0039215689;
    v2 = (unsigned __int8)*(_DWORD *)(a1 + 4);
    result = a1 + 8;
    LODWORD(v4) = v2;
    v8 = (float)v4;
    flt_104BBE2C = v8 * 0.0039215689;
    return result;
}
// 104BBE2C: using guessed type float flt_104BBE2C;
// 104BBEB8: using guessed type float flt_104BBEB8;
// 104BBF04: using guessed type float flt_104BBF04;
// 104C0BAC: using guessed type float flt_104C0BAC;
