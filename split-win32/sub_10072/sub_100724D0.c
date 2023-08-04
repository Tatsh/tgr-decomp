#include "../../types-win32.h"
//----- (100724D0) --------------------------------------------------------
int __cdecl sub_100724D0(int a1)
{
  int result; // eax

  if ( byte_100BBAE0 )
    result = (*(int (__stdcall **)(_DWORD, unsigned int))(**(_DWORD **)(a1 + 156) + 60))(
               *(_DWORD *)(a1 + 156),
               10 * ((unsigned int)(unsigned __int8)byte_100BBAE0 * *(_DWORD *)(a1 + 20) / 0xFF - 400));
  else
    result = (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 156) + 60))(*(_DWORD *)(a1 + 156), -10000);
  return result;
}
// 100BBAE0: using guessed type char byte_100BBAE0;
