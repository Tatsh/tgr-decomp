#include "types-n64.h"
//----- (80220474) --------------------------------------------------------
int __fastcall sub_80220474(int *a1, int a2, int a3, int a4) {
    int result; // $v0
    char **v5;  // [sp+1Ch] [-4h]

    v5 = &(&gCarData)[24 * a3];
    v5[7] = (char *)CHK_GetFileSize((int)v5[5]);
    sub_8021CD24((int)a1, (int)&dword_802F7F00[0x2000 * a4]);
    result = LoadCarWithIndex2((unsigned __int8 *)&dword_803C8000[14306 * a2], (int)v5[5], a1);
    a1[8] = a2;
    a1[9] = a3;
    return result;
}
// 8028AE0C: using guessed type char *off_8028AE0C;
// 802F7F00: using guessed type int dword_802F7F00[512];
// 803C8000: using guessed type int dword_803C8000[512];
