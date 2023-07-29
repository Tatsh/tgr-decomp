//----- (1001ACF0) --------------------------------------------------------
BOOL __thiscall sub_1001ACF0(unk0 *this, IID *iid[3])
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // eax

  if ( !iid )
    return 0;
  v3 = sub_1001AC60(this);
  v4 = sub_1001A8C0(v3);
  if ( sub_1001AD90(iid) )
    v5 = v4 & (unsigned int)iid[46];
  else
    v5 = v4 & (unsigned int)iid[109];
  return v5 != 0;
}
