//----- (1000C4A0) --------------------------------------------------------
int sub_1000C4A0()
{
  int result; // eax
  int v1; // edx

  result = 0;
  if ( dword_10A9D008 && *(_DWORD *)dword_10A9D008 )
  {
    v1 = *(_DWORD *)(dword_10A9D008 + 8);
    if ( v1 )
    {
      result = (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)dword_10A9D008 + 36))(*(_DWORD *)dword_10A9D008, v1);
      *(_DWORD *)(dword_10A9D008 + 8) = 0;
    }
  }
  return result;
}
