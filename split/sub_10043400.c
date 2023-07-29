//----- (10043400) --------------------------------------------------------
int sub_10043400()
{
  int v0; // eax
  int result; // eax

  if ( dword_10AA33D4 )
  {
    v0 = ++dword_10AA2A0C;
    if ( dword_10AA2A0C >= 4 )
    {
      v0 = 0;
      dword_10AA2A0C = 0;
    }
    if ( v0 == 1 )
    {
      v0 = 2;
LABEL_11:
      dword_10AA2A0C = v0;
      goto LABEL_12;
    }
  }
  else
  {
    v0 = dword_10AA2A0C;
    if ( dword_10AA33D0 )
    {
      v0 = dword_10AA2A0C - 1;
      dword_10AA2A0C = v0;
      if ( v0 < 0 )
      {
        v0 = 3;
        dword_10AA2A0C = 3;
      }
      if ( v0 == 1 )
      {
        v0 = 0;
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  dword_10B4E728 = v0;
  g_ReadJoystick = dword_100AC520[v0];
  if ( g_ReadJoystick == 1 )
  {
    dword_10B4E1D4 = (int)&unk_10B4DFD8;
    result = 1;
  }
  else if ( g_ReadJoystick == 2 )
  {
    dword_10B4E1D4 = (int)&unk_10B4E080;
    result = 1;
  }
  else
  {
    if ( g_ReadJoystick == 3 )
      dword_10B4E1D4 = (int)&unk_10B4E128;
    else
      dword_10B4E1D4 = (int)&g_Config;
    result = 1;
  }
  return result;
}
// 10AA2A0C: using guessed type int dword_10AA2A0C;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1D4: using guessed type int dword_10B4E1D4;
// 10B4E728: using guessed type int dword_10B4E728;
