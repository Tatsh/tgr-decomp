#include "types-win32.h"
//----- (10066510) --------------------------------------------------------
void sub_10066510() {
  _DWORD edi2;     // edi
  _DWORD esi3;     // esi
  _DWORD ebx6;     // ebx
  _DWORD ebp6;     // ebp
  _DWORD edi6;     // edi
  _DWORD eax7;     // eax
  _DWORD edx7;     // edx
  _DWORD esi7;     // esi
  _DWORD ecx9;     // ecx
  _DWORD ecx10;    // ecx
  _DWORD ecx16;    // ecx
  _DWORD esi17;    // esi
  _DWORD eax18;    // eax
  _DWORD edx18;    // edx
  char Base[4];    // [esp+10h] [ebp-A0h]
  char var9C[156]; // [esp+14h] [ebp-9Ch]

  if (gNetworkPlay) {
    edi2 = 0;
    if (dword_100B36FC > 0) {
        esi3 = &dword_10ACEEA0;
        do {
            *esi3 = sub_10005E40(*(esi3 - 941));
            ++edi2;
            esi3 += 2778;
        } while (edi2 < dword_100B36FC);
    }
  } else {
    ebx6 = dword_100B36F8;
    ebp6 = 0;
    edi6 = 0;
    if (dword_100B36F8 > 0) {
        eax7 = Base;
        edx7 = &dword_10ACD4F8;
        esi7 = var9C;
        do {
            if ((edx7[2] & 2) == 0) {
                ecx9 = *edx7;
                *(_DWORD *)esi7 = edi6;
                if (ecx9)
                    ecx10 = *(_DWORD *)(ecx9 + 4084);
                else
                    ecx10 = *(edx7 - 4);
                *(_DWORD *)eax7 = ecx10;
                ++ebp6;
                esi7 += 8;
                eax7 += 8;
            }
            ++edi6;
            edx7 += 32;
        } while (edi6 < ebx6);
    }
    if (ebp6) {
        qsort(Base, ebp6, 8u, sub_10066620);
        ebx6 = dword_100B36F8;
    }
    ecx16 = 0;
    if (ebp6 > 0) {
        esi17 = var9C;
        do {
            eax18 = *(_DWORD *)esi17 << 7;
            edx18 = *(int *)((char *)&dword_10ACD4F8 + eax18);
            if (edx18) {
                *(_DWORD *)(edx18 + 4088) = ebx6 - ecx16 - 1;
                ebx6 = dword_100B36F8;
            } else {
                *(int *)((char *)&dword_10ACD4EC + eax18) = ebx6 - ecx16 - 1;
            }
            ++ecx16;
            esi17 += 8;
        } while (ecx16 < ebp6);
    }
  }
}
// 1007E2A0: using guessed type int __cdecl qsort(_DWORD, _DWORD, _DWORD, _DWORD);
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 1022AF18: using guessed type int gNetworkPlay;
