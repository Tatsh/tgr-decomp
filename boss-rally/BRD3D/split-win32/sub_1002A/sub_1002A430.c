#include "types-win32.h"
//----- (1002A430) --------------------------------------------------------
int __cdecl sub_1002A430(int a1, int a2) {
  int result;           // eax
  unsigned int v3;      // edi
  _DWORD *v4;           // ebp
  int v5;               // ebx
  __int16 v6;           // si
  unsigned int v7;      // eax
  _DWORD *v8;           // ecx
  int v9;               // ebx
  int v10;              // ecx
  int v11;              // eax
  int v12;              // eax
  unsigned __int8 *v13; // eax
  int v14;              // [esp+0h] [ebp-2BCh]
  int v15;              // [esp+4h] [ebp-2B8h]
  int v16;              // [esp+8h] [ebp-2B4h]
  unsigned int v17;     // [esp+Ch] [ebp-2B0h]
  int v18[171];         // [esp+10h] [ebp-2ACh] BYREF

  result = a2;
  if (a2 > 0) {
    v3 = dword_105553F0;
    v4 = (_DWORD *)(a1 + 8);
    v15 = a2;
    do {
      v5 = *(v4 - 2);
      if (v5) {
        if ((v4[6] & 0x100000) != 0) {
          v6 = *(_WORD *)(*v4 + 2);
          if (v6 != 2 || *(_DWORD *)(*v4 + 8) != -1) {
              v7 = 0;
              if (v3) {
                  v8 = (char *)dword_1057543C + 80;
                  do {
                      if (*v8 == v5)
                          break;
                      ++v7;
                      v8 += 174;
                  } while (v7 < v3);
              }
              v14 = 0;
              if (v6) {
                  v9 = 12;
                  v10 = 696 * v7;
                  v16 = 696 * v7;
                  v17 = v7 << 16;
                  while (1) {
                      v11 = *v4;
                      qmemcpy(v18, (char *)dword_1057543C + v10 + 4, sizeof(v18));
                      v18[19] = dword_10690BEC + *(_DWORD *)(v11 + v9);
                      v12 = *(_DWORD *)(v11 + v9 + 4);
                      if (v12 > 0) {
                          v18[20] = dword_10690BEC + v12;
                          qmemcpy(off_100A7DF0, (const void *)(dword_10690BEC + v12), 0x200u);
                      }
                      dword_10575444 = 0;
                      dword_10575440 = 0;
                      v13 = sub_10028860((#506 *)v18);
                      *(_DWORD *)(v9 + *v4) = v17 | graphics_TIDFromTextureAppend(v18, (int)v13);
                      v9 += 12;
                      if (++v14 >= *(unsigned __int16 *)(*v4 + 2))
                          break;
                      v10 = v16;
                  }
                  v3 = dword_105553F0;
              }
          }
        }
      }
      v4 += 9;
      result = --v15;
    } while (v15);
  }
  return result;
}
// 1002A430: using guessed type int __cdecl sub_1002A430(int, int);
// 100A7DF0: using guessed type void *off_100A7DF0;
// 105553F0: using guessed type int dword_105553F0;
// 10575440: using guessed type int dword_10575440;
// 10575444: using guessed type int dword_10575444;
// 10690BEC: using guessed type int dword_10690BEC;
