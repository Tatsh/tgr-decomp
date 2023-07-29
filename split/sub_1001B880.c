//----- (1001B880) --------------------------------------------------------
unk0 *__thiscall sub_1001B880(unk0 *this, int width, int height, int bitDepth, int a5, int a6, _DWORD *a7, int a8)
{
  unk0 *u0; // esi
  unk0 *v10; // edi

  if ( !a6 )
  {
    if ( a7 )
    {
      *a7 = 0;
      return 0;
    }
    return 0;
  }
  u0 = (unk0 *)a8;
  if ( !a8 )
    u0 = (unk0 *)this[6].field_41;
  if ( a7 && sub_1001ACF0(u0, (IID **)a6) )
    *a7 = u0;
  if ( u0 )
  {
    while ( 1 )
    {
      v10 = (unk0 *)u0->field_8;
      if ( sub_1001AD50(u0, width, height, bitDepth) )
      {
        if ( sub_1001ACF0(u0, (IID **)a6) )
          return u0;
      }
      else
      {
        if ( sub_1001AD50(u0, 640, 480, 16) )
        {
          if ( !a7 || !sub_1001ACF0(u0, (IID **)a6) )
            goto LABEL_20;
        }
        else if ( !sub_1001ACF0(u0, (IID **)a6) || !a7 )
        {
          goto LABEL_20;
        }
        *a7 = u0;
      }
LABEL_20:
      u0 = v10;
      if ( !v10 )
        return 0;
    }
  }
  return 0;
}
