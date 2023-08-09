#include "types-win32.h"
//----- (1001CDA0) --------------------------------------------------------
unsigned int *__cdecl sub_1001CDA0(unsigned int *a1) {
    unsigned int v1;                        // eax
    unsigned int v2;                        // edx
    signed int maxX;                        // edx
    unsigned int v4;                        // edi
    IDirect3DDevice2Vtbl *d3dDevice2LPVtbl; // ecx
    D3DCLIPSTATUS v7;                       // [esp+8h] [ebp-20h] BYREF

    v7.dwFlags = 2;
    v1 = *a1;
    v7.dwStatus = 0x1FFF000;
    v7.minz = 0.0;
    minX = (v1 >> 14) & 0x3FF;
    v2 = *a1;
    v7.maxz = 1.0;
    dword_104C01A0 = gHeight - ((v2 >> 2) & 0x3FF);
    maxX = (a1[1] >> 14) & 0x3FF;
    v7.minx = (float)minX;
    dword_104C5164 = maxX;
    v4 = (a1[1] >> 2) & 0x3FF;
    v7.maxx = (float)maxX;
    dword_104C5170 = gHeight - v4;
    v7.miny = (float)(gHeight - dword_104C01A0);
    d3dDevice2LPVtbl = g_D3DDevice2->lpVtbl;
    v7.maxy = (float)(int)(gHeight - (gHeight - v4));
    d3dDevice2LPVtbl->SetClipStatus(g_D3DDevice2, &v7);
    return a1 + 2;
}
// 100A81C4: using guessed type int gHeight;
// 104C01A0: using guessed type int dword_104C01A0;
// 104C5164: using guessed type int dword_104C5164;
// 104C516C: using guessed type int minX;
// 104C5170: using guessed type int dword_104C5170;
