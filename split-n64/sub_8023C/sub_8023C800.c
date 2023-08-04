#include "../../types-n64.h"
//----- (8023C800) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8023C800(int a1)
{
  float v1; // $f0
  int v2; // $s3
  int v3; // $s6
  int v4; // [sp+90h] [-50h]

  if ( *(_BYTE *)(a1 + 844) )
  {
    v1 = *(float *)(a1 + 4068);
    v2 = 0;
    v3 = a1;
    if ( v1 > 40.0 )
    {
      v4 = 0;
      do
      {
        *(float *)(v3 + 4128) = *(float *)(v3 + 4128)
                              + (float)((float)((float)(0.0 * 0.5) + (float)(v1 * 0.00066006603))
                                      * (float)((float)*(unsigned __int8 *)(a1 + 844) * 0.029999999));
        if ( *(float *)(v3 + 4128) > 0.75 )
          *(float *)(v3 + 4128) = 0.0;
        ++v2;
        v4 += 4;
        v3 += 4;
      }
      while ( v2 != 4 );
    }
  }
}
// 8023C984: write access to const memory at 8028C830 has been detected
// 8023C9DC: write access to const memory at 8028C838 has been detected
// 8023C9C0: write access to const memory at 8028C83C has been detected
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028C830: using guessed type __int16 word_8028C830;
// 8028C838: using guessed type __int16 word_8028C838;
// 8028C83C: using guessed type __int16 word_8028C83C;
