#include "../../types-n64.h"
//----- (8022576C) --------------------------------------------------------
void __fastcall sub_8022576C(float a1, float a2) {
    float v2;  // $f20
    float v3;  // $f24
    bool v4;   // $fcc0
    float v5;  // $f0
    float v6;  // $f0
    float v7;  // $f0
    int v8;    // $s0
    float v9;  // $f24
    float v10; // $f22
    float v11; // $f20
    float v12; // $f0

    v2 = a1;
    v3 = a2;
    if (a2 < 0.0) {
        v2 = -a1;
        v3 = -a2;
    }
    if (v2 < 0.0) {
        v5 = v2;
        v2 = v3;
        v3 = -v5;
        v4 = v2 < (float)-v5;
    } else {
        v4 = v2 < v3;
    }
    if (v4) {
        v6 = v2;
        v2 = v3;
        v3 = v6;
    }
    v7 = sub_80261140((float)(v3 * v3) + (float)(v2 * v2));
    v8 = 0;
    if (v7 != 0.0) {
        v9 = v3 / v7;
        v10 = 0.39269909;
        v11 = 0.39269909 * 0.5;
        do {
            v12 = sub_80261610(v10);
            ++v8;
            if (v12 >= v9) {
                if (v9 >= v12 || (float)(v12 - v9) < 0.0049999999)
                    return;
                v10 = v10 - v11;
            } else {
                if ((float)(v9 - v12) < 0.0049999999)
                    return;
                v10 = v10 + v11;
            }
            v11 = v11 * 0.5;
        } while (v8 != 16);
    }
}
