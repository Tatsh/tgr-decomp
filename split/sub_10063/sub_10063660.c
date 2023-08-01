//----- (10063660) --------------------------------------------------------
void __thiscall sub_10063660(int this) {
    int v2;   // ecx
    int v3;   // eax
    int v4;   // edx
    int v5;   // [esp+0h] [ebp-18h]
    int v6;   // [esp+8h] [ebp-10h]
    float v7; // [esp+8h] [ebp-10h]

    if (*(int *)(this + 860) < 0 || flt_106C7C80 - 10.0 > *(float *)(this + 56)) {
        sub_10065630(this);
        sub_10062C50(this);
        v2 = *(_DWORD *)(this + 3980);
        v3 = *(_DWORD *)(this + 3984);
        v4 = v2 + 40 * v3;
        *(float *)&v6 = *(float *)(v4 + 84) - -2.0;
        if (g_GameMode == 2) {
            sub_10076420((float *)this, *(_DWORD *)(v4 + 76), *(_DWORD *)(v2 + 40 * (v3 + 2)), v6);
        } else {
            *(float *)&v5 = *(float *)(v4 + 76) - (double)*(int *)(this + 320) * -0.0099999998;
            sub_10076420((float *)this, v5, *(_DWORD *)(v2 + 40 * (v3 + 2)), v6);
        }
        v7 = sub_1003B7B0(*(float *)(this + 3988), *(float *)(this + 3992));
        sub_100764C0((float *)this, v7);
        sub_100767A0((_DWORD *)this, 0, 0, 0);
        sub_100769A0((_DWORD *)this, 0, 0, 0);
        *(_DWORD *)(*(_DWORD *)(this + 360) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 360) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(this + 360) + 416) = 2;
        *(_DWORD *)(*(_DWORD *)(this + 364) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 364) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(this + 364) + 416) = 2;
        *(_DWORD *)(*(_DWORD *)(this + 372) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 372) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(this + 372) + 416) = 2;
        *(_DWORD *)(*(_DWORD *)(this + 368) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 368) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(this + 368) + 416) = 2;
        *(_DWORD *)(this + 3744) = 0;
        *(_DWORD *)(this + 3748) = 0;
        *(_DWORD *)(this + 3752) = 0;
        *(_DWORD *)(this + 3756) = -180;
        *(_DWORD *)(this + 860) = 0;
        *(_BYTE *)(this + 10671) = 2;
        *(_DWORD *)(this + 10672) = 1036831949;
        sub_100015D0((#479 *)this, COERCE_FLOAT(this + 10112), 1.0);
        *(_DWORD *)(this + 10476) = *(_DWORD *)(this + 10160);
        *(_DWORD *)(this + 10480) = *(_DWORD *)(this + 10164);
        *(_DWORD *)(this + 10484) = *(_DWORD *)(this + 10168);
        *(_DWORD *)(this + 3960) = 1;
    }
}
// 100AA010: using guessed type int g_GameMode;
// 106C7C80: using guessed type float flt_106C7C80;
