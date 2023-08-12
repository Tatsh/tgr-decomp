#include "types-win32.h"
//----- (1006A8A0) --------------------------------------------------------
unsigned int ReadInstallDirectory() {
  int ls;           // esi
  unsigned int ret; // eax
  HKEY pHKResult;   // [esp+8h] [ebp-8h] BYREF
  DWORD bufSize;    // [esp+Ch] [ebp-4h] BYREF

  if (RegOpenKeyExA(
          -2147483646, "SOFTWARE\\SouthPeak Interactive\\Boss Rally", 0, KEY_READ, &pHKResult) ||
      (bufSize = 0x104,
       ls = RegQueryValueExA(pHKResult, "Directory", 0, 0, gInstallPath, &bufSize),
       RegCloseKey(pHKResult),
       ls)) {
    ret = strlen("c:\\") + 1;
    qmemcpy(gInstallPath, "c:\\", ret);
  } else {
    ret = 0;
    if (byte_10B501DF[strlen(gInstallPath)] != 92) // != '\\'
    {
      ret = 0;
      strcat(gInstallPath, kBackslash);
    }
  }
  return ret;
}
// 118AE3D0: using guessed type int __stdcall RegCloseKey(_DWORD);
// 118AE3D4: using guessed type int __stdcall RegQueryValueExA(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 118AE3DC: using guessed type int __stdcall RegOpenKeyExA(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
