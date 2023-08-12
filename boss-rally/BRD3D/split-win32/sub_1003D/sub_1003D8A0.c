#include "types-win32.h"
//----- (1003D8A0) --------------------------------------------------------
int __cdecl sub_1003D8A0(int a1, int a2) {
  int v2;         // ecx
  const void *v3; // esi
  int v4;         // edi
  HGLOBAL v5;     // eax
  HGLOBAL v6;     // eax
  HGLOBAL v7;     // eax
  SIZE_T dwBytes; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_DWORD *)unk;
  v3 = 0;
  dwBytes = 0;
  v4 = (*(int(__stdcall **)(SIZE_T, _DWORD, _DWORD, SIZE_T *))(v2 + 72))(unk, 0, 0, &dwBytes);
  if (v4 == -2005467106) {
    v5 = GlobalAlloc(0x42u, dwBytes);
    v3 = GlobalLock(v5);
    if (v3) {
      v4 = (*(int(__stdcall **)(SIZE_T, _DWORD, const void *, SIZE_T *))(*(_DWORD *)unk + 72))(
          unk, 0, v3, &dwBytes);
      if (v4 >= 0)
        v4 = (*(int(__stdcall **)(
            int, int(__stdcall *)(int, int, LPCSTR, int), const void *, SIZE_T, int))(
            *(_DWORD *)a2 + 20))(a2, sub_1003D850, v3, dwBytes, a1);
    } else {
      v4 = -2147024882;
    }
  }
  if (v3) {
    v6 = GlobalHandle(v3);
    GlobalUnlock(v6);
    v7 = GlobalHandle(v3);
    GlobalFree(v7);
  }
  return v4;
}
