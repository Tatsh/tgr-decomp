#include "../../types-win32.h"
//----- (100480A0) --------------------------------------------------------
int __thiscall meth_100480A0(int this)
{
  DWORD v2; // eax
  DWORD v3; // ecx
  int v4; // edx
  int v5; // eax
  __int16 v6; // ax
  int v7; // ebx
  int v8; // edx
  __int16 v9; // ax
  int v11; // edx
  int v12; // eax

  if ( *(_DWORD *)(this + 10600) )
  {
    v2 = getTicks();
    v3 = v2 - *(_DWORD *)(this + 10608);
    v4 = *(_DWORD *)(this + 10612);
    *(_DWORD *)(this + 10608) = v2;
    v5 = *(_DWORD *)(this + 10604);
    *(_DWORD *)(this + 10612) = v3 + v4;
    if ( v5 )
    {
      v6 = *(_WORD *)(this + 296);
      if ( *(_DWORD *)(this + 10612) > *(_DWORD *)(this + 4 * v6 + 10616) )
      {
        v7 = *(_DWORD *)(this + 28);
        v8 = *(_DWORD *)(this + 14416);
        *(_DWORD *)(this + 10612) = 0;
        v9 = v6 + 1;
        *(_DWORD *)(this + 14416) = v8 | 0x100;
        *(_DWORD *)(this + 28) = v7 | 0x100;
        *(_WORD *)(this + 296) = v9;
        if ( *(int *)(this + 4 * v9 + 10616) <= 0 )
        {
          *(_WORD *)(this + 296) = 0;
          return 1;
        }
      }
    }
    else if ( *(int *)(this + 10612) > 60 )
    {
      v11 = *(_DWORD *)(this + 28);
      v12 = *(_DWORD *)(this + 14416);
      *(_DWORD *)(this + 10612) = 0;
      *(_DWORD *)(this + 28) = v11 | 0x100;
      *(_DWORD *)(this + 14416) = v12 | 0x100;
    }
  }
  return 1;
}
