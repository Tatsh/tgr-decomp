#include "types-win32.h"
//----- (100194E0) --------------------------------------------------------
int __thiscall meth_100194E0(void *this) {
  double v2;  // st7
  char v3;    // c0
  double v4;  // st7
  double v5;  // st7
  int result; // eax

  *(float *)&dword_104BBE0C = ((double)(unsigned __int16)sub_1003BD50() * 0.000030518044 - 1.0) *
                                  *(float *)&dword_106C2CFC +
                              *(float *)&dword_104BBE0C;
  v2 = *(float *)&dword_104BBE0C;
  if (v3) {
    if (v2 >= 0.0)
      goto LABEL_6;
    v4 = *(float *)&dword_104BBE0C - -6.2831855;
  } else {
    v4 = v2 - 6.2831855;
  }
  *(float *)&dword_104BBE0C = v4;
LABEL_6:
  v5 = ((double)(unsigned __int16)sub_1003BD50() * 0.000030518044 - 1.0) *
           *(float *)&dword_106C2CFC +
       flt_100A79C8;
  flt_100A79C8 = v5;
  if (v5 <= 1.0) {
    if (flt_100A79C8 < 0.5)
      flt_100A79C8 = 0.5;
  } else {
    flt_100A79C8 = 1.0;
  }
  result = dword_104BBE0C;
  dword_104B2568 = 0;
  flt_104B2560 = cos(*(float *)&dword_104BBE0C) * flt_100A79C8 * *(float *)&dword_106C2CFC;
  flt_104B2564 = sin(*(float *)&dword_104BBE0C) * flt_100A79C8 * *(float *)&dword_106C2CFC;
  return result;
}
// 10019522: variable 'v3' is possibly undefined
// 100A79C8: using guessed type float flt_100A79C8;
// 104B2560: using guessed type float flt_104B2560;
// 104B2564: using guessed type float flt_104B2564;
// 104B2568: using guessed type int dword_104B2568;
// 104BBE0C: using guessed type int dword_104BBE0C;
// 106C2CFC: using guessed type int dword_106C2CFC;
