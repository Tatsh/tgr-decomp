#include "../../types-win32.h"
//----- (10048960) --------------------------------------------------------
int sub_10048960()
{
  int *v0; // esi
  int v1; // edi
  int (__stdcall *v2)(int *, int); // edi
  int result; // eax

  v0 = *(int **)(*(_DWORD *)dword_118ABE08 + 68);
  v1 = *v0;
  (*(void (__stdcall **)(int *, _DWORD, int))(*v0 + 44))(v0, *(_DWORD *)(*(_DWORD *)dword_118ABE08 + 88), 1);
  v2 = *(int (__stdcall **)(int *, int))(v1 + 72);
  for ( result = v2(v0, 2); result; result = v2(v0, 2) )
    Sleep(0);
  return result;
}
// 118ABE08: using guessed type int dword_118ABE08;
