#include "../../types-win32.h"
//----- (1002AF10) --------------------------------------------------------
void __cdecl sub_1002AF10(int a1, float a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  unsigned int *v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  unsigned int *v10; // [esp-50h] [ebp-50h]
  unsigned int *v11; // [esp-50h] [ebp-50h]

  if ( a2 >= 0.1 )
  {
    if ( a2 > 0.69999999 )
      a2 = 0.69999999;
    v2 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v2 = -419430400;
    v2[1] = 0;
    v3 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v3 = -1174399998;
    v3[1] = 0;
    v4 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v4 = -1191181539;
    v4[1] = 5260096;
    v10 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    sub_1002F900(v10, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003);
    v5 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v5 = -100663296;
    v5[1] = (__int64)(a2 * 255.0) | 0xFFFFFF00;
    v6 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v6 = -1174403582;
    v6[1] = 192;
    v7 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    *v7 = ((*(_DWORD *)(a1 + 88 * dword_106C5708) + *(_DWORD *)(a1 + 88 * dword_106C5708 + 8)) << 12) & 0xFFF000 | ((unsigned __int16)*(_DWORD *)(a1 + 88 * dword_106C5708 + 4) + (unsigned __int16)*(_DWORD *)(a1 + 88 * dword_106C5708 + 12)) & 0xFFF | 0xE1000000;
    v7[1] = ((*(_DWORD *)(a1 + 88 * dword_106C5708) & 0xFFF) << 12) | *(_DWORD *)(a1 + 88 * dword_106C5708 + 4) & 0xFFF;
    v11 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    sub_1002F900(v11, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1000, 0, 0, 0, 1000);
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -419430400;
    v8[1] = 0;
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -1174403582;
    v9[1] = dword_106C0688;
  }
}
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C5708: using guessed type int dword_106C5708;
