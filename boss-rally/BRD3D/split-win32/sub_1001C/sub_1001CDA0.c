#include "../../types-win32.h"
//----- (1001CDA0) --------------------------------------------------------
unsigned int *__cdecl sub_1001CDA0(unsigned int *a1) {
    unsigned int v1;      // eax
    unsigned int v2;      // edx
    signed int maxX;      // edx
    unsigned int v4;      // edi
# 489 * d3dDevice2LPVtbl; // ecx
    D3DCLIPSTATUS v7;     // [esp+8h] [ebp-20h] BYREF

    v7.dwFlags = 2;
    v1 = *a1;
    v7.dwStatus = 0x1FFF000;
    v7.minz = 0.0;
    minX = (v1 >> 14) & 0x3FF;
    v2 = *a1;
    v7.maxz = 1.0;
    dword_104C01A0 = g_Height - ((v2 >> 2) & 0x3FF);
    maxX = (a1[1] >> 14) & 0x3FF;
    v7.minx = (float)minX;
    dword_104C5164 = maxX;
    v4 = (a1[1] >> 2) & 0x3FF;
    v7.maxx = (float)maxX;
    dword_104C5170 = g_Height - v4;
    v7.miny = (float)(g_Height - dword_104C01A0);
    d3dDevice2LPVtbl = (#489 *)g_D3DDevice2->lpVtbl;
    v7.maxy = (float)(int)(g_Height - (g_Height - v4));
    (*((void(__stdcall **)(IDirect3DDevice2 *, D3DCLIPSTATUS *))d3dDevice2LPVtbl + 31))(
        g_D3DDevice2, &v7);
    return a1 + 2;
}
// 100A81C4: using guessed type int g_Height;
// 104C01A0: using guessed type int dword_104C01A0;
// 104C5164: using guessed type int dword_104C5164;
// 104C516C: using guessed type int minX;
// 104C5170: using guessed type int dword_104C5170;