//----- (10002510) --------------------------------------------------------
BOOL pm_sub_10002510()
{
  BOOL result; // eax

  if ( g_Playmusic && dword_10220CD0 && dword_10220C3C )
    result = mciPlayOrClose((DWORD_PTR)hWnd, dword_10220CD4) == 0;
  else
    result = 1;
  return result;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
