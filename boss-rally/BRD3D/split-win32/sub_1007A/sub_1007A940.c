#include "../../types-win32.h"
//----- (1007A940) --------------------------------------------------------
int sub_1007A940()
{
  _DWORD *v0; // ecx
  int v1; // edi
  IID **__attribute__((__org_arrdim(0,3))) v3; // eax
  int v4; // esi
  size_t v5; // ebp
  void *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  unk1 *v11; // ecx
  int v12; // eax
  unsigned int i; // [esp+20h] [ebp-64h] BYREF
  int v14; // [esp+24h] [ebp-60h] BYREF
  int v15; // [esp+28h] [ebp-5Ch] BYREF
  int v16; // [esp+2Ch] [ebp-58h] BYREF
  int v17; // [esp+30h] [ebp-54h] BYREF
  CHAR v18[80]; // [esp+34h] [ebp-50h] BYREF

  v0 = dword_118AC238;
  v1 = 0;
  if ( !dword_118AC238 )
    return 0;
  v3 = (IID **)dword_118AC23C;
  if ( !dword_118AC23C )
  {
    v3 = sub_1001A5D0(dword_118AC238, 0, 0);
    dword_118AC23C = (int)v3;
    if ( !v3 )
      return 0;
    v0 = dword_118AC238;
  }
  v4 = v0[198];
  if ( !v4 )
    return 0;
  v5 = v0[197];
  if ( !v5 )
    return 0;
  if ( !dword_118AC240 )
    dword_118AC240 = (int)meth_1001A570(v0, 640, 480, 16, 0, (IID *)v3);
  if ( Base )
  {
    free(Base);
    Base = 0;
  }
  v6 = (void *)malloc(4 * v5);
  Base = v6;
  if ( !v6 )
    return 0;
  i = 0;
  v7 = v4;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v7 + 112);
    *((_DWORD *)v6 + i++) = v7;
    v7 = v8;
    if ( !v8 )
      break;
    v6 = Base;
  }
  qsort(Base, v5, 4u, sub_1007A710);
  v9 = 0;
  v10 = 0;
  for ( i = 0; i < v5; ++i )
  {
    v11 = (unk1 *)*((_DWORD *)Base + v10);
    if ( !v11 || !meth_1001ACF0(v11, (IID **)dword_118AC23C) )
      goto LABEL_41;
    meth_1001AC80(*((unk1 **)Base + i), &v16, &v14, &v15, &v17);
    if ( v17 )
    {
      wsprintfA(v18, "%4d x %4d x %2d (%4d Hz)", v16, v14, v15, v17);
      v12 = v16;
      if ( dword_10B4E6E8 != v16 || dword_10B4E6EC != v14 || dword_10B4E6F0 != v15 || dword_10B4E6F4 != v17 )
        goto LABEL_33;
    }
    else
    {
      wsprintfA(v18, "%4d x %4d x %2d", v16, v14, v15);
      v12 = v16;
      if ( dword_10B4E6E8 != v16 || dword_10B4E6EC != v14 || dword_10B4E6F0 != v15 )
        goto LABEL_33;
    }
    dword_10AA2864 = v9;
    dword_10AA2A30 = v9;
    v1 = 1;
LABEL_33:
    if ( !v1 && v12 == 640 && v14 == 480 && v15 == 16 )
    {
      dword_10AA2864 = v9;
      dword_10AA2A30 = v9;
    }
    if ( dword_10AA29EC )
    {
      (*(void (__thiscall **)(int, CHAR *, _DWORD, int, void *, int))(*(_DWORD *)(dword_10AA29EC + 14392) + 16))(
        dword_10AA29EC + 14392,
        v18,
        0,
        1,
        &unk_100AB528,
        1);
      (*(void (__thiscall **)(int, unsigned int *, int, int))(*(_DWORD *)(dword_10AA29EC + 14392) + 40))(
        dword_10AA29EC + 14392,
        &i,
        4,
        v9);
    }
    ++v9;
LABEL_41:
    v10 = i + 1;
  }
  return 1;
}
// 1007AA5D: conditional instruction was optimized away because of 'ebp.4!=0'
// 10AA2864: using guessed type int dword_10AA2864;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA2A30: using guessed type int dword_10AA2A30;
// 10B4E6E8: using guessed type int dword_10B4E6E8;
// 10B4E6EC: using guessed type int dword_10B4E6EC;
// 10B4E6F0: using guessed type int dword_10B4E6F0;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
// 118AC23C: using guessed type int dword_118AC23C;
// 118AC240: using guessed type int dword_118AC240;
