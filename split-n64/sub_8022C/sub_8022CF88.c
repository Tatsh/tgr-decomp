#include "../../types-n64.h"
//----- (8022CF88) --------------------------------------------------------
void __fastcall sub_8022CF88(int a1)
{
  int v2; // $a3
  int v3; // $a0
  float v4; // $f0
  int v5; // $a3
  int v6; // $v0

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( *(_BYTE *)(v2 + 836) )
    {
      sub_80233880(v3, (float *)(v2 + 820), *(unsigned __int8 *)(v2 + 836));
      *(_BYTE *)(*(_DWORD *)(a1 + 96) + 836) = 0;
      v2 = *(_DWORD *)(a1 + 96);
    }
    sub_8021F0A8(v2);
    sub_8021F158(*(_DWORD *)(a1 + 96));
    sub_8021F1F0(*(_DWORD *)(a1 + 96));
    sub_8022A0E0(a1);
    sub_8021F2D8(*(_DWORD *)(a1 + 96));
    sub_80224808(
      (float *)(*(_DWORD *)(a1 + 96) + 4056),
      (float *)(*(_DWORD *)(a1 + 96) + 48),
      (float *)(*(_DWORD *)(a1 + 96) + 3920));
    sub_80224528((float *)(*(_DWORD *)(a1 + 96) + 4056), 1.0 / 0.0);
    sub_8022576C(**(float **)(*(_DWORD *)(a1 + 96) + 7656), *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 7656) + 4));
    *(float *)(*(_DWORD *)(a1 + 96) + 7628) = v4;
    v5 = *(_DWORD *)(a1 + 96);
    v6 = *(_DWORD *)(v5 + 3796);
    if ( v6 )
      *(_DWORD *)(v5 + 3796) = v6 - 1;
  }
}
// 8022D058: variable 'v4' is possibly undefined
// 8028AAD8: using guessed type float flt_8028AAD8;
