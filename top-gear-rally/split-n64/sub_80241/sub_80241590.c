#include "../../types-n64.h"
//----- (80241590) --------------------------------------------------------
int __fastcall sub_80241590(char a1, char a2, int a3, int a4, int a5)
{
  int result; // $v0

  result = (*(int (__fastcall **)(_DWORD, int, int))(a5 + 32))(*(_DWORD *)(a5 + 40), 1, 28);
  if ( result )
  {
    *(_DWORD *)result = 0;
    *(_BYTE *)(result + 16) = a1;
    *(_BYTE *)(result + 17) = a2;
    *(_DWORD *)(result + 20) = a3;
    *(_DWORD *)(result + 24) = a4;
  }
  return result;
}
