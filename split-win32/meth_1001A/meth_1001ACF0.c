#include "../../types-win32.h"
//----- (1001ACF0) --------------------------------------------------------
BOOL __thiscall meth_1001ACF0(unk0 *this, int a2)
{
  LPPALETTEENTRY v3; // eax
  int v4; // edi
  int v5; // eax

  if ( !a2 )
    return 0;
  v3 = meth_1001AC60(this);
  v4 = sub_1001A8C0((int)v3);
  if ( meth_1001AD90((unk0 *)a2) )
    v5 = v4 & *(_DWORD *)(a2 + 184);
  else
    v5 = v4 & *(_DWORD *)(a2 + 436);
  return v5 != 0;
}
