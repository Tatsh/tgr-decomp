//----- (10002A20) --------------------------------------------------------
int __cdecl pm_sub_10002A20(unsigned __int8 a1)
{
  if ( g_Playmusic && dword_10220CD0 && dword_10220C3C )
    EAR_DLL_SetAttenuationLevel(dword_100940A8, 10000 * a1 / 255);
  return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10575454: using guessed type int (__stdcall *EAR_DLL_SetAttenuationLevel)(_DWORD, _DWORD);
