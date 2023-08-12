#include "types-win32.h"
//----- (1003CE80) --------------------------------------------------------
int sub_1003CE80() {
  int result;     // eax
  int v1;         // esi
  HGLOBAL v2;     // eax
  HGLOBAL v3;     // eax
  int v4;         // esi
  int v5;         // eax
  LPCVOID v6;     // edx
  const char *v7; // edi
  HGLOBAL v8;     // eax
  HGLOBAL v9;     // eax
  LPCVOID pMem;   // [esp+8h] [ebp-54h] BYREF
  char v11[80];   // [esp+Ch] [ebp-50h] BYREF

  pMem = 0;
  if (!unk)
    return -2005467006;
  memset(v11, 0, sizeof(v11));
  v1 = sub_1003D0B0(unk, (LPDWORD)&pMem);
  if (v1 >= 0) {
    dword_100AC648 = *((_DWORD *)pMem + 16);
    gChosenTrack = dword_100AC648;
    dword_10AA2A00 = *((_DWORD *)pMem + 17);
    gChosenWeather0 = dword_10AA2A00;
    dword_10AA2A18 = *((_DWORD *)pMem + 18);
    dword_100BD3E0 = *((_DWORD *)pMem + 19);
    dword_100AC658 = dword_100BD3E0;
    sub_10044540();
    v4 = dword_100AC654;
    if (!sub_1003F320(dword_100AC654)) {
      do {
        v5 = ++dword_100AC654;
        if (dword_100AC654 > 31) {
          v5 = 0;
          dword_100AC654 = 0;
        }
      } while (v5 != v4 && !sub_1003F320(v5));
    }
    v6 = pMem;
    v7 = (const char *)*((_DWORD *)pMem + 12);
    if (v7)
      strcpy(g_lpSessionDesc_dwUser3, v7);
    v8 = GlobalHandle(v6);
    GlobalUnlock(v8);
    v9 = GlobalHandle(pMem);
    GlobalFree(v9);
    result = 0;
  } else {
    if (pMem) {
      v2 = GlobalHandle(pMem);
      GlobalUnlock(v2);
      v3 = GlobalHandle(pMem);
      GlobalFree(v3);
    }
    result = v1;
  }
  return result;
}
// 100AC648: using guessed type int dword_100AC648;
// 100AC654: using guessed type int dword_100AC654;
// 100AC658: using guessed type int dword_100AC658;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B350: using guessed type int g_ChosenWeather;
// 10AA2A00: using guessed type int dword_10AA2A00;
// 10AA2A18: using guessed type int dword_10AA2A18;
