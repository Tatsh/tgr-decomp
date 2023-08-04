#include "../../types-n64.h"
//----- (80228E4C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80228E4C(int i, float a2)
{
  float *v4; // $s0
  int v5; // $s3
  float v6; // $f0
  int v7; // $v0
  int v8; // $s1
  float *v9; // $a2
  int v10; // $v0
  int v11; // $s0

  dword_8028B82C = 0;
  dword_8028B830 = 0;
  while ( 1 )
  {
    if ( i && (*(_WORD *)(i + 22) & 1) != 0 )
    {
      for ( i = *(_DWORD *)(i + 4); i && (*(_WORD *)(i + 22) & 1) != 0; i = *(_DWORD *)(i + 4) )
        ;
    }
    v4 = (float *)i;
    if ( !i )
      break;
    v5 = 0;
    if ( *(_WORD *)(i + 20) )
    {
      while ( 1 )
      {
        v6 = v4[25] - v4[35];
        if ( v6 >= a2 )
          break;
        a2 = a2 - v6;
        if ( MEMORY[0x80025D60] )
        {
          v7 = 20 * (1 % MEMORY[0x80025D60]) - 2147329024;
          v8 = v7 + 152;
          if ( sub_80225B64((float *)(v7 + 160), (float *)(v7 + 152), v4 + 19, v4 + 29) )
          {
            dword_8028B82C = 1;
            if ( v8 == -2147328872 )
              dword_8028B830 = 1;
          }
        }
        ++v5;
        v4 += 10;
        if ( v5 >= *(unsigned __int16 *)(i + 20) )
          goto LABEL_25;
      }
      sub_802248FC(&flt_8031B750, v4 + 29, v4 + 19, a2 / v6);
      if ( MEMORY[0x80025D60] )
      {
        v9 = v4 + 19;
        if ( !MEMORY[0x80025D60] )
          __break(7u, 0);
        v10 = 20 * (1 % MEMORY[0x80025D60]) - 2147329024;
        v11 = v10 + 152;
        if ( sub_80225B64((float *)(v10 + 160), (float *)(v10 + 152), v9, &flt_8031B750) )
        {
          dword_8028B82C = 1;
          if ( v11 == -2147328872 )
            dword_8028B830 = 1;
        }
      }
      dword_8028B824 = i;
      dword_8028B828 = v5;
      return;
    }
LABEL_25:
    i = *(_DWORD *)i;
  }
}
// 80229064: write access to const memory at 8028B824 has been detected
// 80229074: write access to const memory at 8028B828 has been detected
// 80228E9C: write access to const memory at 8028B82C has been detected
// 80228EA0: write access to const memory at 8028B830 has been detected
// 80229060: write access to const memory at 8028B830 has been detected
// 80229054: write access to const memory at 8028B82C has been detected
// 80228FA0: write access to const memory at 8028B830 has been detected
// 80228F94: write access to const memory at 8028B82C has been detected
// 80228F58: conditional instruction was optimized away because of '$t3.4==1'
// 8028B824: using guessed type int dword_8028B824;
// 8028B828: using guessed type int dword_8028B828;
// 8028B82C: using guessed type int dword_8028B82C;
// 8028B830: using guessed type int dword_8028B830;
// 8031B750: using guessed type float flt_8031B750;
