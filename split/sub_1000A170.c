//----- (1000A170) --------------------------------------------------------
int __thiscall sub_1000A170(_DWORD *this)
{
  int result; // eax

  result = this[21];
  if ( result )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
    this[21] = 0;
  }
  return result;
}
