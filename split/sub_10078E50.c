//----- (10078E50) --------------------------------------------------------
int sub_10078E50()
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
          dword_100BD438 = 250000;
      }
    }
  }
  return result;
}
// 100BD438: using guessed type int dword_100BD438;
// 106909E0: using guessed type int dword_106909E0;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 118ABDBC: using guessed type int dword_118ABDBC;
