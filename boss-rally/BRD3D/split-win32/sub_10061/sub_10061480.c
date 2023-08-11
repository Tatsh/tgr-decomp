#include "types-win32.h"
//----- (10061480) --------------------------------------------------------
int __cdecl sub_10061480(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
  int v8;   // eax
  int v9;   // edx
  int v10;  // esi
  int v11;  // ecx
  bool v12; // cc
  int v13;  // edi
  int v14;  // ebp
  int v15;  // ebx
  int v16;  // ecx
  int v18;  // [esp+Ch] [ebp-8h]
  int v19;  // [esp+10h] [ebp-4h]
  int v20;  // [esp+18h] [ebp+4h]
  int v21;  // [esp+20h] [ebp+Ch]
  int v22;  // [esp+28h] [ebp+14h]

  v8 = a1;
  if (a1) {
    v9 = a5 - a4;
    v10 = a3 - a2;
    v11 = 0;
    v18 = a3 - a2;
    v12 = a5 - a4 <= 0;
    v22 = a5 - a4;
    v20 = 0;
    if (!v12) {
        v19 = 4 * v10;
        v21 = v8;
        do {
            v13 = v8;
            if (v10 > 0) {
                v14 = v10;
                v15 = a6 + 4 * (a2 + a7 * (a8 - a4 - v11 - 1)) - v8;
                do {
                    *(_DWORD *)(v13 + v15) = *(_DWORD *)v13;
                    if (!*(_BYTE *)v13) {
                        v16 = *(unsigned __int8 *)(v13 + 1);
                        if (v16 == *(unsigned __int8 *)(v13 + 2)) {
                            *(_BYTE *)(v13 + v15) = -(char)(dword_10AA3440 * v16);
                            v10 = v18;
                            *(_BYTE *)(v13 + v15 + 1) = -(char)(dword_10AA3448 * v16);
                            *(_BYTE *)(v13 + v15 + 2) = -(char)(dword_10AA345C * v16);
                        }
                    }
                    v13 += 4;
                    --v14;
                } while (v14);
                v8 = v21;
                v11 = v20;
                v9 = v22;
            }
            ++v11;
            v8 += v19;
            v20 = v11;
            v21 = v8;
        } while (v11 < v9);
    }
  }
  return 1;
}
// 10AA3440: using guessed type int dword_10AA3440;
// 10AA3448: using guessed type int dword_10AA3448;
// 10AA345C: using guessed type int dword_10AA345C;
