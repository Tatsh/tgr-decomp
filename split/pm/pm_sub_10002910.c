//----- (10002910) --------------------------------------------------------
DWORD pm_sub_10002910()
{
  DWORD result; // eax
  MCI_PLAY_PARMS playParms; // [esp+0h] [ebp-10h] BYREF

  if ( g_Playmusic == 1 )                       // play with MCI
  {
    if ( g_Playmusic && dword_10220CD0 && dword_10220C3C )
    {
      playParms.dwTo = 8;
      mciSendCommandA(mciId, 0x814u, 0x100u, (DWORD_PTR)&playParms);// MCI_CLOSE
      result = playParms.dwFrom;
    }
    else
    {
      result = 0;
    }
  }
  else if ( g_Playmusic && dword_10220CD0 )     // play with EAR
  {
    result = dword_10220C3C != 0 ? dword_10220CD4 : 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
