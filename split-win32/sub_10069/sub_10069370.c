#include "../../types-win32.h"
//----- (10069370) --------------------------------------------------------
int __thiscall sub_10069370(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  float v6; // [esp+0h] [ebp-8h]

  result = dword_106909B4;
  if ( !dword_106909B4 )
  {
    result = this[24];
    if ( result )
    {
      if ( *(_BYTE *)(result + 864) )
      {
        if ( (int)(__int64)(sub_1003B7B0(*(float *)(result + 848), *(float *)(result + 852)) * 57.295776) > 180 )
          v3 = sub_10078E10(1);
        else
          v3 = sub_10078E10(-1);
        v4 = this[24];
        LOBYTE(v3) = *(_BYTE *)(v4 + 864);
        if ( (unsigned __int8)v3 >= 0xAu )
        {
          LOWORD(v3) = (unsigned __int8)v3;
          sub_1000EF80(v4, v4 + 848, (float *)(v4 + 848), v3);
        }
        *(_BYTE *)(this[24] + 864) = 0;
      }
      sub_10075780(this[24]);
      sub_10075810(this[24]);
      sub_100758A0((_DWORD *)this[24]);
      sub_10066E90(this);
      sub_10075960(this[24]);
      sub_1003AEE0((float *)(this[24] + 4132), (float *)(this[24] + 48), (float *)(this[24] + 3968));
      v6 = 1.0 / *(float *)&dword_106C2CFC;
      sub_1003AD10(this[24] + 4132, v6);
      *(float *)(this[24] + 10008) = sub_1003B7B0(
                                       **(float **)(this[24] + 10036),
                                       *(float *)(*(_DWORD *)(this[24] + 10036) + 4));
      v5 = this[24];
      result = *(_DWORD *)(v5 + 3844);
      if ( result )
        *(_DWORD *)(v5 + 3844) = --result;
    }
  }
  return result;
}
// 106909B4: using guessed type int dword_106909B4;
// 106C2CFC: using guessed type int dword_106C2CFC;
