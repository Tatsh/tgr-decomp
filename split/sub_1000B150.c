//----- (1000B150) --------------------------------------------------------
int __thiscall sub_1000B150(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx
  int result; // eax

  v1 = this[17];
  if ( !v1
    || (v2 = this[18]) == 0
    || (result = (*(int (__stdcall **)(int, int))(*(_DWORD *)v1 + 124))(v1, v2), result >= 0) )
  {
    result = 0;
  }
  return result;
}
