#include "../../types-win32.h"
//----- (1001A5D0) --------------------------------------------------------
IID *__cdecl sub_1001A5D0[3](_DWORD *a1, void *a2, unk1 *a3)
{
  IID **__attribute__((__org_arrdim(0,3))) result; // eax

  if ( !a1 )
    return 0;
  if ( a3 )
    result = (IID **)meth_1001B7C0((unk0 *)a1, a2, (unk0 *)a3, (int)&a2, 0);
  else
    result = (IID **)meth_1001B690(a1, (int)a2, &a2, 0);
  if ( !result )
    result = (IID **)a2;
  return result;
}
