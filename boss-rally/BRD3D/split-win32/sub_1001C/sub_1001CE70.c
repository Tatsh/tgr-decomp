#include "types-win32.h"
//----- (1001CE70) --------------------------------------------------------
unsigned int *__cdecl sub_1001CE70(unsigned int *a1) {
    unsigned int v1;                        // eax
    unsigned int v2;                        // edx
    unsigned int v3;                        // edx
    double v4;                              // st7
    unsigned int v5;                        // edx
    IDirect3DDevice2Vtbl *d3dDevice2LPVtbl; // ecx
    D3DCLIPSTATUS d3dClipStatus;            // [esp+8h] [ebp-20h] BYREF

    d3dClipStatus.dwFlags = 2;
    v1 = *a1;
    d3dClipStatus.dwStatus = 33550336;
    d3dClipStatus.minz = 0.0;
    minX = (v1 >> 12) & 0xFFF;
    v2 = *a1 & 0xFFF;
    d3dClipStatus.maxz = 1.0;
    dword_104C01A0 = gHeight - v2;
    v3 = a1[1] >> 12;
    d3dClipStatus.minx = (float)minX;
    dword_104C5164 = v3 & 0xFFF;
    v4 = (double)(v3 & 0xFFF);
    v5 = gHeight - (a1[1] & 0xFFF);
    d3dClipStatus.maxx = v4;
    dword_104C5170 = v5;
    d3dClipStatus.miny = (float)(gHeight - dword_104C01A0);
    d3dDevice2LPVtbl = g_D3DDevice2->lpVtbl;
    d3dClipStatus.maxy = (float)(int)(gHeight - v5);
    d3dDevice2LPVtbl->SetClipStatus(g_D3DDevice2, &d3dClipStatus);
    return a1 + 2;
}
// 100A81C4: using guessed type int g_Height;
// 104C01A0: using guessed type int dword_104C01A0;
// 104C5164: using guessed type int dword_104C5164;
// 104C516C: using guessed type int minX;
// 104C5170: using guessed type int dword_104C5170;
