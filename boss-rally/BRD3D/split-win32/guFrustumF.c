#include "types-win32.h"
//----- (10030810) --------------------------------------------------------
# 507 * __cdecl guFrustumF(#507 * a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
    double v7;  // st5
    double v8;  // st1
    double v9;  // rt2
    double v10; // st1
    double v11; // st0
    double v12; // st5
# 507 * result; // eax
    double v14; // st4
    double v15; // rtt
    float v16;  // [esp+18h] [ebp+18h]
    float v17;  // [esp+18h] [ebp+18h]
    float v18;  // [esp+18h] [ebp+18h]
    float v19;  // [esp+1Ch] [ebp+1Ch]

    if (a2 == a3 || a5 == a4 || a6 == a7)
        return (#507 *)printf("Error: guFrustumF(): unable to compute matrix\n");
    v7 = a7 + a6;
    v8 = a7 * a6 + a7 * a6;
    v19 = a7 - a6;
    v9 = v8;
    v10 = a6 + a6;
    v16 = v10;
    v11 = v7;
    v12 = v16;
    result = a1;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 1) = 0;
    *((_DWORD *)a1 + 13) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 6) = 0;
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 7) = 0;
    *((_DWORD *)a1 + 11) = -1082130432;
    *((_DWORD *)a1 + 15) = 0;
    v17 = a3 - a2;
    v14 = v10 / v17;
    v15 = (a3 + a2) / v17;
    v18 = a5 - a4;
    *(float *)a1 = v14;
    *((float *)a1 + 8) = v15;
    *((float *)a1 + 5) = v12 / v18;
    *((float *)a1 + 9) = (a5 + a4) / v18;
    *((float *)a1 + 10) = -(v11 / v19);
    *((float *)a1 + 14) = -(v9 / v19);
    return result;
}
