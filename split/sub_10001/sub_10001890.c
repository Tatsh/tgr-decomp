//----- (10001890) --------------------------------------------------------
float *__thiscall sub_10001890(_DWORD *this, float a2) {
    double v4; // st7
    float *v5; // ebx
    int v7[3]; // [esp+Ch] [ebp-Ch] BYREF
    float v8;  // [esp+1Ch] [ebp+4h]

    sub_1003AEE0((float *)v7, (float *)this + 0xA38, (float *)(LODWORD(a2) + 0x30));
    v4 = sub_1003B170((float *)v7);
    if (v4 == 0.0) {
        if (sub_1003B170((float *)LODWORD(a2)) == 0.0) {
            *(_DWORD *)LODWORD(a2) = *this;
            *(_DWORD *)(LODWORD(a2) + 4) = this[1];
            *(_DWORD *)(LODWORD(a2) + 8) = this[2];
        }
    } else {
        v8 = v4;
        sub_1003AD40(SLODWORD(a2), (int)v7, v8);
    }
    if (this[0x3DF]) {
        v5 = (float *)(LODWORD(a2) + 16);
        sub_1003AC30((float *)(LODWORD(a2) + 16), (float *)this + 8, (float *)LODWORD(a2));
    } else {
        v7[0] = 0;
        v7[1] = 0;
        v7[2] = 1065353216;
        v5 = (float *)(LODWORD(a2) + 16);
        sub_1003AC30((float *)(LODWORD(a2) + 16), (float *)v7, (float *)LODWORD(a2));
    }
    return sub_1003AC30((float *)(LODWORD(a2) + 32), (float *)LODWORD(a2), v5);
}
