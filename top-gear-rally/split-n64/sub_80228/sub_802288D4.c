#include "types-n64.h"
//----- (802288D4) --------------------------------------------------------
_WORD *__fastcall sub_802288D4(int a1) {
    float v1;      // $f0
    int v2;        // $v0
    int v3;        // $v1
    int v4;        // $a1
    __int16 v5;    // $a2
    int v6;        // $a1
    _WORD *result; // $v0

    v1 = (float)*(int *)(a1 + 320) * 0.13699999;
    v2 = a1 + 6608;
    *(float *)(a1 + 4192) = v1;
    v3 = a1 + 4304;
    v4 = 0;
    *(float *)(a1 + 4196) = v1 + 0.034000002;
    *(float *)(a1 + 4200) = (float)(v1 + 0.034000002) + 0.034000002;
    *(float *)(a1 + 4204) = (float)((float)(v1 + 0.034000002) + 0.034000002) + 0.034000002;
    *(_DWORD *)(a1 + 4252) = 0;
    *(_DWORD *)(a1 + 4220) = 2;
    *(_DWORD *)(a1 + 4248) = 0;
    *(_DWORD *)(a1 + 4216) = 2;
    *(_DWORD *)(a1 + 4244) = 0;
    *(_DWORD *)(a1 + 4212) = 2;
    *(_DWORD *)(a1 + 4208) = 2;
    *(float *)(a1 + 4128) = (float)COERCE_INT(0.0) * 0.15000001;
    *(_DWORD *)(a1 + 4240) = 0;
    *(float *)(a1 + 4132) = (float)1 * 0.15000001;
    *(float *)(a1 + 4236) = 0.0;
    *(float *)(a1 + 4204) = 0.0;
    *(float *)(a1 + 4232) = 0.0;
    *(float *)(a1 + 4200) = 0.0;
    *(float *)(a1 + 4228) = 0.0;
    *(float *)(a1 + 4196) = 0.0;
    *(float *)(a1 + 4192) = 0.0;
    *(float *)(a1 + 4224) = 0.0;
    *(float *)(a1 + 4136) = (float)2 * 0.15000001;
    *(float *)(a1 + 4140) = (float)3 * 0.15000001;
    do {
        *(_WORD *)(v2 + 4) = 0;
        v5 = *(_WORD *)(v2 + 4);
        v2 += 6;
        *(_WORD *)(v2 - 4) = v5;
        *(_WORD *)(v2 - 6) = v5;
        *(_WORD *)v3 = 0;
        *(_WORD *)(v3 + 2) = 0;
        *(_WORD *)(v3 + 4) = 0;
        *(_BYTE *)(v3 + 12) = 0;
        *(_BYTE *)(v3 + 13) = 0;
        ++v4;
        v3 += 16;
        *(_BYTE *)(v3 - 2) = 0;
        *(_BYTE *)(v3 - 1) = -1;
    } while (v4 < 144);
    v6 = 0;
    result = (_WORD *)a1;
    do {
        v6 += 4;
        result[3737] = 2;
        result[3738] = 2;
        result[3739] = 2;
        result += 4;
        result[3732] = 2;
    } while (v6 != 36);
    return result;
}
