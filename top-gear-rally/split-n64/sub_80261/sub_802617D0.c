#include "../../types-n64.h"
//----- (802617D0) --------------------------------------------------------
float __fastcall sub_802617D0(float a1) {
    double v1;    // $f18
    float v2;     // $f0
    double v3;    // $f14
    int v4;       // $v0
    double v5;    // $f2
    float result; // $f0

    if (((SLODWORD(a1) >> 22) & 0x1FFu) >= 0x136)
        return 0.0;
    *(float *)&v1 = 1.75;
    if (a1 > 0.0)
        v2 = a1;
    else
        v2 = -a1;
    *((float *)&v1 + 1) = 0.0;
    v3 = v2 * 0.3183098861837907 + v1;
    if (v3 >= 0.0)
        v4 = (int)(v3 + v1);
    else
        v4 = (int)(v3 - v1);
    v5 = v2 - ((double)v4 - v1) * 3.141592621803284 - ((double)v4 - v1) * 0.00000003178650954705639;
    result = v5 * (v5 * v5) *
                 (((0.000002605780637968037 * (v5 * v5) + -0.0001980960290193795) * (v5 * v5) +
                   0.008333066246082155) *
                      (v5 * v5) +
                  -0.1666665955042776) +
             v5;
    if ((v4 & 1) != 0)
        result = -result;
    return result;
}
