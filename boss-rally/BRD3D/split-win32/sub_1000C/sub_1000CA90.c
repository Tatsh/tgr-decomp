#include "types-win32.h"
//----- (1000CA90) --------------------------------------------------------
int __cdecl sub_1000CA90(int a1) {
  int result;  // eax
  float *v2;   // edi
  int v3;      // eax
  float v4[3]; // [esp+8h] [ebp-Ch] BYREF

  result = *(_DWORD *)(a1 + 3848);
  if (result) {
    v2 = (float *)(a1 + 48);
    sub_1003B0E0((float *)(a1 + 48), (float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 48));
    dword_10277E60[*(_DWORD *)(a1 + 320)] = 0;
    dword_10277B68[*(_DWORD *)(a1 + 320)] = 0;
    *(float *)(a1 + 10032) = sub_10031D3F((float *)(a1 + 48));
    if (a1 == dword_106C2CF8)
      goto LABEL_10;
    if (*(_DWORD *)&gUnk06594.gap1C8[12500] || *(_DWORD *)&gUnk06594.gap1C8[12508]) {
      sub_1003AFE0((int)v4, a1 + 48, a1, 6.0);
      if (!sub_1003A950(v4[0], v4[1])) {
        result = sub_1003A950(*v2, *(float *)(a1 + 52));
        if (!result)
          return result;
      }
    } else {
      result = sub_1003A950(*v2, *(float *)(a1 + 52));
      if (!result)
        return result;
    }
    if (a1 == dword_106C2CF8) {
    LABEL_10:
      v3 = *(_DWORD *)(a1 + 10036);
      if ((v3 == a1 + 10044 || v3 == a1 + 10384) && !*(_DWORD *)&gUnk06594.gap1C8[12492]) {
        result = *(_DWORD *)(a1 + 320);
        dword_10277B68[result] = 1;
        return result;
      }
    }
    result = 1;
    if (*(_BYTE *)(a1 + 10671) != 2)
      dword_10277E60[*(_DWORD *)(a1 + 320)] = 1;
    dword_10277B68[*(_DWORD *)(a1 + 320)] = 1;
  }
  return result;
}
// 106C2CF8: using guessed type int dword_106C2CF8;
