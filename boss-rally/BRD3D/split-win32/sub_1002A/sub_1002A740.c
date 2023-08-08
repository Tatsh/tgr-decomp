#include "types-win32.h"
//----- (1002A740) --------------------------------------------------------
int sub_1002A740() {
    char v0;    // cl
    char *v1;   // eax
    int result; // eax

    if (g_ChosenWeather == 2 || (v0 = 0x80, g_ChosenWeather == 3))
        v0 = 32;
    v1 = (char *)&unk_104D51C1;
    do {
        *(v1 - 1) = v0;
        *v1 = v0;
        v1[1] = v0;
        v1[2] = v0;
        v1 += 4;
    } while ((int)v1 < (int)&unk_104D51D1);
    result = dword_118AA0B0(&unk_104D51C0, 0, 4, 4, 1, 4, 0, 0, 1, 1, 0, 0, 1, 0);
    dword_105553E4 = result;
    return result;
}
// 1022B350: using guessed type int g_ChosenWeather;
// 105553E4: using guessed type int dword_105553E4;
// 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
