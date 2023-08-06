#include "../../types-n64.h"
//----- (8023EE84) --------------------------------------------------------
int *__fastcall sub_8023EE84(int a1, int a2, int a3)
{
  int *result; // $v0
  int v5; // $v0
  int *v6; // [sp+24h] [-4h]

  result = (int *)(*(int (__fastcall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1, 60);
  if ( result )
  {
    v6 = result;
    v5 = (*(int (__fastcall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1, a3);
    v6[9] = v5;
    if ( v5 )
    {
      v6[10] = v6[9] + a3;
      *v6 = 0;
      v6[13] = a2;
      sub_8023EDB0(v6, a1, v6 + 14);
      result = v6;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD, int *))(a1 + 36))(*(_DWORD *)(a1 + 40), v6);
      result = 0;
    }
  }
  return result;
}
