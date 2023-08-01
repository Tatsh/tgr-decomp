//----- (100441A0) --------------------------------------------------------
int __thiscall sub_100441A0(void *this) {
    int v1;     // eax
    int result; // eax
    int v3;     // [esp+0h] [ebp-4h] BYREF

    v3 = (int)this;
    dword_10AA287C = 1;
    sub_100586A0();
    if (dword_10AA2884) {
        v1 = 0;
        v3 = 0;
        if (unk) {
            sub_1003D0B0(unk, (LPDWORD)&v3);
            v1 = v3;
        }
        if (v1) {
            *(_DWORD *)(v1 + 4) &= 0xFFFFFFDF;
            (*(void(__stdcall **)(SIZE_T, int, _DWORD))(*(_DWORD *)unk + 124))(unk, v3, 0);
        }
    }
    sub_10043BF0();
    sub_10043CD0();
    sub_10043E70();
    if (dword_10AA2884) {
        sub_100440D0();
        sub_100443E0();
    } else {
        sub_1003CE80();
        sub_10044280();
    }
    result = dword_10AA2884;
    if (dword_10AA2884) {
        if (dword_10AA2888) {
            if (dword_10AA2884)
                result = sub_1003CDA0();
        } else {
            result = sub_1003C150();
            dword_10AA2888 = 1;
        }
    }
    return result;
}
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2888: using guessed type int dword_10AA2888;
