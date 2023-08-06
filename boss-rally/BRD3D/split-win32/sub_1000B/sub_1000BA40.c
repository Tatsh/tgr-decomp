#include "../../types-win32.h"
//----- (1000BA40) --------------------------------------------------------
int __cdecl sub_1000BA40(int a1, COLORREF color)
{
  int v2; // eax
  int v3; // ecx
  int v5[2]; // [esp+4h] [ebp-8h] BYREF

  v2 = sub_1000B940((_DWORD *)a1, color);
  v3 = *(_DWORD *)a1;
  v5[0] = v2;
  v5[1] = v2;
  return (*(int (__stdcall **)(int, int, int *))(v3 + 116))(a1, 8, v5);
}
