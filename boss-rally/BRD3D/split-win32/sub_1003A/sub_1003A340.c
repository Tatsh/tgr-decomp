#include "../../types-win32.h"
//----- (1003A340) --------------------------------------------------------
int sub_1003A340()
{
  double v0; // st7
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebp
  __int16 *v5; // ebx
  double v6; // st5
  double v7; // st6
  int *v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]

  v0 = *(float *)&dword_106C2CFC * 0.69999999;
  result = 0;
  v9 = 0;
  do
  {
    if ( result )
    {
      LOWORD(v2) = dword_10A99BAC;
      v8 = &dword_10A99BAC;
    }
    else
    {
      LOWORD(v2) = dword_10A99BB4;
      v8 = &dword_10A99BB4;
    }
    v2 = (unsigned __int16)v2;
    if ( (_WORD)v2 )
    {
      do
      {
        v3 = 8 * v2;
        v4 = (unsigned __int16)word_10A99BD4[16 * v2];
        v5 = &word_10A99BD4[16 * v2];
        flt_10A99BD0[v3] = v0 + flt_10A99BD0[8 * v2];
        v6 = *(float *)&dword_106C2CFC * 19.620001;
        v7 = (double)((unsigned __int8)byte_10A99BD6[32 * v2] * (unsigned __int8)byte_10A99BD7[32 * v2])
           * 0.000015318628;
        flt_10A99BB8[v3] = flt_10A99BC4[8 * v2] * v7 * *(float *)&dword_106C2CFC + flt_104B2560 + flt_10A99BB8[8 * v2];
        flt_10A99BBC[v3] = flt_10A99BC8[8 * v2] * v7 * *(float *)&dword_106C2CFC + flt_104B2564 + flt_10A99BBC[8 * v2];
        flt_10A99BC0[v3] = (v7 * flt_10A99BCC[8 * v2] - -0.80000001) * *(float *)&dword_106C2CFC
                         + *(float *)&dword_104B2568
                         + flt_10A99BC0[8 * v2];
        flt_10A99BCC[v3] = flt_10A99BCC[8 * v2] - v6;
        byte_10A99BD6[32 * v2] = (__int64)(102.0 / flt_10A99BD0[8 * v2]);
        if ( v7 < 0.03125 || flt_10A99BCC[8 * v2] < -30.0 )
        {
          *(_WORD *)v8 = *v5;
          *v5 = dword_10A99BA8;
          LOWORD(dword_10A99BA8) = v2;
        }
        else
        {
          v8 = (int *)&word_10A99BD4[16 * v2];
        }
        v2 = v4;
      }
      while ( v4 );
      result = v9;
    }
    v9 = ++result;
  }
  while ( result < 2 );
  return result;
}
// 104B2560: using guessed type float flt_104B2560;
// 104B2564: using guessed type float flt_104B2564;
// 104B2568: using guessed type int dword_104B2568;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10A99BA8: using guessed type int dword_10A99BA8;
// 10A99BAC: using guessed type int dword_10A99BAC;
// 10A99BB4: using guessed type int dword_10A99BB4;
// 10A99BB8: using guessed type float flt_10A99BB8[];
// 10A99BBC: using guessed type float flt_10A99BBC[];
// 10A99BC0: using guessed type float flt_10A99BC0[];
// 10A99BC4: using guessed type float flt_10A99BC4[];
// 10A99BC8: using guessed type float flt_10A99BC8[];
// 10A99BCC: using guessed type float flt_10A99BCC[];
// 10A99BD0: using guessed type float flt_10A99BD0[];
// 10A99BD4: using guessed type __int16 word_10A99BD4[];
