//----- (10030810) --------------------------------------------------------
struct_a1_1 *__cdecl guFrustumF(
    struct_a1_1 *a1, float a2, float a3, float a4, float a5, float a6, float a7) {
    double v7;           // st5
    double v8;           // st1
    double v9;           // rt2
    double v10;          // st1
    double v11;          // st0
    double v12;          // st5
    struct_a1_1 *result; // eax
    double v14;          // st4
    double v15;          // rtt
    float v16;           // [esp+18h] [ebp+18h]
    float v17;           // [esp+18h] [ebp+18h]
    float v18;           // [esp+18h] [ebp+18h]
    float v19;           // [esp+1Ch] [ebp+1Ch]

    if (a2 == a3 || a5 == a4 || a6 == a7)
        return (struct_a1_1 *)printf("Error: guFrustumF(): unable to compute matrix\n");
    v7 = a7 + a6;
    v8 = a7 * a6 + a7 * a6;
    v19 = a7 - a6;
    v9 = v8;
    v10 = a6 + a6;
    v16 = v10;
    v11 = v7;
    v12 = v16;
    result = a1;
    a1->dword10 = 0;
    a1->dword30 = 0;
    a1->dword4 = 0;
    a1->dword34 = 0;
    a1->dword8 = 0;
    a1->dword18 = 0;
    a1->dwordC = 0;
    a1->dword1C = 0;
    a1->dword2C = -1082130432;
    a1->dword3C = 0;
    v17 = a3 - a2;
    v14 = v10 / v17;
    v15 = (a3 + a2) / v17;
    v18 = a5 - a4;
    a1->float0 = v14;
    a1->float20 = v15;
    a1->float14 = v12 / v18;
    a1->float24 = (a5 + a4) / v18;
    a1->float28 = -(v11 / v19);
    a1->float38 = -(v9 / v19);
    return result;
}
