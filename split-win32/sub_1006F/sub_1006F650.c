#include "../../types-win32.h"
//----- (1006F650) --------------------------------------------------------
void __cdecl sub_1006F650(int a1)
{
  float *v1; // edi
  int i; // ebx
  int v3; // eax
  double v4; // st7
  char v5[8]; // [esp+10h] [ebp-Ch] BYREF
  float v6; // [esp+18h] [ebp-4h]

  v1 = *(float **)(a1 + 24);
  for ( i = 0; i < 4; ++i )
  {
    v1[3] = 0.0;
    v1[2] = 0.0;
    if ( i )
    {
      if ( i == 1 )
      {
        sub_1006B340((int)v5, a1, *(_DWORD *)(a1 + 8));
        v3 = *(_DWORD *)(a1 + 8);
      }
      else if ( i == 2 )
      {
        sub_1006B340((int)v5, a1, *(_DWORD *)(a1 + 12));
        v3 = *(_DWORD *)(a1 + 12);
      }
      else
      {
        sub_1006B340((int)v5, a1, *(_DWORD *)(a1 + 16));
        v3 = *(_DWORD *)(a1 + 16);
      }
    }
    else
    {
      sub_1006B340((int)v5, a1, *(_DWORD *)(a1 + 4));
      v3 = *(_DWORD *)(a1 + 4);
    }
    if ( *(_DWORD *)(v3 + 436) )
    {
      if ( v6 >= 0.0 )
        v4 = *(float *)(a1 + 444) * v6;
      else
        v4 = 0.0;
    }
    else
    {
      v4 = 0.0;
    }
    v1[4] = v4;
    v1 = *(float **)v1;
  }
}
