//----- (10069DE0) --------------------------------------------------------
_DWORD *__thiscall sub_10069DE0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  result = this;
  v3 = this + 42;
  qmemcpy(this, a2, 0xA8u);
  v4 = this + 84;
  qmemcpy(this + 42, a2 + 42, 0xA8u);
  qmemcpy(this + 84, a2 + 84, 0xA8u);
  qmemcpy(this + 126, a2 + 126, 0xA8u);
  v5 = a2[168];
  result[168] = v5;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        result[169] = result + 126;
      else
        result[169] = result;
    }
    else
    {
      result[169] = v4;
    }
  }
  else
  {
    result[169] = v3;
  }
  result[170] = a2[170];
  result[171] = a2[171];
  result[172] = a2[172];
  qmemcpy(result + 173, a2 + 173, 0x104u);
  qmemcpy(result + 238, a2 + 238, 0x458u);
  qmemcpy(result + 516, a2 + 516, 0x20u);
  qmemcpy(result + 524, a2 + 524, 0x44u);
  return result;
}
