#include "types-win32.h"
//----- (10034812) --------------------------------------------------------
HANDLE __thiscall meth_CreateMutexWrapper(void *this) {
  void *v1;      // ecx
  void *v2;      // ecx
  void *v3;      // ecx
  void *v4;      // ecx
  void *v5;      // ecx
  void *v6;      // ecx
  void *v7;      // ecx
  void *v8;      // ecx
  void *v9;      // ecx
  unk06594 *v10; // ecx
  void *v11;     // ecx
  void *v12;     // ecx
  HANDLE result; // eax
  int v14;       // [esp+0h] [ebp-28h]
  char v15[28];  // [esp+4h] [ebp-24h] BYREF
  int i;         // [esp+20h] [ebp-8h]

  dword_106C0944 = (int)&stru_10691000.gapC[12];
  meth_DebugPrint(this);
  meth_DebugPrint(v1);
  meth_DebugPrint(v2);
  meth_DebugPrint(v3);
  meth_DebugPrint(dword_106C06A8);
  meth_DebugPrint(v4);
  meth_DebugPrint(v5);
  meth_DebugPrint(v6);
  meth_DebugPrint(v7);
  meth_DebugPrint(dword_10B02434);
  meth_DebugPrint(v8);
  *(_DWORD *)&gUnk06594.gap1C8[8600] = 1194793728;
  meth_DebugPrint(v9);
  meth_DebugPrint(v15);
  meth_unk1A5E0_3(v10);
  meth_DebugPrint(v11);
  meth_DebugPrint(v12);
  for (i = 0; i < 4; ++i) {
    byte_106C06A0[i] = 0;
    if ((((int)(unsigned __int8)v15[24] >> i) & 1) != 0 && (byte_106C092B[4 * i] & 8) == 0 &&
        (word_106C0928[2 * i] & 4) != 0 && (byte_106C092A[4 * i] & 1) != 0) {
      v14 = ReturnZero();
      if (v14) {
        if (v14 > 9 && v14 <= 11 && !ReturnZero()) {
          byte_106C06A0[i] = 1;
          ReturnZero();
        }
      }
    }
  }
  result = CreateMutexA(0, 0, 0);
  *(_DWORD *)&gUnk06594.gap1C8[12552] = result;
  return result;
}
// 10034842: variable 'v1' is possibly undefined
// 10034857: variable 'v2' is possibly undefined
// 1003486B: variable 'v3' is possibly undefined
// 10034895: variable 'v4' is possibly undefined
// 100348AB: variable 'v5' is possibly undefined
// 100348CC: variable 'v6' is possibly undefined
// 100348D9: variable 'v7' is possibly undefined
// 10034908: variable 'v8' is possibly undefined
// 10034924: variable 'v9' is possibly undefined
// 10034949: variable 'v10' is possibly undefined
// 1003495D: variable 'v11' is possibly undefined
// 1003496E: variable 'v12' is possibly undefined
// 106C0928: using guessed type __int16 word_106C0928[];
// 106C0944: using guessed type int dword_106C0944;
