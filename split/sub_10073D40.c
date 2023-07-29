//----- (10073D40) --------------------------------------------------------
BOOL __thiscall sub_10073D40(_DWORD *this)
{
  int v1; // eax

  v1 = this[1];
  if ( *this )
    ++v1;
  return v1 >= this[3];
}
