//----- (1006A8A0) --------------------------------------------------------
unsigned int readInstallDirectory()
{
  LSTATUS v0; // esi
  unsigned int result; // eax
  HKEY phkResult; // [esp+8h] [ebp-8h] BYREF
  DWORD cbData; // [esp+Ch] [ebp-4h] BYREF

  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\SouthPeak Interactive\\Boss Rally", 0, 0x20019u, &phkResult)
    || (cbData = 260, v0 = RegQueryValueExA(phkResult, "Directory", 0, 0, Data, &cbData), RegCloseKey(phkResult), v0) )
  {
    result = strlen("c:\\") + 1;
    qmemcpy(Data, "c:\\", result);
  }
  else
  {
    result = 0;
    if ( byte_10B501DF[strlen((const char *)Data)] != 92 )// != '\\'
    {
      result = 0;
      strcat((char *)Data, Path);
    }
  }
  return result;
}
