//----- (1000B350) --------------------------------------------------------
int __thiscall sub_1000B350(_BYTE *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  if ( (this[28] & 0x1F) != 31 )
    return -2005522669;
  v3 = this + 120;
  *a2 = *v3;
  a2[1] = v3[1];
  a2[2] = v3[2];
  result = 0;
  a2[3] = v3[3];
  return result;
}
