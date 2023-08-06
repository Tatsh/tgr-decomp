#include "../../types-win32.h"
//----- (100147B0) --------------------------------------------------------
_DWORD *sub_100147B0()
{
  _DWORD *result; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  int v3[4]; // [esp+0h] [ebp-40h] BYREF
  int v4[4]; // [esp+10h] [ebp-30h] BYREF
  int v5[4]; // [esp+20h] [ebp-20h] BYREF
  int v6[4]; // [esp+30h] [ebp-10h] BYREF

  result = (_DWORD *)dword_106909D0;
  if ( dword_106909D0 )
  {
    result = (_DWORD *)dword_106C7CB8;
    if ( dword_106C7CB8 )
    {
      v3[3] = 0;
      v4[3] = 0;
      v5[3] = 0;
      v6[3] = 1065353216;
      v5[0] = 0;
      v5[1] = 0;
      v5[2] = 1065353216;
      sub_1003ADA0((float *)v4, (float *)(dword_106C7CB8 + 76), (float *)(dword_106C7CB8 + 88));
      sub_1003AC30((float *)v3, (float *)v4, (float *)v5);
      sub_1003AC30((float *)v4, (float *)v5, (float *)v3);
      v6[0] = *(_DWORD *)(dword_106C7CB8 + 76);
      v6[1] = *(_DWORD *)(dword_106C7CB8 + 80);
      *(float *)&v6[2] = *(float *)(dword_106C7CB8 + 84) + *(float *)&dword_106805BC - -2.0;
      sub_1003AFE0((int)v6, (int)v6, (int)v3, -0.30000001);
      sub_1003AFE0((int)v6, (int)v6, (int)v4, -0.60000002);
      v1 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v1 = 17170496;
      v1[1] = &unk_100AA730;
      v2 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v2 = 16973888;
      v2[1] = dword_106C32D0;
      sub_100310F0((int)&flt_106C0860, 0.0009765625, 981467136, 981467136);
      sub_100306C0(&flt_106C0860, (float *)v3, (float *)v3);
      result = sub_1002FB20(C, (int)v3);
    }
  }
  return result;
}
// 106805BC: using guessed type int dword_106805BC;
// 106909D0: using guessed type int dword_106909D0;
// 106C0680: using guessed type int dword_106C0680;
// 106C0860: using guessed type float flt_106C0860;
// 106C32D0: using guessed type int dword_106C32D0;
