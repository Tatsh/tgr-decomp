#include "types-win32.h"
//----- (10031D3F) --------------------------------------------------------
double __cdecl sub_10031D3F(float *a1) {
  float v2;    // [esp+0h] [ebp-1Ch]
  float v3;    // [esp+4h] [ebp-18h]
  float v4;    // [esp+8h] [ebp-14h]
  float v5[2]; // [esp+Ch] [ebp-10h] BYREF
  float v6;    // [esp+14h] [ebp-8h]
  float v7;    // [esp+18h] [ebp-4h]

  if (!MEMORY[0x106C6618])
    return 0.0;
  sub_1003B2A0(v5, a1, &flt_106C29A8);
  v6 = v6 / v7;
  v3 = (float)dword_106C2CF4;
  v2 = (float)dword_106C1618;
  v4 = (v6 * v3 + v2) * 0.0039215689;
  if (v4 < 0.0)
    return 0.0;
  if (v4 <= 1.0)
    return v4;
  return 1.0;
}
// 106C1618: using guessed type int dword_106C1618;
// 106C29A8: using guessed type float flt_106C29A8;
// 106C2CF4: using guessed type int dword_106C2CF4;
// 106C6618: using guessed type int dword_106C6618;
