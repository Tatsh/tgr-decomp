//----- (10078ED0) --------------------------------------------------------
int sub_10078ED0()
{
  int result; // eax

  result = g_ReadJoystick;
  if ( g_ReadJoystick == 1 || g_ReadJoystick == 2 )
  {
    result = dword_10B4E1E0;
    if ( dword_10B4E1E0 )
    {
      result = dword_118ABDBC;
      if ( dword_118ABDBC )
      {
        result = dword_106909E0;
        if ( !dword_106909E0 )
        {
          dword_118ABD90 = dword_100BD438;
          result = dword_118ABDFC;
          if ( dword_118ABDFC )
            result = (*(int (__stdcall **)(int, int *, int))(*(_DWORD *)dword_118ABDFC + 24))(
                       dword_118ABDFC,
                       &dword_118ABD88,
                       536870977);
        }
      }
    }
  }
  return result;
}
// 100BD438: using guessed type int dword_100BD438;
// 106909E0: using guessed type int dword_106909E0;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 118ABD88: using guessed type int dword_118ABD88;
// 118ABD90: using guessed type int dword_118ABD90;
// 118ABDBC: using guessed type int dword_118ABDBC;
// 118ABDFC: using guessed type int dword_118ABDFC;
