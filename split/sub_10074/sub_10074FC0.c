//----- (10074FC0) --------------------------------------------------------
BOOL sub_10074FC0()
{
  WaitForSingleObject(dword_118AA0A0, 0xFFFFFFFF);
  if ( dword_118AA098 != dword_118A9878 )
  {
    dword_118AA0B8(*(&dword_118A9880 + 2 * dword_118AA098), dword_118A9884[2 * dword_118AA098]);
    if ( ++dword_118AA098 >= 256 )
      dword_118AA098 = 0;
  }
  return ReleaseMutex(dword_118AA0A0);
}
// 118A9878: using guessed type int dword_118A9878;
// 118AA098: using guessed type int dword_118AA098;
// 118AA0B8: using guessed type int (__cdecl *dword_118AA0B8)(_DWORD, _DWORD);
