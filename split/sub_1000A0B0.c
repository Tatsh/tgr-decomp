//----- (1000A0B0) --------------------------------------------------------
int __thiscall sub_1000A0B0(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  if ( *this )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this);
  v2 = this[1];
  *this = 0;
  if ( v2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  result = this[2];
  this[1] = 0;
  if ( result )
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
  this[2] = 0;
  this[3] = 0;
  return result;
}
