//----- (10047A10) --------------------------------------------------------
int __thiscall sub_10047A10(__int16 *this)
{
  int v2; // eax
  int v3; // esi

  if ( *((_DWORD *)this + 2651) )
  {
    v2 = this[148];
    v3 = *((_DWORD *)this + 30852);
    this[61702] = this[v2 + 5408];
    (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 24))(this, 16 * v2 + v3);
  }
  else
  {
    (*(void (__thiscall **)(__int16 *))(*(_DWORD *)this + 28))(this);
  }
  return 1;
}
