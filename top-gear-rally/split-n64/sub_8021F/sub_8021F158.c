#include "../../types-n64.h"
//----- (8021F158) --------------------------------------------------------
void __fastcall sub_8021F158(int a1)
{
  float v1; // $f0
  float v2; // $f0

  v1 = *(float *)(a1 + 4020);
  if ( 0.0 == v1 )
  {
    v2 = *(float *)(a1 + 4028);
    if ( 0.0 != v2 )
    {
      *(float *)(a1 + 4028) = v2 - 0.0;
      if ( *(float *)(a1 + 4028) <= 0.0 )
      {
        *(float *)(a1 + 4028) = 0.0;
        *(_DWORD *)(a1 + 4024) = 0;
      }
    }
  }
  else
  {
    *(float *)(a1 + 4020) = v1 - 0.0;
    if ( *(float *)(a1 + 4020) <= 0.0 )
    {
      *(float *)(a1 + 4020) = 0.0;
      *(_DWORD *)(a1 + 4016) = 0;
    }
  }
}
// 8028AAD8: using guessed type float flt_8028AAD8;
