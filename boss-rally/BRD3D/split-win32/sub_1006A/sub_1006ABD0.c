#include "types-win32.h"
//----- (1006ABD0) --------------------------------------------------------
int __cdecl sub_1006ABD0(int a1, int a2) {
  char *v2;    // ebx
  int result;  // eax
  double v4;   // st6
  double v5;   // st7
  char v6[16]; // [esp+Ch] [ebp-A0h] BYREF
  float v7;    // [esp+1Ch] [ebp-90h]
  float v8;    // [esp+20h] [ebp-8Ch]
  float v9;    // [esp+24h] [ebp-88h]
  int v10;     // [esp+84h] [ebp-28h]

  v2 = (char *)&dword_10B50308 + 1572864 * a2 + 24 * dword_11750310[a2];
  math_10007730((int)v6, (int)v2);
  v10 = *(_DWORD *)(a1 + 4084);
  sub_10060A10(a1, (int)v6);
  if (dword_106909E0 == 2) {
    *(_BYTE *)(a1 + 866) = 0;
    *(_BYTE *)(a1 + 867) = 0;
    *(_BYTE *)(a1 + 876) = 0;
    *(_BYTE *)(a1 + 870) = 0;
    *(_BYTE *)(a1 + 871) = 0;
    *(_BYTE *)(a1 + 872) = 0;
    *(_BYTE *)(a1 + 873) = 0;
    *(_BYTE *)(a1 + 874) = 0;
    *(_BYTE *)(a1 + 875) = 0;
  }
  result = dword_11750310[a2];
  if (result < dword_10B502E8[a2] - 2) {
    result = math_10007730((int)v6, (int)(v2 + 24));
    v4 = (v8 - *(float *)(a1 + 480)) * 30.0;
    v5 = (v9 - *(float *)(a1 + 484)) * 30.0;
    *(float *)(a1 + 488) = (v7 - *(float *)(a1 + 476)) * 30.0;
    *(float *)(a1 + 492) = v4;
    *(float *)(a1 + 496) = v5;
  }
  return result;
}
// 106909E0: using guessed type int dword_106909E0;
// 10B502E8: using guessed type int dword_10B502E8[];
// 11750310: using guessed type int dword_11750310[];
