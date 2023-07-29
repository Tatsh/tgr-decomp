//----- (1000B1F0) --------------------------------------------------------
int __thiscall sub_1000B1F0(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = this[18];
  if ( !v1
    || (result = (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 24))(
                   v1,
                   0,
                   0,
                   this[19],
                   this[21]),
        result >= 0) )
  {
    result = 0;
  }
  return result;
}
