//----- (1000B220) --------------------------------------------------------
int __thiscall sub_1000B220(int this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // eax

  if ( a2 )
  {
    v3 = *(_DWORD *)(this + 36) + 1;
    *(_DWORD *)(this + 36) = v3;
    if ( v3 == 1 )
    {
      result = sub_1000B170((#465 *)this);
      if ( result < 0 )
        return result;
    }
    return 0;
  }
  v5 = *(_DWORD *)(this + 36);
  if ( !v5 )
    return -2005522671;
  if ( v5 != 1 || (result = sub_1000B1F0((_DWORD *)this), result >= 0) )
  {
    --*(_DWORD *)(this + 36);
    return 0;
  }
  return result;
}
