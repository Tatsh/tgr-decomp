#include "types-win32.h"
//----- (1003CDA0) --------------------------------------------------------
int sub_1003CDA0() {
  int result;   // eax
  int v1;       // esi
  HGLOBAL v2;   // eax
  HGLOBAL v3;   // eax
  HGLOBAL v4;   // eax
  HGLOBAL v5;   // eax
  LPCVOID pMem; // [esp+Ch] [ebp-4h] BYREF

  pMem = 0;
  if (!unk)
    return -2005467006;
  v1 = sub_1003D0B0(unk, (LPDWORD)&pMem);
  if (v1 >= 0 &&
      (*((_DWORD *)pMem + 16) = gChosenTrack,
       *((_DWORD *)pMem + 17) = gChosenWeather0,
       *((_DWORD *)pMem + 18) = dword_10AA2A18,
       *((_DWORD *)pMem + 19) = dword_100AC658,
       sub_10044540(),
       v1 = (*(int(__stdcall **)(SIZE_T, LPCVOID, _DWORD))(*(_DWORD *)unk + 124))(unk, pMem, 0),
       v1 >= 0)) {
    v4 = GlobalHandle(pMem);
    GlobalUnlock(v4);
    v5 = GlobalHandle(pMem);
    GlobalFree(v5);
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
// 100AC658: using guessed type int dword_100AC658;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B350: using guessed type int g_ChosenWeather;
// 10AA2A18: using guessed type int dword_10AA2A18;
