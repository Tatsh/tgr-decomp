//----- (1001B7C0) --------------------------------------------------------
IID *__thiscall sub_1001B7C0[3](_DWORD *this, const void *a2, unk0 *a3, IID **__attribute__((__org_arrdim(0,3))) *a4, IID *iid[3])
{
  IID **__attribute__((__org_arrdim(0,3))) v6; // esi
  IID **v7; // ebx
  int v8; // eax

  if ( !a3 )
  {
    if ( a4 )
    {
      *a4 = 0;
      return 0;
    }
    return 0;
  }
  v6 = iid;
  if ( !iid )
    v6 = (IID **)this[201];
  if ( a4 && sub_1001ACF0(a3, v6) )
    *a4 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = (IID **)v6[137];
      LOBYTE(v8) = sub_1001ADA0(v6, a2);
      if ( v8 )
      {
        if ( sub_1001ACF0(a3, v6) )
          return v6;
      }
      else
      {
        if ( sub_1001AD90(v6) )
        {
          if ( !a4 || !sub_1001ACF0(a3, v6) )
            goto LABEL_20;
        }
        else if ( !sub_1001ACF0(a3, v6) || !a4 )
        {
          goto LABEL_20;
        }
        *a4 = v6;
      }
LABEL_20:
      v6 = v7;
      if ( !v7 )
        return 0;
    }
  }
  return 0;
}
// 1001B81F: variable 'v8' is possibly undefined
