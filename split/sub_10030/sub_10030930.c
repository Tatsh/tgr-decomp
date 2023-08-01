//----- (10030930) --------------------------------------------------------
int __cdecl sub_10030930(int a1, int a2, float a3, float a4, float a5, float a6) {
    long double v6; // st7
    long double v7; // st6
    double v8;      // st7
    float v9;       // eax
    int result;     // eax
    float v11;      // [esp+0h] [ebp-1Ch]
    float v12;      // [esp+8h] [ebp-14h]
    float v14;      // [esp+30h] [ebp+14h]
    float v15;      // [esp+30h] [ebp+14h]

    v6 = tan(a3 * 0.008726646259971648) * a5;
    v14 = v6;
    v7 = v6 * a4;
    v8 = v14;
    v9 = v14;
    v15 = v7;
    v12 = -v8;
    v11 = -v15;
    guFrustumF((struct_a1_1 *)a1, v11, v15, v12, v9, a5, a6);
    result = a2;
    *(_WORD *)a2 = 1;
    return result;
}
