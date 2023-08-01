//----- (10019620) --------------------------------------------------------
void __thiscall sub_10019620(void *this) {
    __int16 v1; // ax
    int v2;     // [esp+0h] [ebp-4h]
    int v3;     // [esp+0h] [ebp-4h]

    if (dword_100A79CC < 0) {
        if ((unsigned __int16)sub_1003BD50(this) < 0x80u) {
            flt_104B255C = 0.0;
            dword_100A79CC = 3;
            v1 = sub_1003BD50(v2);
            flt_104B0378 = (float)(v1 & 0x7FF);
            v3 = sub_1003BD50(v1 & 0x7FF) & 0x7FF;
            dword_104B0380 = LODWORD(flt_106C7C80);
            flt_104B037C = (float)v3;
        }
    } else {
        flt_104B255C = flt_104B255C - *(float *)&dword_106C2CFC * -343.0;
        if (dword_100A79CC <= 0) {
            if (flt_104B255C > 2048.0)
                dword_100A79CC = -1;
        } else {
            --dword_100A79CC;
        }
    }
}
// 10019692: variable 'v2' is possibly undefined
// 1003BD50: using guessed type int __cdecl sub_1003BD50(_DWORD);
// 100A79CC: using guessed type int dword_100A79CC;
// 104B0378: using guessed type float flt_104B0378;
// 104B037C: using guessed type float flt_104B037C;
// 104B0380: using guessed type int dword_104B0380;
// 104B255C: using guessed type float flt_104B255C;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 106C7C80: using guessed type float flt_106C7C80;
