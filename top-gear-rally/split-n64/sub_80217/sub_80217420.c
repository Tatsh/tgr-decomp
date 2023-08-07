#include "../../types-n64.h"
//----- (80217420) --------------------------------------------------------
float __fastcall sub_80217420(float *a1) {
    float *v1;    // $v0
    float v2;     // $f2
    float v3;     // $f12
    float i;      // $f0
    float v5;     // $f12
    float result; // $f0

    v1 = a1;
    v2 = 0.0;
    v3 = 0.0;
    if (a1 < a1 + 12) {
        for (i = *a1;; i = *v1) {
            ++v1;
            if (i >= 0.0) {
                if (v2 < i)
                    v2 = i;
            } else if (i < v3) {
                v3 = i;
            }
            if (v1 >= a1 + 12)
                break;
        }
    }
    v5 = -v3;
    if (v2 < v5)
        result = v5;
    else
        result = v2;
    return result;
}
