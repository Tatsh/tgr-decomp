#include "types-n64.h"
//----- (8025EDBC) --------------------------------------------------------
float *__fastcall sub_8025EDBC(int a1) {
    float *result; // $v0
    int v2;        // $v1
    int v3;        // $a1
    int v4;        // $a2
    double v5;     // $f2
    bool v6;       // $fcc0
    double v7;     // $f4
    float v8;      // $f0
    bool v9;       // $fcc0
    double v10;    // $f12
    double v11;    // $f2
    float v12;     // $f0

    result = *(float **)(a1 + 24);
    v2 = 0;
    for (result[3] = 0.0;; result[3] = 0.0) {
        result[2] = 0.0;
        if (v2) {
            if (v2 == 1) {
                v3 = *(_DWORD *)(a1 + 8);
            } else if (v2 == 2) {
                v3 = *(_DWORD *)(a1 + 12);
            } else {
                v3 = *(_DWORD *)(a1 + 16);
            }
        } else {
            v3 = *(_DWORD *)(a1 + 4);
        }
        v4 = *(_DWORD *)(v3 + 436);
        ++v2;
        v5 = *(float *)(v3 + 472);
        if (v4 < 100)
            *(_DWORD *)(v3 + 436) = v4 + 1;
        if (v5 <= -0.3999) {
            *(_DWORD *)(v3 + 436) = 0;
            v5 = -0.30000001;
            v6 = 0.0 < -0.30000001;
        } else {
            v6 = v5 > 0.0;
        }
        v7 = v6 ? 0.0 - -0.3 : v5 - -0.3;
        v8 = v7;
        if (v8 < 0.0) {
            v8 = 0.0;
            v9 = 1;
        } else {
            v9 = v8 == 0.0;
        }
        if (v9) {
            v10 = 0.0;
        } else {
            v11 = v8 > 0.0 ? 1.0 : -1.0;
            v10 = v11;
        }
        v12 = v8 * (v10 * v8);
        result[4] = v12 * *(float *)(a1 + 440);
        result = *(float **)result;
        if (*(_DWORD *)(v3 + 436)) {
            if (!(_WORD)v4)
                *(_BYTE *)(a1 + 515) = 0x80;
        }
        if (v2 == 4)
            break;
    }
    return result;
}
