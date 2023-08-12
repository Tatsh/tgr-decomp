#include "types-win32.h"
//----- (1003BD80) --------------------------------------------------------
int sub_1003BD80() {
  int *v0;                 // eax
  HMODULE v1;              // eax
  int v3;                  // eax
  HRESULT v4;              // eax
  int errno;               // esi
  const CHAR *format;      // eax
  const CHAR *v7;          // eax
  int v8;                  // [esp-4h] [ebp-410h]
  char errorMessage[1024]; // [esp+Ch] [ebp-400h] BYREF

  lstrcpyA(String1, String2);
  lstrcpyA(byte_10A9CEF8, String2);
  memset(byte_10B4E740, 0, sizeof(byte_10B4E740));
  memset(byte_10B4E760, 0, sizeof(byte_10B4E760));
  v0 = dword_10A9C0CC;
  do {
    *v0 = 0;
    v0 += 56;
  } while ((int)v0 < (int)&unk_10A9CECC);
  v1 = GetModuleHandleA(0);
  if (sub_1000C5D0((int)v1, &unk) < 0)
    return 0;
  v3 = SetupDirectPlayPlayer((#503 *)&unk);
  if (v3 == -2005466066) {
    unk = 0;
    v4 = sub_1003C520((LPVOID *)&unk);
    errno = v4;
    if (v4 < 0) {
      sprintf(errorMessage, "Could not create DirectPlay object because of error 0x%08X", v4);
      format = GetStringWithIndex(0x12Bu);
      showMessageBox(format, errno);
      return 0;
    }
  } else {
    if (v3 < 0) {
      v8 = v3;
      v7 = GetStringWithIndex(0x12Au);
      showMessageBox(v7, v8);
      exit(1);
    }
    if (dword_10277B4C) {
      gNetworkPlay = 2;
      dword_10AA2884 = 1;
    } else {
      gNetworkPlay = 1;
      dword_10AA2884 = 0;
    }
    dword_10A9D000 = 1;
  }
  dword_10A9D008 = (int)&unk;
  if (dword_10A9D000) {
    dword_10AA2898 = 0;
    if (dword_10AA29D4 && sub_1003CC70(unk) < 0)
      return 0;
    uIDEvent = SetTimer(gHwnd, 1u, 0x3E8u, 0);
    dword_10A9CFFC = 1;
  } else {
    (*(void(__stdcall **)(
        SIZE_T, int *, int(__stdcall *)(IID *, int, SIZE_T, int, int, int), HWND, _DWORD))(
        *(_DWORD *)unk + 140))(unk, &dword_1008F538, sub_1003C430, gHwnd, 0);
    if (sub_1003D7B0(&dword_10A9BFD8) < 0)
      return 0;
  }
  return 1;
}
// 1008F538: using guessed type int dword_1008F538;
// 1022AF18: using guessed type int gNetworkPlay;
// 10277B4C: using guessed type int dword_10277B4C;
// 10A9BFD8: using guessed type int dword_10A9BFD8;
// 10A9C0CC: using guessed type int dword_10A9C0CC[];
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D4: using guessed type int dword_10AA29D4;
