//----- (1001B490) --------------------------------------------------------
unk0 *__thiscall sub_1001B490(_DWORD *this, int a2, int a3, int a4, int a5, unk0 **a6, unk0 *a7)
{
  unk0 *v7; // esi
  unk0 *v8; // edi

  v7 = a7;
  if ( !a7 )
    v7 = (unk0 *)this[198];
  if ( a6 )
    *a6 = v7;
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    v8 = (unk0 *)v7->field_8;
    if ( sub_1001AD50(v7, a2, a3, a4) )
      break;
    if ( sub_1001AD50(v7, 640, 480, 8) )
    {
      if ( a6 )
        *a6 = v7;
    }
    v7 = v8;
    if ( !v8 )
      return 0;
  }
  return v7;
}
