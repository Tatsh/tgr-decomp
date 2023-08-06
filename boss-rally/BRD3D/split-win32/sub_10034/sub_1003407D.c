#include "../../types-win32.h"
//----- (1003407D) --------------------------------------------------------
int __cdecl sub_1003407D(float a1, float a2)
{
  int result; // eax
  _DWORD *v3; // [esp+0h] [ebp-8h]
  _DWORD *v4; // [esp+4h] [ebp-4h]

  flt_106C29A8 = 2.0 / a1;
  flt_106C29AC = 0.0;
  flt_106C29B0 = 0.0;
  flt_106C29B4 = 0.0;
  flt_106C29B8 = 0.0;
  flt_106C29BC = 2.0 / a2;
  flt_106C29C0 = 0.0;
  flt_106C29C4 = 0.0;
  flt_106C29C8 = 0.0;
  flt_106C29CC = 0.0;
  flt_106C29D0 = 0.0;
  flt_106C29D4 = 0.0;
  flt_106C29D8 = -1.0;
  flt_106C29DC = -1.0;
  flt_106C29E0 = 0.0;
  flt_106C29E4 = 1.0;
  v4 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v4 = -1140850674;
  v4[1] = (unsigned __int16)word_106C067C;
  dword_106C32D0 = (int)sub_10069490();
  sub_100307A0((int)&flt_106C29A8, (_DWORD *)dword_106C32D0);
  v3 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v3 = 16973888;
  result = dword_106C32D0;
  v3[1] = dword_106C32D0;
  return result;
}
// 106C067C: using guessed type __int16 word_106C067C;
// 106C0680: using guessed type int dword_106C0680;
// 106C29A8: using guessed type float flt_106C29A8;
// 106C29AC: using guessed type float flt_106C29AC;
// 106C29B0: using guessed type float flt_106C29B0;
// 106C29B4: using guessed type float flt_106C29B4;
// 106C29B8: using guessed type float flt_106C29B8;
// 106C29BC: using guessed type float flt_106C29BC;
// 106C29C0: using guessed type float flt_106C29C0;
// 106C29C4: using guessed type float flt_106C29C4;
// 106C29C8: using guessed type float flt_106C29C8;
// 106C29CC: using guessed type float flt_106C29CC;
// 106C29D0: using guessed type float flt_106C29D0;
// 106C29D4: using guessed type float flt_106C29D4;
// 106C29D8: using guessed type float flt_106C29D8;
// 106C29DC: using guessed type float flt_106C29DC;
// 106C29E0: using guessed type float flt_106C29E0;
// 106C29E4: using guessed type float flt_106C29E4;
// 106C32D0: using guessed type int dword_106C32D0;
