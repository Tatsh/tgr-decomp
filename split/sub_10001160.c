//----- (10001160) --------------------------------------------------------
int __thiscall sub_10001160(int *this)
{
  int result; // eax
  int v2; // eax

  if ( !*this || (*(_BYTE *)(*this + 28) & 0x1F) != 31 )
    return -2005522669;
  v2 = *this;
  if ( *this
    && (*(_BYTE *)(v2 + 28) & 0x1F) == 31
    && *(_DWORD *)(v2 + 64)
    && *(_DWORD *)(v2 + 96)
    && *(_DWORD *)(v2 + 100) )
  {
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}
