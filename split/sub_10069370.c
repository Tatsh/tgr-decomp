//----- (10069370) --------------------------------------------------------
int __thiscall sub_10069370(int this)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  float v6; // [esp+0h] [ebp-8h]

  result = dword_106909B4;
  if ( !dword_106909B4 )
  {
    result = *(_DWORD *)(this + 96);
    if ( result )
    {
      if ( *(_BYTE *)(result + 864) )
      {
        if ( (int)(__int64)(sub_1003B7B0(*(float *)(result + 848), *(float *)(result + 852)) * 57.295776) > 180 )
          v3 = sub_10078E10(1);
        else
          v3 = sub_10078E10(-1);
        v4 = *(_DWORD *)(this + 96);
        LOBYTE(v3) = *(_BYTE *)(v4 + 864);
        if ( (unsigned __int8)v3 >= 0xAu )
        {
          LOWORD(v3) = (unsigned __int8)v3;
          sub_1000EF80(v4, v4 + 848, (float *)(v4 + 848), v3);
        }
        *(_BYTE *)(*(_DWORD *)(this + 96) + 864) = 0;
      }
      sub_10075780(*(_DWORD *)(this + 96));
      sub_10075810(*(_DWORD *)(this + 96));
      sub_100758A0(*(_DWORD **)(this + 96));
      sub_10066E90((char *)this);
      sub_10075960(*(_DWORD *)(this + 96));
      sub_1003AEE0(
        (float *)(*(_DWORD *)(this + 96) + 4132),
        (float *)(*(_DWORD *)(this + 96) + 48),
        (float *)(*(_DWORD *)(this + 96) + 3968));
      v6 = 1.0 / *(float *)&dword_106C2CFC;
      sub_1003AD10(*(_DWORD *)(this + 96) + 4132, v6);
      *(float *)(*(_DWORD *)(this + 96) + 10008) = sub_1003B7B0(
                                                     **(float **)(*(_DWORD *)(this + 96) + 10036),
                                                     *(float *)(*(_DWORD *)(*(_DWORD *)(this + 96) + 10036) + 4));
      v5 = *(_DWORD *)(this + 96);
      result = *(_DWORD *)(v5 + 3844);
      if ( result )
        *(_DWORD *)(v5 + 3844) = --result;
    }
  }
  return result;
}
// 106909B4: using guessed type int dword_106909B4;
// 106C2CFC: using guessed type int dword_106C2CFC;
