#include "types-win32.h"
//----- (1007A940) --------------------------------------------------------
int sub_1007A940() {
  unk00334 *u334;   // ecx
  int v1;           // edi
  CLSID *v3;        // eax
  unk00334 *v4;     // esi
  unsigned int v5;  // ebp
  void *v6;         // eax
  unk00334 *v7;     // ecx
  unk00334 *v8;     // edx
  int v9;           // esi
  unsigned int v10; // eax
  unk00334 *v11;    // ecx
  int v12;          // eax
  unsigned int i;   // [esp+20h] [ebp-64h] BYREF
  int height;       // [esp+24h] [ebp-60h] BYREF
  int bitDepth;     // [esp+28h] [ebp-5Ch] BYREF
  int width;        // [esp+2Ch] [ebp-58h] BYREF
  int a5;           // [esp+30h] [ebp-54h] BYREF
  CHAR v18[80];     // [esp+34h] [ebp-50h] BYREF

  u334 = gUnk00334Ptr1;
  v1 = 0;
  if (!gUnk00334Ptr1)
    return 0;
  v3 = dword_118AC23C;
  if (!dword_118AC23C) {
    v3 = sub_1001A5D0(gUnk00334Ptr1, 0, 0);
    dword_118AC23C = v3;
    if (!v3)
        return 0;
    u334 = gUnk00334Ptr1;
  }
  v4 = u334->field_318;
  if (!v4)
    return 0;
  v5 = u334->field_314;
  if (!v5)
    return 0;
  if (!gUnk00334Ptr0)
    gUnk00334Ptr0 = meth_unk00334_1001A570(u334, 640, 480, 16, 0, (unk00228 *)v3);
  if (Base) {
    free(Base);
    Base = 0;
  }
  v6 = (void *)malloc(4 * v5);
  Base = v6;
  if (!v6)
    return 0;
  i = 0;
  v7 = v4;
  while (1) {
    v8 = v7->field_70;
    *((_DWORD *)v6 + i++) = v7;
    v7 = v8;
    if (!v8)
        break;
    v6 = Base;
  }
  qsort(Base, v5, 4, s_unk00334_QSortCompareFn);
  v9 = 0;
  v10 = 0;
  for (i = 0; i < v5; ++i) {
    v11 = (unk00334 *)*((_DWORD *)Base + v10);
    if (!v11 || !meth_unk00334_1001ACF0(v11, (unk00228 *)dword_118AC23C))
        goto LABEL_41;
    meth_unk00334_1001AC80(*((unk00334 **)Base + i), &width, &height, &bitDepth, &a5);
    if (a5) {
        wsprintfA(v18, "%4d x %4d x %2d (%4d Hz)", width, height, bitDepth, a5);
        v12 = width;
        if (gWidth1 != width || gHeight1 != height || gBitDepth != bitDepth || dword_10B4E6F4 != a5)
            goto LABEL_33;
    } else {
        wsprintfA(v18, "%4d x %4d x %2d", width, height, bitDepth);
        v12 = width;
        if (gWidth1 != width || gHeight1 != height || gBitDepth != bitDepth)
            goto LABEL_33;
    }
    dword_10AA2864 = v9;
    dword_10AA2A30 = v9;
    v1 = 1;
  LABEL_33:
    if (!v1 && v12 == 640 && height == 480 && bitDepth == 16) {
        dword_10AA2864 = v9;
        dword_10AA2A30 = v9;
    }
    if (dword_10AA29EC) {
        (*(void(__thiscall **)(int, CHAR *, _DWORD, int, void *, int))(
            *(_DWORD *)(dword_10AA29EC + 14392) + 16))(
            dword_10AA29EC + 14392, v18, 0, 1, &dword_100AB528, 1);
        (*(void(__thiscall **)(int, unsigned int *, int, int))(
            *(_DWORD *)(dword_10AA29EC + 14392) + 40))(dword_10AA29EC + 14392, &i, 4, v9);
    }
    ++v9;
  LABEL_41:
    v10 = i + 1;
  }
  return 1;
}
// 1007AA5D: conditional instruction was optimized away because of 'ebp.4!=0'
// 1007E2A0: using guessed type int __cdecl qsort(_DWORD, _DWORD, _DWORD, _DWORD);
// 10AA2864: using guessed type int dword_10AA2864;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA2A30: using guessed type int dword_10AA2A30;
// 10B4E6E8: using guessed type int gWidth1;
// 10B4E6EC: using guessed type int gHeight1;
// 10B4E6F0: using guessed type int gBitDepth;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
