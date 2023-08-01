//----- (10044F50) --------------------------------------------------------
int __thiscall sub_10044F50(void *this) {
    _DWORD *v1; // eax
    int result; // eax
    void *v3;   // ecx

    sub_100419D0((int)asc_100AD300);
    g_GameMode = 1;
    sub_1003E680();
    if (dword_10AA290C) {
        dword_10AA2904 = (void *)dword_10AA290C;
        result = 1;
    } else {
        v1 = (_DWORD *)malloc(0xC8u);
        if (v1)
            result = (int)sub_10048710(v1);
        else
            result = 0;
        dword_10AA290C = result;
        dword_10AA2904 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_1004B430;
            (*(void(__cdecl **)(int))(dword_10AA290C + 4))(dword_10AA290C);
            *((_DWORD *)dword_10AA2904 + 3) = 1;
            v3 = dword_10AA2904;
            *((_DWORD *)dword_10AA2904 + 26) = 1;
            debugPrint(v3);
            sub_1003DFC0();
            sub_1003E510();
            result = 1;
        }
    }
    return result;
}
// 1004B430: using guessed type int __cdecl sub_1004B430(int);
// 100AA010: using guessed type int g_GameMode;
// 10AA290C: using guessed type int dword_10AA290C;
