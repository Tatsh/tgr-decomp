//----- (100027F0) --------------------------------------------------------
int __cdecl pm_sub_100027F0(int a1)
{
  int v1; // esi

  if ( g_Playmusic && dword_10220CD0 )
  {
    v1 = a1;
    if ( a1 < dword_10220C44 )
      v1 = dword_10220C44;
    if ( v1 > playParmsPlayTo )
      v1 = playParmsPlayTo;
    dword_10220CD4 = v1;
    if ( dword_10220C3C )
    {
      EAR_DLL_ClearChannel(dword_100940A8, 0);
      dword_10220C6C = 256;
      dword_10220C54 = v1;
      word_10220C92 = 0;
      g_WPARAM = EAR_DLL_MixEvent(&word_10220C50);
    }
  }
  return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C38: using guessed type int playParmsPlayTo;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220C44: using guessed type int dword_10220C44;
// 10220C50: using guessed type __int16 word_10220C50;
// 10220C54: using guessed type int dword_10220C54;
// 10220C58: using guessed type int g_WPARAM;
// 10220C6C: using guessed type int dword_10220C6C;
// 10220C92: using guessed type __int16 word_10220C92;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
// 1057546C: using guessed type int (__stdcall *EAR_DLL_MixEvent)(_DWORD);
// 10575480: using guessed type int (__stdcall *EAR_DLL_ClearChannel)(_DWORD, _DWORD);
