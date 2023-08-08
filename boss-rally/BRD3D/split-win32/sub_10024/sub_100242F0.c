#include "../types-win32.h"
//----- (100242F0) --------------------------------------------------------
_DWORD *__cdecl sub_100242F0(_DWORD *a1) {
    _DWORD *result;  // eax
    unsigned int v2; // eax
    int v3;          // eax
    int v4;          // eax

    switch ((unsigned __int8)*a1) {
    case 2u:
        dword_104BC190 = (a1[1] >> 5) & 0xF;
        result = a1 + 2;
        break;
    case 0xAu:
        v2 = (unsigned __int16)(*a1 >> 8);
        if ((*a1 & 0xF00) != 0) {
            v4 = 16 * (v2 >> 5);
            byte_104BBE3C[v4] = HIBYTE(a1[1]);
            byte_104BBE3D[v4] = BYTE2(a1[1]);
            byte_104BBE3E[v4] = BYTE1(a1[1]);
            dword_104C5180 = 0;
            goto LABEL_6;
        }
        v3 = 4 * (v2 >> 5);
        LOBYTE(dword_104BBE38[v3]) = HIBYTE(a1[1]);
        BYTE1(dword_104BBE38[v3]) = BYTE2(a1[1]);
        BYTE2(dword_104BBE38[v3]) = BYTE1(a1[1]);
        dword_104C5180 = 0;
        result = a1 + 2;
        break;
    default:
    LABEL_6:
        result = a1 + 2;
        break;
    }
    return result;
}
// 104BBE38: using guessed type int dword_104BBE38[];
// 104BC190: using guessed type int dword_104BC190;
// 104C5180: using guessed type int dword_104C5180;
