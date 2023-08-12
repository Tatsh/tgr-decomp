#include "types-win32.h"
//----- (10072A00) --------------------------------------------------------
int __cdecl sub_10072A00(int a1) {
  int v1;     // edi
  int v2;     // eax
  int result; // eax
  int v4;     // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 24);
  v4 = 0;
  if (v2)
    v1 = 1;
  if (!(*(int(__stdcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 156) + 36))(*(_DWORD *)(a1 + 156),
                                                                           &v4) &&
      (v4 & 1) == 1) {
    return (*(int(__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 156) + 52))(
        *(_DWORD *)(a1 + 156), 0);
  }
  result = (*(int(__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 156) + 48))(
      *(_DWORD *)(a1 + 156), 0, 0, v1);
  if (!result)
    *(_DWORD *)(a1 + 28) = 1;
  return result;
}
