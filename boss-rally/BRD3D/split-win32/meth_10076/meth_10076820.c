#include "types-win32.h"
//----- (10076820) --------------------------------------------------------
int __thiscall meth_10076820(_DWORD *this, float a2, float a3, float a4) {
    float v5;   // edi
    int v6;     // ecx
    int v7;     // edx
    int v8;     // eax
    int v9;     // ecx
    int v10;    // edx
    int result; // eax
    int v12;    // ecx
    float v13;  // [esp+0h] [ebp-10h] BYREF
    float v14;  // [esp+4h] [ebp-Ch]
    float v15;  // [esp+8h] [ebp-8h]
    float v16;  // [esp+Ch] [ebp-4h]
    float v17;  // [esp+14h] [ebp+4h]
    float v18;  // [esp+14h] [ebp+4h]
    float v19;  // [esp+14h] [ebp+4h]
    float v20;  // [esp+14h] [ebp+4h]
    float v21;  // [esp+18h] [ebp+8h]
    float v22;  // [esp+1Ch] [ebp+Ch]

    v17 = a2 * 0.5;
    v5 = v17;
    v21 = a3 * 0.5;
    v22 = a4 * 0.5;
    v18 = sin_(v17);
    v13 = cos_(v5);
    v14 = 0.0;
    v15 = 0.0;
    v16 = v18;
    math_10074090((float *)this + 125, (float *)this + 125, &v13);
    v19 = sin_(v21);
    v13 = cos_(v21);
    v14 = 0.0;
    v15 = v19;
    v16 = 0.0;
    math_10074090((float *)this + 125, (float *)this + 125, &v13);
    v20 = sin_(v22);
    v13 = cos_(v22);
    v14 = v20;
    v15 = 0.0;
    v16 = 0.0;
    math_10074090((float *)this + 125, (float *)this + 125, &v13);
    math_100741B0((float *)this + 125);
    v6 = this[126];
    v7 = this[127];
    this[181] = this[125];
    v8 = this[128];
    this[182] = v6;
    this[183] = v7;
    v9 = this[125];
    v10 = this[126];
    this[184] = v8;
    result = this[127];
    this[164] = v9;
    v12 = this[128];
    this[165] = v10;
    this[166] = result;
    this[167] = v12;
    return result;
}
