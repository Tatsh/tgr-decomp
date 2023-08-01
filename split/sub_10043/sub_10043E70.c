//----- (10043E70) --------------------------------------------------------
int sub_10043E70() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA2948) {
        dword_10AA2904 = (void *)dword_10AA2948;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)sub_10048710(v0);
        else
            result = 0;
        dword_10AA2948 = result;
        dword_10AA2904 = (void *)result;
        if (!result)
            return result;
        *(_DWORD *)(result + 4) = sub_10056FF0;
        (*(void(__cdecl **)(int))(dword_10AA2948 + 4))(dword_10AA2948);
        *((_DWORD *)dword_10AA2904 + 3) = 1;
        *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
    if (!dword_10A9CFFC && !dword_10A9D000 && (!dword_10AA287C || dword_10AA287C == 1))
        sub_1003C020();
    return 1;
}
// 10056FF0: using guessed type int __cdecl sub_10056FF0(int);
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2948: using guessed type int dword_10AA2948;
