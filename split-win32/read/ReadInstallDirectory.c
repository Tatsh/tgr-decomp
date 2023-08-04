#include "../../types-win32.h"
//----- (1006A8A0) --------------------------------------------------------
unsigned int ReadInstallDirectory()
{
  LSTATUS ls; // esi
  unsigned int ret; // eax
  HKEY pHKResult; // [esp+8h] [ebp-8h] BYREF
  DWORD bufSize; // [esp+Ch] [ebp-4h] BYREF

  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\SouthPeak Interactive\\Boss Rally", 0, KEY_READ, &pHKResult)
    || (bufSize = 0x104,
        ls = RegQueryValueExA(pHKResult, "Directory", 0, 0, (LPBYTE)g_InstallPath, &bufSize),
        RegCloseKey(pHKResult),
        ls) )
  {
    ret = strlen("c:\\") + 1;
    qmemcpy(g_InstallPath, "c:\\", ret);
  }
  else
  {
    ret = 0;
    if ( byte_10B501DF[strlen(g_InstallPath)] != 92 )// != '\\'
    {
      ret = 0;
      strcat(g_InstallPath, kBackslash);
    }
  }
  return ret;
}
