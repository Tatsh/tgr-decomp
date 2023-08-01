//----- (100602B0) --------------------------------------------------------
int __thiscall sub_100602B0(_DWORD *this)
{
  int result; // eax

  result = this[20];
  if ( result )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)result + 32))(result);
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this[20] + 8))(this[20]);
    this[20] = 0;
  }
  return result;
}
