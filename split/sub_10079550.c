//----- (10079550) --------------------------------------------------------
int sub_10079550()
{
  int result; // eax

  result = --dword_118ABE00;
  if ( dword_118ABE00 >= 0 )
  {
    result = dword_118ABE00;
    if ( !dword_118ABE00 )
    {
      if ( dword_118ABDFC )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)dword_118ABDFC + 8))(dword_118ABDFC);
        dword_118ABDFC = 0;
      }
      if ( dword_118ABDEC )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)dword_118ABDEC + 8))(dword_118ABDEC);
        dword_118ABDEC = 0;
      }
      result = (int)g_DirectInputDevice2A;
      if ( g_DirectInputDevice2A )
      {
        g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
        result = g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
        g_DirectInputDevice2A = 0;
      }
    }
  }
  else
  {
    dword_118ABE00 = 0;
  }
  return result;
}
// 118ABDEC: using guessed type int dword_118ABDEC;
// 118ABDFC: using guessed type int dword_118ABDFC;
// 118ABE00: using guessed type int dword_118ABE00;
