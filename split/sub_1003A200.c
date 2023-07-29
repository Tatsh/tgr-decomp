//----- (1003A200) --------------------------------------------------------
void sub_1003A200()
{
  int v0; // ebp
  int v1; // esi
  int v2; // ebx
  __int16 *v3; // edi
  double v4; // st7
  __int16 *v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]

  v0 = (unsigned __int16)dword_10A99BB0;
  v5 = (__int16 *)&dword_10A99BB0;
  v6 = *(float *)&dword_106C2CFC * 0.30000001;
  if ( (_WORD)dword_10A99BB0 )
  {
    do
    {
      v1 = 8 * v0;
      v2 = (unsigned __int16)word_10A99BD4[16 * v0];
      v3 = &word_10A99BD4[16 * v0];
      flt_10A99BD0[v1] = v6 + flt_10A99BD0[8 * v0];
      v4 = (double)((unsigned __int8)byte_10A99BD6[32 * v0] * (unsigned __int8)byte_10A99BD7[32 * v0]) * 0.000015318628;
      flt_10A99BB8[v1] = flt_10A99BC4[8 * v0] * v4 * *(float *)&dword_106C2CFC + flt_104B2560 + flt_10A99BB8[8 * v0];
      flt_10A99BBC[v1] = flt_10A99BC8[8 * v0] * v4 * *(float *)&dword_106C2CFC + flt_104B2564 + flt_10A99BBC[8 * v0];
      flt_10A99BC0[v1] = (flt_10A99BCC[8 * v0] * v4 - -0.80000001) * *(float *)&dword_106C2CFC
                       + *(float *)&dword_104B2568
                       + flt_10A99BC0[8 * v0];
      byte_10A99BD6[32 * v0] = (__int64)(5.7375007 / (flt_10A99BD0[8 * v0] * flt_10A99BD0[8 * v0]));
      if ( v4 >= 0.03125 )
      {
        v5 = &word_10A99BD4[16 * v0];
      }
      else
      {
        *v5 = *v3;
        *v3 = dword_10A99BA8;
        LOWORD(dword_10A99BA8) = v0;
      }
      v0 = v2;
    }
    while ( v2 );
  }
}
// 104B2560: using guessed type float flt_104B2560;
// 104B2564: using guessed type float flt_104B2564;
// 104B2568: using guessed type int dword_104B2568;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10A99BA8: using guessed type int dword_10A99BA8;
// 10A99BB0: using guessed type int dword_10A99BB0;
// 10A99BB8: using guessed type float flt_10A99BB8[];
// 10A99BBC: using guessed type float flt_10A99BBC[];
// 10A99BC0: using guessed type float flt_10A99BC0[];
// 10A99BC4: using guessed type float flt_10A99BC4[];
// 10A99BC8: using guessed type float flt_10A99BC8[];
// 10A99BCC: using guessed type float flt_10A99BCC[];
// 10A99BD0: using guessed type float flt_10A99BD0[];
// 10A99BD4: using guessed type __int16 word_10A99BD4[];
