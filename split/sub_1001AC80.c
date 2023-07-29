//----- (1001AC80) --------------------------------------------------------
int __thiscall sub_1001AC80(unk0 *this, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax

  if ( this->field_46 != 108 )
    return -2147467259;
  v6 = this->field_45;
  if ( (v6 & 4) == 0 )
    return -2147467259;
  if ( (v6 & 2) == 0 )
    return -2147467259;
  if ( (v6 & 0x1000) == 0 )
    return -2147467259;
  if ( this->field_27 != 32 )
    return -2147467259;
  *a2 = this->width0;
  *a3 = this->height0;
  *a4 = this->bitDepth0;
  *a5 = 0;
  return 0;
}
